//
// Example that demonstrates the usage of the FollowMe plugin.
// The example registers with FakeLocationProvider for location updates and
// sends them to the Follow Me plugin which are sent to drone.
//

#include <mavsdk/mavsdk.h>
#include <mavsdk/plugins/action/action.h>
#include <mavsdk/plugins/follow_me/follow_me.h>
#include <mavsdk/plugins/telemetry/telemetry.h>
#include <chrono>
#include <future>
#include <iostream>
#include <memory>
#include <thread>

#include "fake_location_provider.h"

using namespace mavsdk;
using std::this_thread::sleep_for;
using std::chrono::seconds;

void usage(const std::string& bin_name)
{
    std::cerr << "Usage : " << bin_name << " <connection_url>\n"
              << "Connection URL format should be :\n"
              << " For TCP : tcp://[server_host][:server_port]\n"
              << " For UDP : udp://[bind_host][:bind_port]\n"
              << " For Serial : serial:///path/to/serial/dev[:baudrate]\n"
              << "For example, to connect to the simulator use URL: udp://:14540\n";
}

std::shared_ptr<System> get_system(Mavsdk& mavsdk)
{
    std::cout << "Waiting to discover system...\n";
    auto prom = std::promise<std::shared_ptr<System>>{};
    auto fut = prom.get_future();

    // We wait for new systems to be discovered, once we find one that has an
    // autopilot, we decide to use it.
    mavsdk.subscribe_on_new_system([&mavsdk, &prom]() {
        auto system = mavsdk.systems().back();

        if (system->has_autopilot()) {
            std::cout << "Discovered autopilot\n";

            // Unsubscribe again as we only want to find one system.
            mavsdk.subscribe_on_new_system(nullptr);
            prom.set_value(system);
        }
    });

    // We usually receive heartbeats at 1Hz, therefore we should find a
    // system after around 3 seconds max, surely.
    if (fut.wait_for(seconds(3)) == std::future_status::timeout) {
        std::cerr << "No autopilot found.\n";
        return {};
    }

    // Get discovered system now.
    return fut.get();
}

int main(int argc, char** argv)
{
    if (argc != 2) {
        usage(argv[0]);
        return 1;
    }

    Mavsdk mavsdk;
    ConnectionResult connection_result = mavsdk.add_any_connection(argv[1]);

    if (connection_result != ConnectionResult::Success) {
        std::cerr << "Connection failed: " << connection_result << '\n';
        return 1;
    }

    auto system = get_system(mavsdk);
    if (!system) {
        return 1;
    }

    // Instantiate plugins.
    auto action = Action{system};
    auto follow_me = FollowMe{system};
    auto telemetry = Telemetry{system};

    while (!telemetry.health_all_ok()) {
        std::cout << "Waiting for system to be ready\n";
        sleep_for(seconds(1));
    }
    std::cout << "System is ready\n";

    // Arm
    Action::Result arm_result = action.arm();
    if (arm_result != Action::Result::Success) {
        std::cerr << "Arming failed: " << arm_result << '\n';
        return 1;
    }
    std::cout << "Armed\n";

    const Telemetry::Result set_rate_result = telemetry.set_rate_position(1.0);
    if (set_rate_result != Telemetry::Result::Success) {
        std::cerr << "Setting rate failed:" << set_rate_result << '\n';
        return 1;
    }

    telemetry.subscribe_position([](Telemetry::Position position) {
        std::cout << "Vehicle is at: " << position.latitude_deg << ", " << position.longitude_deg
                  << " degrees\n";
    });

    // Subscribe to receive updates on flight mode. You can find out whether FollowMe is active.
    telemetry.subscribe_flight_mode([&](Telemetry::FlightMode flight_mode) {
        const FollowMe::TargetLocation last_location = follow_me.get_last_location();
        std::cout << "[FlightMode: " << flight_mode
                  << "] Target is at: " << last_location.latitude_deg << ", "
                  << last_location.longitude_deg << " degrees.\n";
    });

    // Takeoff
    Action::Result takeoff_result = action.takeoff();
    if (takeoff_result != Action::Result::Success) {
        std::cerr << "Arming failed: " << takeoff_result << '\n';
        return 1;
    }
    std::cout << "In Air...\n";
    sleep_for(seconds(5)); // Wait for drone to reach takeoff altitude

    // Configure Min height of the drone to be "20 meters" above home & Follow direction as "Front
    // right".
    FollowMe::Config config;
    config.min_height_m = 10.0;
    config.follow_direction = FollowMe::Config::FollowDirection::Behind;
    FollowMe::Result follow_me_result = follow_me.set_config(config);

    if (follow_me_result != FollowMe::Result::Success) {
        std::cerr << "Setting follow me config failed: " << follow_me_result << '\n';
        return 1;
    }

    // Start Follow Me
    follow_me_result = follow_me.start();
    if (follow_me_result != FollowMe::Result::Success) {
        std::cerr << "Starting follow me config failed: " << follow_me_result << '\n';
        return 1;
    }

    FakeLocationProvider location_provider;
    // Register for platform-specific Location provider. We're using FakeLocationProvider for the
    // example.
    location_provider.request_location_updates([&follow_me](double lat, double lon) {
        FollowMe::TargetLocation target_location{};
        target_location.latitude_deg = 47.398170327054473;
        target_location.longitude_deg = 8.5456490218639658;
        follow_me.set_target_location(target_location);
    });

    while (location_provider.is_running()) {
        sleep_for(seconds(1));
    }

    // Stop Follow Me
    follow_me_result = follow_me.stop();
    if (follow_me_result != FollowMe::Result::Success) {
        std::cerr << "Stopping follow me config failed: " << follow_me_result << '\n';
        return 1;
    }

    // Stop flight mode updates.
    telemetry.subscribe_flight_mode(nullptr);

    // Land
    const Action::Result land_result = action.land();
    if (land_result != Action::Result::Success) {
        std::cerr << "Arming failed: " << land_result << '\n';
        return 1;
    }

    while (telemetry.in_air()) {
        std::cout << "waiting until landed\n";
        sleep_for(seconds(1));
    }
    std::cout << "Landed...\n";

    while (telemetry.armed()) {
        std::cout << "waiting until disarmed\n";
        sleep_for(seconds(1));
    }

    return 0;
}
