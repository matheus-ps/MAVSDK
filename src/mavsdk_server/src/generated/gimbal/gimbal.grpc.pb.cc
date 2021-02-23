// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: gimbal/gimbal.proto

#include "gimbal/gimbal.pb.h"
#include "gimbal/gimbal.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace gimbal {

static const char* GimbalService_method_names[] = {
  "/mavsdk.rpc.gimbal.GimbalService/SetPitchAndYaw",
  "/mavsdk.rpc.gimbal.GimbalService/SetPitchRateAndYawRate",
  "/mavsdk.rpc.gimbal.GimbalService/SetMode",
  "/mavsdk.rpc.gimbal.GimbalService/SetRoiLocation",
  "/mavsdk.rpc.gimbal.GimbalService/TakeControl",
  "/mavsdk.rpc.gimbal.GimbalService/ReleaseControl",
  "/mavsdk.rpc.gimbal.GimbalService/SubscribeControl",
};

std::unique_ptr< GimbalService::Stub> GimbalService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GimbalService::Stub> stub(new GimbalService::Stub(channel));
  return stub;
}

GimbalService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SetPitchAndYaw_(GimbalService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetPitchRateAndYawRate_(GimbalService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetMode_(GimbalService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetRoiLocation_(GimbalService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TakeControl_(GimbalService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ReleaseControl_(GimbalService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SubscribeControl_(GimbalService_method_names[6], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status GimbalService::Stub::SetPitchAndYaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest& request, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::SetPitchAndYawRequest, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetPitchAndYaw_, context, request, response);
}

void GimbalService::Stub::experimental_async::SetPitchAndYaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest* request, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::SetPitchAndYawRequest, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetPitchAndYaw_, context, request, response, std::move(f));
}

void GimbalService::Stub::experimental_async::SetPitchAndYaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest* request, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetPitchAndYaw_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetPitchAndYawResponse>* GimbalService::Stub::PrepareAsyncSetPitchAndYawRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::SetPitchAndYawResponse, ::mavsdk::rpc::gimbal::SetPitchAndYawRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetPitchAndYaw_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetPitchAndYawResponse>* GimbalService::Stub::AsyncSetPitchAndYawRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetPitchAndYawRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status GimbalService::Stub::SetPitchRateAndYawRate(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest& request, ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest, ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetPitchRateAndYawRate_, context, request, response);
}

void GimbalService::Stub::experimental_async::SetPitchRateAndYawRate(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest* request, ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest, ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetPitchRateAndYawRate_, context, request, response, std::move(f));
}

void GimbalService::Stub::experimental_async::SetPitchRateAndYawRate(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest* request, ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetPitchRateAndYawRate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse>* GimbalService::Stub::PrepareAsyncSetPitchRateAndYawRateRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse, ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetPitchRateAndYawRate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse>* GimbalService::Stub::AsyncSetPitchRateAndYawRateRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetPitchRateAndYawRateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status GimbalService::Stub::SetMode(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest& request, ::mavsdk::rpc::gimbal::SetModeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::SetModeRequest, ::mavsdk::rpc::gimbal::SetModeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetMode_, context, request, response);
}

void GimbalService::Stub::experimental_async::SetMode(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest* request, ::mavsdk::rpc::gimbal::SetModeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::SetModeRequest, ::mavsdk::rpc::gimbal::SetModeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetMode_, context, request, response, std::move(f));
}

void GimbalService::Stub::experimental_async::SetMode(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest* request, ::mavsdk::rpc::gimbal::SetModeResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetMode_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetModeResponse>* GimbalService::Stub::PrepareAsyncSetModeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::SetModeResponse, ::mavsdk::rpc::gimbal::SetModeRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetMode_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetModeResponse>* GimbalService::Stub::AsyncSetModeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetModeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status GimbalService::Stub::SetRoiLocation(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest& request, ::mavsdk::rpc::gimbal::SetRoiLocationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::SetRoiLocationRequest, ::mavsdk::rpc::gimbal::SetRoiLocationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetRoiLocation_, context, request, response);
}

void GimbalService::Stub::experimental_async::SetRoiLocation(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest* request, ::mavsdk::rpc::gimbal::SetRoiLocationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::SetRoiLocationRequest, ::mavsdk::rpc::gimbal::SetRoiLocationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetRoiLocation_, context, request, response, std::move(f));
}

void GimbalService::Stub::experimental_async::SetRoiLocation(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest* request, ::mavsdk::rpc::gimbal::SetRoiLocationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetRoiLocation_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetRoiLocationResponse>* GimbalService::Stub::PrepareAsyncSetRoiLocationRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::SetRoiLocationResponse, ::mavsdk::rpc::gimbal::SetRoiLocationRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetRoiLocation_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetRoiLocationResponse>* GimbalService::Stub::AsyncSetRoiLocationRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetRoiLocationRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status GimbalService::Stub::TakeControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest& request, ::mavsdk::rpc::gimbal::TakeControlResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::TakeControlRequest, ::mavsdk::rpc::gimbal::TakeControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TakeControl_, context, request, response);
}

void GimbalService::Stub::experimental_async::TakeControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest* request, ::mavsdk::rpc::gimbal::TakeControlResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::TakeControlRequest, ::mavsdk::rpc::gimbal::TakeControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TakeControl_, context, request, response, std::move(f));
}

void GimbalService::Stub::experimental_async::TakeControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest* request, ::mavsdk::rpc::gimbal::TakeControlResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TakeControl_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::TakeControlResponse>* GimbalService::Stub::PrepareAsyncTakeControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::TakeControlResponse, ::mavsdk::rpc::gimbal::TakeControlRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TakeControl_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::TakeControlResponse>* GimbalService::Stub::AsyncTakeControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTakeControlRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status GimbalService::Stub::ReleaseControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest& request, ::mavsdk::rpc::gimbal::ReleaseControlResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::ReleaseControlRequest, ::mavsdk::rpc::gimbal::ReleaseControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ReleaseControl_, context, request, response);
}

void GimbalService::Stub::experimental_async::ReleaseControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest* request, ::mavsdk::rpc::gimbal::ReleaseControlResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::ReleaseControlRequest, ::mavsdk::rpc::gimbal::ReleaseControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ReleaseControl_, context, request, response, std::move(f));
}

void GimbalService::Stub::experimental_async::ReleaseControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest* request, ::mavsdk::rpc::gimbal::ReleaseControlResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ReleaseControl_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::ReleaseControlResponse>* GimbalService::Stub::PrepareAsyncReleaseControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::ReleaseControlResponse, ::mavsdk::rpc::gimbal::ReleaseControlRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ReleaseControl_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::ReleaseControlResponse>* GimbalService::Stub::AsyncReleaseControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncReleaseControlRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::mavsdk::rpc::gimbal::ControlResponse>* GimbalService::Stub::SubscribeControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeControlRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::gimbal::ControlResponse>::Create(channel_.get(), rpcmethod_SubscribeControl_, context, request);
}

void GimbalService::Stub::experimental_async::SubscribeControl(::grpc::ClientContext* context, ::mavsdk::rpc::gimbal::SubscribeControlRequest* request, ::grpc::experimental::ClientReadReactor< ::mavsdk::rpc::gimbal::ControlResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::gimbal::ControlResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeControl_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::gimbal::ControlResponse>* GimbalService::Stub::AsyncSubscribeControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeControlRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::gimbal::ControlResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeControl_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::gimbal::ControlResponse>* GimbalService::Stub::PrepareAsyncSubscribeControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::gimbal::ControlResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeControl_, context, request, false, nullptr);
}

GimbalService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SetPitchAndYawRequest, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest* req,
             ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* resp) {
               return service->SetPitchAndYaw(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest, ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest* req,
             ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse* resp) {
               return service->SetPitchRateAndYawRate(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SetModeRequest, ::mavsdk::rpc::gimbal::SetModeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SetModeRequest* req,
             ::mavsdk::rpc::gimbal::SetModeResponse* resp) {
               return service->SetMode(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SetRoiLocationRequest, ::mavsdk::rpc::gimbal::SetRoiLocationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SetRoiLocationRequest* req,
             ::mavsdk::rpc::gimbal::SetRoiLocationResponse* resp) {
               return service->SetRoiLocation(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::TakeControlRequest, ::mavsdk::rpc::gimbal::TakeControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::TakeControlRequest* req,
             ::mavsdk::rpc::gimbal::TakeControlResponse* resp) {
               return service->TakeControl(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::ReleaseControlRequest, ::mavsdk::rpc::gimbal::ReleaseControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::ReleaseControlRequest* req,
             ::mavsdk::rpc::gimbal::ReleaseControlResponse* resp) {
               return service->ReleaseControl(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[6],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SubscribeControlRequest, ::mavsdk::rpc::gimbal::ControlResponse>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SubscribeControlRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::gimbal::ControlResponse>* writer) {
               return service->SubscribeControl(ctx, req, writer);
             }, this)));
}

GimbalService::Service::~Service() {
}

::grpc::Status GimbalService::Service::SetPitchAndYaw(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest* request, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::SetPitchRateAndYawRate(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateRequest* request, ::mavsdk::rpc::gimbal::SetPitchRateAndYawRateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::SetMode(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest* request, ::mavsdk::rpc::gimbal::SetModeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::SetRoiLocation(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest* request, ::mavsdk::rpc::gimbal::SetRoiLocationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::TakeControl(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest* request, ::mavsdk::rpc::gimbal::TakeControlResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::ReleaseControl(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest* request, ::mavsdk::rpc::gimbal::ReleaseControlResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::SubscribeControl(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SubscribeControlRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::gimbal::ControlResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace gimbal

