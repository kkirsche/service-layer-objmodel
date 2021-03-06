// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: sl_route_ipv6.proto

#include "sl_route_ipv6.pb.h"
#include "sl_route_ipv6.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace service_layer {

static const char* SLRoutev6Oper_method_names[] = {
  "/service_layer.SLRoutev6Oper/SLRoutev6GlobalsGet",
  "/service_layer.SLRoutev6Oper/SLRoutev6GlobalStatsGet",
  "/service_layer.SLRoutev6Oper/SLRoutev6VrfRegOp",
  "/service_layer.SLRoutev6Oper/SLRoutev6VrfRegGet",
  "/service_layer.SLRoutev6Oper/SLRoutev6VrfGetStats",
  "/service_layer.SLRoutev6Oper/SLRoutev6Op",
  "/service_layer.SLRoutev6Oper/SLRoutev6Get",
  "/service_layer.SLRoutev6Oper/SLRoutev6OpStream",
  "/service_layer.SLRoutev6Oper/SLRoutev6GetStream",
};

std::unique_ptr< SLRoutev6Oper::Stub> SLRoutev6Oper::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< SLRoutev6Oper::Stub> stub(new SLRoutev6Oper::Stub(channel));
  return stub;
}

SLRoutev6Oper::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SLRoutev6GlobalsGet_(SLRoutev6Oper_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SLRoutev6GlobalStatsGet_(SLRoutev6Oper_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SLRoutev6VrfRegOp_(SLRoutev6Oper_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SLRoutev6VrfRegGet_(SLRoutev6Oper_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SLRoutev6VrfGetStats_(SLRoutev6Oper_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SLRoutev6Op_(SLRoutev6Oper_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SLRoutev6Get_(SLRoutev6Oper_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SLRoutev6OpStream_(SLRoutev6Oper_method_names[7], ::grpc::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_SLRoutev6GetStream_(SLRoutev6Oper_method_names[8], ::grpc::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::Status SLRoutev6Oper::Stub::SLRoutev6GlobalsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::service_layer::SLRouteGlobalsGetMsgRsp* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SLRoutev6GlobalsGet_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalsGetMsgRsp>* SLRoutev6Oper::Stub::AsyncSLRoutev6GlobalsGetRaw(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalsGetMsgRsp>(channel_.get(), cq, rpcmethod_SLRoutev6GlobalsGet_, context, request);
}

::grpc::Status SLRoutev6Oper::Stub::SLRoutev6GlobalStatsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SLRoutev6GlobalStatsGet_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalStatsGetMsgRsp>* SLRoutev6Oper::Stub::AsyncSLRoutev6GlobalStatsGetRaw(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalStatsGetMsgRsp>(channel_.get(), cq, rpcmethod_SLRoutev6GlobalStatsGet_, context, request);
}

::grpc::Status SLRoutev6Oper::Stub::SLRoutev6VrfRegOp(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::service_layer::SLVrfRegMsgRsp* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SLRoutev6VrfRegOp_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegMsgRsp>* SLRoutev6Oper::Stub::AsyncSLRoutev6VrfRegOpRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegMsgRsp>(channel_.get(), cq, rpcmethod_SLRoutev6VrfRegOp_, context, request);
}

::grpc::Status SLRoutev6Oper::Stub::SLRoutev6VrfRegGet(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::service_layer::SLVrfRegGetMsgRsp* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SLRoutev6VrfRegGet_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegGetMsgRsp>* SLRoutev6Oper::Stub::AsyncSLRoutev6VrfRegGetRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegGetMsgRsp>(channel_.get(), cq, rpcmethod_SLRoutev6VrfRegGet_, context, request);
}

::grpc::Status SLRoutev6Oper::Stub::SLRoutev6VrfGetStats(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::service_layer::SLVRFGetStatsMsgRsp* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SLRoutev6VrfGetStats_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::service_layer::SLVRFGetStatsMsgRsp>* SLRoutev6Oper::Stub::AsyncSLRoutev6VrfGetStatsRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::service_layer::SLVRFGetStatsMsgRsp>(channel_.get(), cq, rpcmethod_SLRoutev6VrfGetStats_, context, request);
}

::grpc::Status SLRoutev6Oper::Stub::SLRoutev6Op(::grpc::ClientContext* context, const ::service_layer::SLRoutev6Msg& request, ::service_layer::SLRoutev6MsgRsp* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SLRoutev6Op_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev6MsgRsp>* SLRoutev6Oper::Stub::AsyncSLRoutev6OpRaw(::grpc::ClientContext* context, const ::service_layer::SLRoutev6Msg& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev6MsgRsp>(channel_.get(), cq, rpcmethod_SLRoutev6Op_, context, request);
}

::grpc::Status SLRoutev6Oper::Stub::SLRoutev6Get(::grpc::ClientContext* context, const ::service_layer::SLRoutev6GetMsg& request, ::service_layer::SLRoutev6GetMsgRsp* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SLRoutev6Get_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev6GetMsgRsp>* SLRoutev6Oper::Stub::AsyncSLRoutev6GetRaw(::grpc::ClientContext* context, const ::service_layer::SLRoutev6GetMsg& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev6GetMsgRsp>(channel_.get(), cq, rpcmethod_SLRoutev6Get_, context, request);
}

::grpc::ClientReaderWriter< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>* SLRoutev6Oper::Stub::SLRoutev6OpStreamRaw(::grpc::ClientContext* context) {
  return new ::grpc::ClientReaderWriter< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>(channel_.get(), rpcmethod_SLRoutev6OpStream_, context);
}

::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>* SLRoutev6Oper::Stub::AsyncSLRoutev6OpStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>(channel_.get(), cq, rpcmethod_SLRoutev6OpStream_, context, tag);
}

::grpc::ClientReaderWriter< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>* SLRoutev6Oper::Stub::SLRoutev6GetStreamRaw(::grpc::ClientContext* context) {
  return new ::grpc::ClientReaderWriter< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>(channel_.get(), rpcmethod_SLRoutev6GetStream_, context);
}

::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>* SLRoutev6Oper::Stub::AsyncSLRoutev6GetStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>(channel_.get(), cq, rpcmethod_SLRoutev6GetStream_, context, tag);
}

SLRoutev6Oper::Service::Service() {
  (void)SLRoutev6Oper_method_names;
  AddMethod(new ::grpc::RpcServiceMethod(
      SLRoutev6Oper_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SLRoutev6Oper::Service, ::service_layer::SLRouteGlobalsGetMsg, ::service_layer::SLRouteGlobalsGetMsgRsp>(
          std::mem_fn(&SLRoutev6Oper::Service::SLRoutev6GlobalsGet), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SLRoutev6Oper_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SLRoutev6Oper::Service, ::service_layer::SLRouteGlobalStatsGetMsg, ::service_layer::SLRouteGlobalStatsGetMsgRsp>(
          std::mem_fn(&SLRoutev6Oper::Service::SLRoutev6GlobalStatsGet), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SLRoutev6Oper_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SLRoutev6Oper::Service, ::service_layer::SLVrfRegMsg, ::service_layer::SLVrfRegMsgRsp>(
          std::mem_fn(&SLRoutev6Oper::Service::SLRoutev6VrfRegOp), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SLRoutev6Oper_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SLRoutev6Oper::Service, ::service_layer::SLVrfRegGetMsg, ::service_layer::SLVrfRegGetMsgRsp>(
          std::mem_fn(&SLRoutev6Oper::Service::SLRoutev6VrfRegGet), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SLRoutev6Oper_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SLRoutev6Oper::Service, ::service_layer::SLVrfRegGetMsg, ::service_layer::SLVRFGetStatsMsgRsp>(
          std::mem_fn(&SLRoutev6Oper::Service::SLRoutev6VrfGetStats), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SLRoutev6Oper_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SLRoutev6Oper::Service, ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>(
          std::mem_fn(&SLRoutev6Oper::Service::SLRoutev6Op), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SLRoutev6Oper_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SLRoutev6Oper::Service, ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>(
          std::mem_fn(&SLRoutev6Oper::Service::SLRoutev6Get), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SLRoutev6Oper_method_names[7],
      ::grpc::RpcMethod::BIDI_STREAMING,
      new ::grpc::BidiStreamingHandler< SLRoutev6Oper::Service, ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>(
          std::mem_fn(&SLRoutev6Oper::Service::SLRoutev6OpStream), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SLRoutev6Oper_method_names[8],
      ::grpc::RpcMethod::BIDI_STREAMING,
      new ::grpc::BidiStreamingHandler< SLRoutev6Oper::Service, ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>(
          std::mem_fn(&SLRoutev6Oper::Service::SLRoutev6GetStream), this)));
}

SLRoutev6Oper::Service::~Service() {
}

::grpc::Status SLRoutev6Oper::Service::SLRoutev6GlobalsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalsGetMsg* request, ::service_layer::SLRouteGlobalsGetMsgRsp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SLRoutev6Oper::Service::SLRoutev6GlobalStatsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg* request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SLRoutev6Oper::Service::SLRoutev6VrfRegOp(::grpc::ServerContext* context, const ::service_layer::SLVrfRegMsg* request, ::service_layer::SLVrfRegMsgRsp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SLRoutev6Oper::Service::SLRoutev6VrfRegGet(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVrfRegGetMsgRsp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SLRoutev6Oper::Service::SLRoutev6VrfGetStats(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVRFGetStatsMsgRsp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SLRoutev6Oper::Service::SLRoutev6Op(::grpc::ServerContext* context, const ::service_layer::SLRoutev6Msg* request, ::service_layer::SLRoutev6MsgRsp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SLRoutev6Oper::Service::SLRoutev6Get(::grpc::ServerContext* context, const ::service_layer::SLRoutev6GetMsg* request, ::service_layer::SLRoutev6GetMsgRsp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SLRoutev6Oper::Service::SLRoutev6OpStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev6MsgRsp, ::service_layer::SLRoutev6Msg>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SLRoutev6Oper::Service::SLRoutev6GetStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev6GetMsgRsp, ::service_layer::SLRoutev6GetMsg>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace service_layer

