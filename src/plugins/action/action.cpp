// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/action/action.proto)

#include <iomanip>

#include "action_impl.h"
#include "plugins/action/action.h"

namespace mavsdk {

Action::Action(System& system) : PluginBase(), _impl{std::make_unique<ActionImpl>(system)} {}

Action::Action(std::shared_ptr<System> system) :
    PluginBase(),
    _impl{std::make_unique<ActionImpl>(system)}
{}

Action::~Action() {}

void Action::arm_async(const ResultCallback callback)
{
    _impl->arm_async(callback);
}

Action::Result Action::arm() const
{
    return _impl->arm();
}

void Action::disarm_async(const ResultCallback callback)
{
    _impl->disarm_async(callback);
}

Action::Result Action::disarm() const
{
    return _impl->disarm();
}

void Action::takeoff_async(const ResultCallback callback)
{
    _impl->takeoff_async(callback);
}

Action::Result Action::takeoff() const
{
    return _impl->takeoff();
}

void Action::land_async(const ResultCallback callback)
{
    _impl->land_async(callback);
}

Action::Result Action::land() const
{
    return _impl->land();
}

void Action::prec_land_async(const ResultCallback callback)
{
    _impl->prec_land_async(callback);
}

Action::Result Action::prec_land() const
{
    return _impl->prec_land();
}

void Action::reboot_async(const ResultCallback callback)
{
    _impl->reboot_async(callback);
}

Action::Result Action::reboot() const
{
    return _impl->reboot();
}

void Action::shutdown_async(const ResultCallback callback)
{
    _impl->shutdown_async(callback);
}

Action::Result Action::shutdown() const
{
    return _impl->shutdown();
}

void Action::terminate_async(const ResultCallback callback)
{
    _impl->terminate_async(callback);
}

Action::Result Action::terminate() const
{
    return _impl->terminate();
}

void Action::kill_async(const ResultCallback callback)
{
    _impl->kill_async(callback);
}

Action::Result Action::kill() const
{
    return _impl->kill();
}

void Action::return_to_launch_async(const ResultCallback callback)
{
    _impl->return_to_launch_async(callback);
}

Action::Result Action::return_to_launch() const
{
    return _impl->return_to_launch();
}

void Action::goto_location_async(
    double latitude_deg,
    double longitude_deg,
    float absolute_altitude_m,
    float yaw_deg,
    const ResultCallback callback)
{
    _impl->goto_location_async(latitude_deg, longitude_deg, absolute_altitude_m, yaw_deg, callback);
}

Action::Result Action::goto_location(
    double latitude_deg, double longitude_deg, float absolute_altitude_m, float yaw_deg) const
{
    return _impl->goto_location(latitude_deg, longitude_deg, absolute_altitude_m, yaw_deg);
}

void Action::do_orbit_async(
    float radius_m,
    float velocity_ms,
    OrbitYawBehavior yaw_behavior,
    double latitude_deg,
    double longitude_deg,
    double absolute_altitude_m,
    const ResultCallback callback)
{
    _impl->do_orbit_async(
        radius_m,
        velocity_ms,
        yaw_behavior,
        latitude_deg,
        longitude_deg,
        absolute_altitude_m,
        callback);
}

Action::Result Action::do_orbit(
    float radius_m,
    float velocity_ms,
    OrbitYawBehavior yaw_behavior,
    double latitude_deg,
    double longitude_deg,
    double absolute_altitude_m) const
{
    return _impl->do_orbit(
        radius_m, velocity_ms, yaw_behavior, latitude_deg, longitude_deg, absolute_altitude_m);
}

void Action::hold_async(const ResultCallback callback)
{
    _impl->hold_async(callback);
}

Action::Result Action::hold() const
{
    return _impl->hold();
}

void Action::set_actuator_async(int32_t index, float value, const ResultCallback callback)
{
    _impl->set_actuator_async(index, value, callback);
}

Action::Result Action::set_actuator(int32_t index, float value) const
{
    return _impl->set_actuator(index, value);
}

void Action::transition_to_fixedwing_async(const ResultCallback callback)
{
    _impl->transition_to_fixedwing_async(callback);
}

Action::Result Action::transition_to_fixedwing() const
{
    return _impl->transition_to_fixedwing();
}

void Action::transition_to_multicopter_async(const ResultCallback callback)
{
    _impl->transition_to_multicopter_async(callback);
}

Action::Result Action::transition_to_multicopter() const
{
    return _impl->transition_to_multicopter();
}

void Action::get_takeoff_altitude_async(const GetTakeoffAltitudeCallback callback)
{
    _impl->get_takeoff_altitude_async(callback);
}

std::pair<Action::Result, float> Action::get_takeoff_altitude() const
{
    return _impl->get_takeoff_altitude();
}

void Action::set_takeoff_altitude_async(float altitude, const ResultCallback callback)
{
    _impl->set_takeoff_altitude_async(altitude, callback);
}

Action::Result Action::set_takeoff_altitude(float altitude) const
{
    return _impl->set_takeoff_altitude(altitude);
}

void Action::get_maximum_speed_async(const GetMaximumSpeedCallback callback)
{
    _impl->get_maximum_speed_async(callback);
}

std::pair<Action::Result, float> Action::get_maximum_speed() const
{
    return _impl->get_maximum_speed();
}

void Action::set_maximum_speed_async(float speed, const ResultCallback callback)
{
    _impl->set_maximum_speed_async(speed, callback);
}

Action::Result Action::set_maximum_speed(float speed) const
{
    return _impl->set_maximum_speed(speed);
}

void Action::get_return_to_launch_altitude_async(const GetReturnToLaunchAltitudeCallback callback)
{
    _impl->get_return_to_launch_altitude_async(callback);
}

std::pair<Action::Result, float> Action::get_return_to_launch_altitude() const
{
    return _impl->get_return_to_launch_altitude();
}

void Action::set_return_to_launch_altitude_async(
    float relative_altitude_m, const ResultCallback callback)
{
    _impl->set_return_to_launch_altitude_async(relative_altitude_m, callback);
}

Action::Result Action::set_return_to_launch_altitude(float relative_altitude_m) const
{
    return _impl->set_return_to_launch_altitude(relative_altitude_m);
}

std::ostream& operator<<(std::ostream& str, Action::Result const& result)
{
    switch (result) {
        case Action::Result::Unknown:
            return str << "Unknown";
        case Action::Result::Success:
            return str << "Success";
        case Action::Result::NoSystem:
            return str << "No System";
        case Action::Result::ConnectionError:
            return str << "Connection Error";
        case Action::Result::Busy:
            return str << "Busy";
        case Action::Result::CommandDenied:
            return str << "Command Denied";
        case Action::Result::CommandDeniedLandedStateUnknown:
            return str << "Command Denied Landed State Unknown";
        case Action::Result::CommandDeniedNotLanded:
            return str << "Command Denied Not Landed";
        case Action::Result::Timeout:
            return str << "Timeout";
        case Action::Result::VtolTransitionSupportUnknown:
            return str << "Vtol Transition Support Unknown";
        case Action::Result::NoVtolTransitionSupport:
            return str << "No Vtol Transition Support";
        case Action::Result::ParameterError:
            return str << "Parameter Error";
        default:
            return str << "Unknown";
    }
}

std::ostream& operator<<(std::ostream& str, Action::OrbitYawBehavior const& orbit_yaw_behavior)
{
    switch (orbit_yaw_behavior) {
        case Action::OrbitYawBehavior::HoldFrontToCircleCenter:
            return str << "Hold Front To Circle Center";
        case Action::OrbitYawBehavior::HoldInitialHeading:
            return str << "Hold Initial Heading";
        case Action::OrbitYawBehavior::Uncontrolled:
            return str << "Uncontrolled";
        case Action::OrbitYawBehavior::HoldFrontTangentToCircle:
            return str << "Hold Front Tangent To Circle";
        case Action::OrbitYawBehavior::RcControlled:
            return str << "Rc Controlled";
        default:
            return str << "Unknown";
    }
}

} // namespace mavsdk