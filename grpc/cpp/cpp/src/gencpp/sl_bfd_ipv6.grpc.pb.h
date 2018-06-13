// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: sl_bfd_ipv6.proto
#ifndef GRPC_sl_5fbfd_5fipv6_2eproto__INCLUDED
#define GRPC_sl_5fbfd_5fipv6_2eproto__INCLUDED

#include "sl_bfd_ipv6.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace service_layer {

class SLBfdv6Oper GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SLBfdv6RegOp(::grpc::ClientContext* context, const ::service_layer::SLBfdRegMsg& request, ::service_layer::SLBfdRegMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdRegMsgRsp>> AsyncSLBfdv6RegOp(::grpc::ClientContext* context, const ::service_layer::SLBfdRegMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdRegMsgRsp>>(AsyncSLBfdv6RegOpRaw(context, request, cq));
    }
    virtual ::grpc::Status SLBfdv6Get(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::service_layer::SLBfdGetMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdGetMsgRsp>> AsyncSLBfdv6Get(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdGetMsgRsp>>(AsyncSLBfdv6GetRaw(context, request, cq));
    }
    virtual ::grpc::Status SLBfdv6GetStats(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::service_layer::SLBfdGetStatsMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdGetStatsMsgRsp>> AsyncSLBfdv6GetStats(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdGetStatsMsgRsp>>(AsyncSLBfdv6GetStatsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::service_layer::SLBfdv6Notif>> SLBfdv6GetNotifStream(::grpc::ClientContext* context, const ::service_layer::SLBfdGetNotifMsg& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::service_layer::SLBfdv6Notif>>(SLBfdv6GetNotifStreamRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::service_layer::SLBfdv6Notif>> AsyncSLBfdv6GetNotifStream(::grpc::ClientContext* context, const ::service_layer::SLBfdGetNotifMsg& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::service_layer::SLBfdv6Notif>>(AsyncSLBfdv6GetNotifStreamRaw(context, request, cq, tag));
    }
    virtual ::grpc::Status SLBfdv6SessionOp(::grpc::ClientContext* context, const ::service_layer::SLBfdv6Msg& request, ::service_layer::SLBfdv6MsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdv6MsgRsp>> AsyncSLBfdv6SessionOp(::grpc::ClientContext* context, const ::service_layer::SLBfdv6Msg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdv6MsgRsp>>(AsyncSLBfdv6SessionOpRaw(context, request, cq));
    }
    virtual ::grpc::Status SLBfdv6SessionGet(::grpc::ClientContext* context, const ::service_layer::SLBfdv6GetMsg& request, ::service_layer::SLBfdv6GetMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdv6GetMsgRsp>> AsyncSLBfdv6SessionGet(::grpc::ClientContext* context, const ::service_layer::SLBfdv6GetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdv6GetMsgRsp>>(AsyncSLBfdv6SessionGetRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdRegMsgRsp>* AsyncSLBfdv6RegOpRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdRegMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdGetMsgRsp>* AsyncSLBfdv6GetRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdGetStatsMsgRsp>* AsyncSLBfdv6GetStatsRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::service_layer::SLBfdv6Notif>* SLBfdv6GetNotifStreamRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdGetNotifMsg& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::service_layer::SLBfdv6Notif>* AsyncSLBfdv6GetNotifStreamRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdGetNotifMsg& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdv6MsgRsp>* AsyncSLBfdv6SessionOpRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdv6Msg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLBfdv6GetMsgRsp>* AsyncSLBfdv6SessionGetRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdv6GetMsg& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SLBfdv6RegOp(::grpc::ClientContext* context, const ::service_layer::SLBfdRegMsg& request, ::service_layer::SLBfdRegMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdRegMsgRsp>> AsyncSLBfdv6RegOp(::grpc::ClientContext* context, const ::service_layer::SLBfdRegMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdRegMsgRsp>>(AsyncSLBfdv6RegOpRaw(context, request, cq));
    }
    ::grpc::Status SLBfdv6Get(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::service_layer::SLBfdGetMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdGetMsgRsp>> AsyncSLBfdv6Get(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdGetMsgRsp>>(AsyncSLBfdv6GetRaw(context, request, cq));
    }
    ::grpc::Status SLBfdv6GetStats(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::service_layer::SLBfdGetStatsMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdGetStatsMsgRsp>> AsyncSLBfdv6GetStats(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdGetStatsMsgRsp>>(AsyncSLBfdv6GetStatsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::service_layer::SLBfdv6Notif>> SLBfdv6GetNotifStream(::grpc::ClientContext* context, const ::service_layer::SLBfdGetNotifMsg& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::service_layer::SLBfdv6Notif>>(SLBfdv6GetNotifStreamRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::service_layer::SLBfdv6Notif>> AsyncSLBfdv6GetNotifStream(::grpc::ClientContext* context, const ::service_layer::SLBfdGetNotifMsg& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::service_layer::SLBfdv6Notif>>(AsyncSLBfdv6GetNotifStreamRaw(context, request, cq, tag));
    }
    ::grpc::Status SLBfdv6SessionOp(::grpc::ClientContext* context, const ::service_layer::SLBfdv6Msg& request, ::service_layer::SLBfdv6MsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdv6MsgRsp>> AsyncSLBfdv6SessionOp(::grpc::ClientContext* context, const ::service_layer::SLBfdv6Msg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdv6MsgRsp>>(AsyncSLBfdv6SessionOpRaw(context, request, cq));
    }
    ::grpc::Status SLBfdv6SessionGet(::grpc::ClientContext* context, const ::service_layer::SLBfdv6GetMsg& request, ::service_layer::SLBfdv6GetMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdv6GetMsgRsp>> AsyncSLBfdv6SessionGet(::grpc::ClientContext* context, const ::service_layer::SLBfdv6GetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdv6GetMsgRsp>>(AsyncSLBfdv6SessionGetRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdRegMsgRsp>* AsyncSLBfdv6RegOpRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdRegMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdGetMsgRsp>* AsyncSLBfdv6GetRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdGetStatsMsgRsp>* AsyncSLBfdv6GetStatsRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdGetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReader< ::service_layer::SLBfdv6Notif>* SLBfdv6GetNotifStreamRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdGetNotifMsg& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::service_layer::SLBfdv6Notif>* AsyncSLBfdv6GetNotifStreamRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdGetNotifMsg& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdv6MsgRsp>* AsyncSLBfdv6SessionOpRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdv6Msg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLBfdv6GetMsgRsp>* AsyncSLBfdv6SessionGetRaw(::grpc::ClientContext* context, const ::service_layer::SLBfdv6GetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_SLBfdv6RegOp_;
    const ::grpc::RpcMethod rpcmethod_SLBfdv6Get_;
    const ::grpc::RpcMethod rpcmethod_SLBfdv6GetStats_;
    const ::grpc::RpcMethod rpcmethod_SLBfdv6GetNotifStream_;
    const ::grpc::RpcMethod rpcmethod_SLBfdv6SessionOp_;
    const ::grpc::RpcMethod rpcmethod_SLBfdv6SessionGet_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SLBfdv6RegOp(::grpc::ServerContext* context, const ::service_layer::SLBfdRegMsg* request, ::service_layer::SLBfdRegMsgRsp* response);
    virtual ::grpc::Status SLBfdv6Get(::grpc::ServerContext* context, const ::service_layer::SLBfdGetMsg* request, ::service_layer::SLBfdGetMsgRsp* response);
    virtual ::grpc::Status SLBfdv6GetStats(::grpc::ServerContext* context, const ::service_layer::SLBfdGetMsg* request, ::service_layer::SLBfdGetStatsMsgRsp* response);
    virtual ::grpc::Status SLBfdv6GetNotifStream(::grpc::ServerContext* context, const ::service_layer::SLBfdGetNotifMsg* request, ::grpc::ServerWriter< ::service_layer::SLBfdv6Notif>* writer);
    virtual ::grpc::Status SLBfdv6SessionOp(::grpc::ServerContext* context, const ::service_layer::SLBfdv6Msg* request, ::service_layer::SLBfdv6MsgRsp* response);
    virtual ::grpc::Status SLBfdv6SessionGet(::grpc::ServerContext* context, const ::service_layer::SLBfdv6GetMsg* request, ::service_layer::SLBfdv6GetMsgRsp* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SLBfdv6RegOp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLBfdv6RegOp() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SLBfdv6RegOp() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6RegOp(::grpc::ServerContext* context, const ::service_layer::SLBfdRegMsg* request, ::service_layer::SLBfdRegMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLBfdv6RegOp(::grpc::ServerContext* context, ::service_layer::SLBfdRegMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLBfdRegMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLBfdv6Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLBfdv6Get() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SLBfdv6Get() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6Get(::grpc::ServerContext* context, const ::service_layer::SLBfdGetMsg* request, ::service_layer::SLBfdGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLBfdv6Get(::grpc::ServerContext* context, ::service_layer::SLBfdGetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLBfdGetMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLBfdv6GetStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLBfdv6GetStats() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_SLBfdv6GetStats() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6GetStats(::grpc::ServerContext* context, const ::service_layer::SLBfdGetMsg* request, ::service_layer::SLBfdGetStatsMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLBfdv6GetStats(::grpc::ServerContext* context, ::service_layer::SLBfdGetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLBfdGetStatsMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLBfdv6GetNotifStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLBfdv6GetNotifStream() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_SLBfdv6GetNotifStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6GetNotifStream(::grpc::ServerContext* context, const ::service_layer::SLBfdGetNotifMsg* request, ::grpc::ServerWriter< ::service_layer::SLBfdv6Notif>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLBfdv6GetNotifStream(::grpc::ServerContext* context, ::service_layer::SLBfdGetNotifMsg* request, ::grpc::ServerAsyncWriter< ::service_layer::SLBfdv6Notif>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(3, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLBfdv6SessionOp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLBfdv6SessionOp() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_SLBfdv6SessionOp() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6SessionOp(::grpc::ServerContext* context, const ::service_layer::SLBfdv6Msg* request, ::service_layer::SLBfdv6MsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLBfdv6SessionOp(::grpc::ServerContext* context, ::service_layer::SLBfdv6Msg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLBfdv6MsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLBfdv6SessionGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLBfdv6SessionGet() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_SLBfdv6SessionGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6SessionGet(::grpc::ServerContext* context, const ::service_layer::SLBfdv6GetMsg* request, ::service_layer::SLBfdv6GetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLBfdv6SessionGet(::grpc::ServerContext* context, ::service_layer::SLBfdv6GetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLBfdv6GetMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SLBfdv6RegOp<WithAsyncMethod_SLBfdv6Get<WithAsyncMethod_SLBfdv6GetStats<WithAsyncMethod_SLBfdv6GetNotifStream<WithAsyncMethod_SLBfdv6SessionOp<WithAsyncMethod_SLBfdv6SessionGet<Service > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SLBfdv6RegOp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLBfdv6RegOp() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SLBfdv6RegOp() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6RegOp(::grpc::ServerContext* context, const ::service_layer::SLBfdRegMsg* request, ::service_layer::SLBfdRegMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLBfdv6Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLBfdv6Get() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SLBfdv6Get() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6Get(::grpc::ServerContext* context, const ::service_layer::SLBfdGetMsg* request, ::service_layer::SLBfdGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLBfdv6GetStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLBfdv6GetStats() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_SLBfdv6GetStats() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6GetStats(::grpc::ServerContext* context, const ::service_layer::SLBfdGetMsg* request, ::service_layer::SLBfdGetStatsMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLBfdv6GetNotifStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLBfdv6GetNotifStream() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_SLBfdv6GetNotifStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6GetNotifStream(::grpc::ServerContext* context, const ::service_layer::SLBfdGetNotifMsg* request, ::grpc::ServerWriter< ::service_layer::SLBfdv6Notif>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLBfdv6SessionOp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLBfdv6SessionOp() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_SLBfdv6SessionOp() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6SessionOp(::grpc::ServerContext* context, const ::service_layer::SLBfdv6Msg* request, ::service_layer::SLBfdv6MsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLBfdv6SessionGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLBfdv6SessionGet() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_SLBfdv6SessionGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLBfdv6SessionGet(::grpc::ServerContext* context, const ::service_layer::SLBfdv6GetMsg* request, ::service_layer::SLBfdv6GetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace service_layer


#endif  // GRPC_sl_5fbfd_5fipv6_2eproto__INCLUDED