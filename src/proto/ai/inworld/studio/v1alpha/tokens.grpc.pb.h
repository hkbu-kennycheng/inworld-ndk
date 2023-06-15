// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ai/inworld/studio/v1alpha/tokens.proto
#ifndef GRPC_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto__INCLUDED
#define GRPC_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto__INCLUDED

#include "ai/inworld/studio/v1alpha/tokens.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace ai {
namespace inworld {
namespace studio {
namespace v1alpha {

// Service to generate JWT
class Tokens final {
 public:
  static constexpr char const* service_full_name() {
    return "ai.inworld.studio.v1alpha.Tokens";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Generates a JWT to access the world engine API with a given API key
    // This method is meant to be used by end-user applications with API keys + secret
    // A valid HMAC-SHA signature matching the API key in the request should be provided as authorization
    // DEPRECATED: Runtime tokens are generated by the proxy-auth service
    virtual ::grpc::Status GenerateSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest& request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>> AsyncGenerateSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>>(AsyncGenerateSessionTokenRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>> PrepareAsyncGenerateSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>>(PrepareAsyncGenerateSessionTokenRaw(context, request, cq));
    }
    // Generates a JWT with the default API key for the given workspace
    // This method is meant to be used by UI tools with user authorization such as Google or Oculus
    virtual ::grpc::Status GenerateDefaultSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest& request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>> AsyncGenerateDefaultSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>>(AsyncGenerateDefaultSessionTokenRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>> PrepareAsyncGenerateDefaultSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>>(PrepareAsyncGenerateDefaultSessionTokenRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Generates a JWT to access the world engine API with a given API key
      // This method is meant to be used by end-user applications with API keys + secret
      // A valid HMAC-SHA signature matching the API key in the request should be provided as authorization
      // DEPRECATED: Runtime tokens are generated by the proxy-auth service
      virtual void GenerateSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GenerateSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // Generates a JWT with the default API key for the given workspace
      // This method is meant to be used by UI tools with user authorization such as Google or Oculus
      virtual void GenerateDefaultSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GenerateDefaultSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>* AsyncGenerateSessionTokenRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>* PrepareAsyncGenerateSessionTokenRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>* AsyncGenerateDefaultSessionTokenRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ai::inworld::studio::v1alpha::SessionAccessToken>* PrepareAsyncGenerateDefaultSessionTokenRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GenerateSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest& request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>> AsyncGenerateSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>>(AsyncGenerateSessionTokenRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>> PrepareAsyncGenerateSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>>(PrepareAsyncGenerateSessionTokenRaw(context, request, cq));
    }
    ::grpc::Status GenerateDefaultSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest& request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>> AsyncGenerateDefaultSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>>(AsyncGenerateDefaultSessionTokenRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>> PrepareAsyncGenerateDefaultSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>>(PrepareAsyncGenerateDefaultSessionTokenRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GenerateSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response, std::function<void(::grpc::Status)>) override;
      void GenerateSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response, ::grpc::ClientUnaryReactor* reactor) override;
      void GenerateDefaultSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response, std::function<void(::grpc::Status)>) override;
      void GenerateDefaultSessionToken(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>* AsyncGenerateSessionTokenRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>* PrepareAsyncGenerateSessionTokenRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>* AsyncGenerateDefaultSessionTokenRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::SessionAccessToken>* PrepareAsyncGenerateDefaultSessionTokenRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GenerateSessionToken_;
    const ::grpc::internal::RpcMethod rpcmethod_GenerateDefaultSessionToken_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Generates a JWT to access the world engine API with a given API key
    // This method is meant to be used by end-user applications with API keys + secret
    // A valid HMAC-SHA signature matching the API key in the request should be provided as authorization
    // DEPRECATED: Runtime tokens are generated by the proxy-auth service
    virtual ::grpc::Status GenerateSessionToken(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response);
    // Generates a JWT with the default API key for the given workspace
    // This method is meant to be used by UI tools with user authorization such as Google or Oculus
    virtual ::grpc::Status GenerateDefaultSessionToken(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GenerateSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GenerateSessionToken() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GenerateSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GenerateSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGenerateSessionToken(::grpc::ServerContext* context, ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* request, ::grpc::ServerAsyncResponseWriter< ::ai::inworld::studio::v1alpha::SessionAccessToken>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GenerateDefaultSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GenerateDefaultSessionToken() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GenerateDefaultSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GenerateDefaultSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGenerateDefaultSessionToken(::grpc::ServerContext* context, ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* request, ::grpc::ServerAsyncResponseWriter< ::ai::inworld::studio::v1alpha::SessionAccessToken>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GenerateSessionToken<WithAsyncMethod_GenerateDefaultSessionToken<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GenerateSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GenerateSessionToken() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest, ::ai::inworld::studio::v1alpha::SessionAccessToken>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response) { return this->GenerateSessionToken(context, request, response); }));}
    void SetMessageAllocatorFor_GenerateSessionToken(
        ::grpc::MessageAllocator< ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest, ::ai::inworld::studio::v1alpha::SessionAccessToken>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest, ::ai::inworld::studio::v1alpha::SessionAccessToken>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GenerateSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GenerateSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GenerateSessionToken(
      ::grpc::CallbackServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_GenerateDefaultSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GenerateDefaultSessionToken() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest, ::ai::inworld::studio::v1alpha::SessionAccessToken>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* request, ::ai::inworld::studio::v1alpha::SessionAccessToken* response) { return this->GenerateDefaultSessionToken(context, request, response); }));}
    void SetMessageAllocatorFor_GenerateDefaultSessionToken(
        ::grpc::MessageAllocator< ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest, ::ai::inworld::studio::v1alpha::SessionAccessToken>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest, ::ai::inworld::studio::v1alpha::SessionAccessToken>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GenerateDefaultSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GenerateDefaultSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GenerateDefaultSessionToken(
      ::grpc::CallbackServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GenerateSessionToken<WithCallbackMethod_GenerateDefaultSessionToken<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GenerateSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GenerateSessionToken() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GenerateSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GenerateSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GenerateDefaultSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GenerateDefaultSessionToken() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GenerateDefaultSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GenerateDefaultSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GenerateSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GenerateSessionToken() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GenerateSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GenerateSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGenerateSessionToken(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GenerateDefaultSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GenerateDefaultSessionToken() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GenerateDefaultSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GenerateDefaultSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGenerateDefaultSessionToken(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GenerateSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GenerateSessionToken() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GenerateSessionToken(context, request, response); }));
    }
    ~WithRawCallbackMethod_GenerateSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GenerateSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GenerateSessionToken(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GenerateDefaultSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GenerateDefaultSessionToken() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GenerateDefaultSessionToken(context, request, response); }));
    }
    ~WithRawCallbackMethod_GenerateDefaultSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GenerateDefaultSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GenerateDefaultSessionToken(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GenerateSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GenerateSessionToken() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest, ::ai::inworld::studio::v1alpha::SessionAccessToken>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest, ::ai::inworld::studio::v1alpha::SessionAccessToken>* streamer) {
                       return this->StreamedGenerateSessionToken(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GenerateSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GenerateSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGenerateSessionToken(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest,::ai::inworld::studio::v1alpha::SessionAccessToken>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GenerateDefaultSessionToken : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GenerateDefaultSessionToken() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest, ::ai::inworld::studio::v1alpha::SessionAccessToken>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest, ::ai::inworld::studio::v1alpha::SessionAccessToken>* streamer) {
                       return this->StreamedGenerateDefaultSessionToken(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GenerateDefaultSessionToken() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GenerateDefaultSessionToken(::grpc::ServerContext* /*context*/, const ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* /*request*/, ::ai::inworld::studio::v1alpha::SessionAccessToken* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGenerateDefaultSessionToken(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest,::ai::inworld::studio::v1alpha::SessionAccessToken>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GenerateSessionToken<WithStreamedUnaryMethod_GenerateDefaultSessionToken<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GenerateSessionToken<WithStreamedUnaryMethod_GenerateDefaultSessionToken<Service > > StreamedService;
};

}  // namespace v1alpha
}  // namespace studio
}  // namespace inworld
}  // namespace ai


#endif  // GRPC_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto__INCLUDED