// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ai/inworld/studio/v1alpha/tokens.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/api/client.pb.h"
#include "google/api/field_behavior.pb.h"
#include <google/protobuf/timestamp.pb.h>
#include "options.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto;
namespace ai {
namespace inworld {
namespace studio {
namespace v1alpha {
class GenerateDefaultSessionTokenRequest;
struct GenerateDefaultSessionTokenRequestDefaultTypeInternal;
extern GenerateDefaultSessionTokenRequestDefaultTypeInternal _GenerateDefaultSessionTokenRequest_default_instance_;
class GenerateSessionTokenRequest;
struct GenerateSessionTokenRequestDefaultTypeInternal;
extern GenerateSessionTokenRequestDefaultTypeInternal _GenerateSessionTokenRequest_default_instance_;
class SessionAccessToken;
struct SessionAccessTokenDefaultTypeInternal;
extern SessionAccessTokenDefaultTypeInternal _SessionAccessToken_default_instance_;
}  // namespace v1alpha
}  // namespace studio
}  // namespace inworld
}  // namespace ai
PROTOBUF_NAMESPACE_OPEN
template<> ::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest* Arena::CreateMaybeMessage<::ai::inworld::studio::v1alpha::GenerateDefaultSessionTokenRequest>(Arena*);
template<> ::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest* Arena::CreateMaybeMessage<::ai::inworld::studio::v1alpha::GenerateSessionTokenRequest>(Arena*);
template<> ::ai::inworld::studio::v1alpha::SessionAccessToken* Arena::CreateMaybeMessage<::ai::inworld::studio::v1alpha::SessionAccessToken>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ai {
namespace inworld {
namespace studio {
namespace v1alpha {

// ===================================================================

class SessionAccessToken final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ai.inworld.studio.v1alpha.SessionAccessToken) */ {
 public:
  inline SessionAccessToken() : SessionAccessToken(nullptr) {}
  ~SessionAccessToken() override;
  explicit PROTOBUF_CONSTEXPR SessionAccessToken(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionAccessToken(const SessionAccessToken& from);
  SessionAccessToken(SessionAccessToken&& from) noexcept
    : SessionAccessToken() {
    *this = ::std::move(from);
  }

  inline SessionAccessToken& operator=(const SessionAccessToken& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionAccessToken& operator=(SessionAccessToken&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SessionAccessToken& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionAccessToken* internal_default_instance() {
    return reinterpret_cast<const SessionAccessToken*>(
               &_SessionAccessToken_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SessionAccessToken& a, SessionAccessToken& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionAccessToken* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SessionAccessToken* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionAccessToken* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionAccessToken>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionAccessToken& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionAccessToken& from) {
    SessionAccessToken::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SessionAccessToken* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ai.inworld.studio.v1alpha.SessionAccessToken";
  }
  protected:
  explicit SessionAccessToken(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTokenFieldNumber = 1,
    kTypeFieldNumber = 2,
    kSessionIdFieldNumber = 4,
    kExpirationTimeFieldNumber = 3,
  };
  // string token = 1;
  void clear_token();
  const std::string& token() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_token(ArgT0&& arg0, ArgT... args);
  std::string* mutable_token();
  PROTOBUF_NODISCARD std::string* release_token();
  void set_allocated_token(std::string* token);
  private:
  const std::string& _internal_token() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_token(const std::string& value);
  std::string* _internal_mutable_token();
  public:

  // string type = 2;
  void clear_type();
  const std::string& type() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_type(ArgT0&& arg0, ArgT... args);
  std::string* mutable_type();
  PROTOBUF_NODISCARD std::string* release_type();
  void set_allocated_type(std::string* type);
  private:
  const std::string& _internal_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_type(const std::string& value);
  std::string* _internal_mutable_type();
  public:

  // string session_id = 4;
  void clear_session_id();
  const std::string& session_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_session_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_session_id();
  PROTOBUF_NODISCARD std::string* release_session_id();
  void set_allocated_session_id(std::string* session_id);
  private:
  const std::string& _internal_session_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_session_id(const std::string& value);
  std::string* _internal_mutable_session_id();
  public:

  // .google.protobuf.Timestamp expiration_time = 3;
  bool has_expiration_time() const;
  private:
  bool _internal_has_expiration_time() const;
  public:
  void clear_expiration_time();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& expiration_time() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_expiration_time();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_expiration_time();
  void set_allocated_expiration_time(::PROTOBUF_NAMESPACE_ID::Timestamp* expiration_time);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_expiration_time() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_expiration_time();
  public:
  void unsafe_arena_set_allocated_expiration_time(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* expiration_time);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_expiration_time();

  // @@protoc_insertion_point(class_scope:ai.inworld.studio.v1alpha.SessionAccessToken)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr token_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr session_id_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* expiration_time_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto;
};
// -------------------------------------------------------------------

class GenerateSessionTokenRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ai.inworld.studio.v1alpha.GenerateSessionTokenRequest) */ {
 public:
  inline GenerateSessionTokenRequest() : GenerateSessionTokenRequest(nullptr) {}
  ~GenerateSessionTokenRequest() override;
  explicit PROTOBUF_CONSTEXPR GenerateSessionTokenRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GenerateSessionTokenRequest(const GenerateSessionTokenRequest& from);
  GenerateSessionTokenRequest(GenerateSessionTokenRequest&& from) noexcept
    : GenerateSessionTokenRequest() {
    *this = ::std::move(from);
  }

  inline GenerateSessionTokenRequest& operator=(const GenerateSessionTokenRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GenerateSessionTokenRequest& operator=(GenerateSessionTokenRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GenerateSessionTokenRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GenerateSessionTokenRequest* internal_default_instance() {
    return reinterpret_cast<const GenerateSessionTokenRequest*>(
               &_GenerateSessionTokenRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GenerateSessionTokenRequest& a, GenerateSessionTokenRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GenerateSessionTokenRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GenerateSessionTokenRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GenerateSessionTokenRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GenerateSessionTokenRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GenerateSessionTokenRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GenerateSessionTokenRequest& from) {
    GenerateSessionTokenRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GenerateSessionTokenRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ai.inworld.studio.v1alpha.GenerateSessionTokenRequest";
  }
  protected:
  explicit GenerateSessionTokenRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
  };
  // string key = 1 [(.google.api.field_behavior) = REQUIRED, (.ai.inworld.options.examples) = {
  void clear_key();
  const std::string& key() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_key(ArgT0&& arg0, ArgT... args);
  std::string* mutable_key();
  PROTOBUF_NODISCARD std::string* release_key();
  void set_allocated_key(std::string* key);
  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // @@protoc_insertion_point(class_scope:ai.inworld.studio.v1alpha.GenerateSessionTokenRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto;
};
// -------------------------------------------------------------------

class GenerateDefaultSessionTokenRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ai.inworld.studio.v1alpha.GenerateDefaultSessionTokenRequest) */ {
 public:
  inline GenerateDefaultSessionTokenRequest() : GenerateDefaultSessionTokenRequest(nullptr) {}
  ~GenerateDefaultSessionTokenRequest() override;
  explicit PROTOBUF_CONSTEXPR GenerateDefaultSessionTokenRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GenerateDefaultSessionTokenRequest(const GenerateDefaultSessionTokenRequest& from);
  GenerateDefaultSessionTokenRequest(GenerateDefaultSessionTokenRequest&& from) noexcept
    : GenerateDefaultSessionTokenRequest() {
    *this = ::std::move(from);
  }

  inline GenerateDefaultSessionTokenRequest& operator=(const GenerateDefaultSessionTokenRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GenerateDefaultSessionTokenRequest& operator=(GenerateDefaultSessionTokenRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GenerateDefaultSessionTokenRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GenerateDefaultSessionTokenRequest* internal_default_instance() {
    return reinterpret_cast<const GenerateDefaultSessionTokenRequest*>(
               &_GenerateDefaultSessionTokenRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(GenerateDefaultSessionTokenRequest& a, GenerateDefaultSessionTokenRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GenerateDefaultSessionTokenRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GenerateDefaultSessionTokenRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GenerateDefaultSessionTokenRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GenerateDefaultSessionTokenRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GenerateDefaultSessionTokenRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GenerateDefaultSessionTokenRequest& from) {
    GenerateDefaultSessionTokenRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GenerateDefaultSessionTokenRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ai.inworld.studio.v1alpha.GenerateDefaultSessionTokenRequest";
  }
  protected:
  explicit GenerateDefaultSessionTokenRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kParentFieldNumber = 1,
  };
  // string parent = 1 [(.google.api.field_behavior) = REQUIRED, (.ai.inworld.options.examples) = {
  void clear_parent();
  const std::string& parent() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_parent(ArgT0&& arg0, ArgT... args);
  std::string* mutable_parent();
  PROTOBUF_NODISCARD std::string* release_parent();
  void set_allocated_parent(std::string* parent);
  private:
  const std::string& _internal_parent() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_parent(const std::string& value);
  std::string* _internal_mutable_parent();
  public:

  // @@protoc_insertion_point(class_scope:ai.inworld.studio.v1alpha.GenerateDefaultSessionTokenRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr parent_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionAccessToken

// string token = 1;
inline void SessionAccessToken::clear_token() {
  _impl_.token_.ClearToEmpty();
}
inline const std::string& SessionAccessToken::token() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.SessionAccessToken.token)
  return _internal_token();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SessionAccessToken::set_token(ArgT0&& arg0, ArgT... args) {
 
 _impl_.token_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.SessionAccessToken.token)
}
inline std::string* SessionAccessToken::mutable_token() {
  std::string* _s = _internal_mutable_token();
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.SessionAccessToken.token)
  return _s;
}
inline const std::string& SessionAccessToken::_internal_token() const {
  return _impl_.token_.Get();
}
inline void SessionAccessToken::_internal_set_token(const std::string& value) {
  
  _impl_.token_.Set(value, GetArenaForAllocation());
}
inline std::string* SessionAccessToken::_internal_mutable_token() {
  
  return _impl_.token_.Mutable(GetArenaForAllocation());
}
inline std::string* SessionAccessToken::release_token() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.SessionAccessToken.token)
  return _impl_.token_.Release();
}
inline void SessionAccessToken::set_allocated_token(std::string* token) {
  if (token != nullptr) {
    
  } else {
    
  }
  _impl_.token_.SetAllocated(token, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.token_.IsDefault()) {
    _impl_.token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.SessionAccessToken.token)
}

// string type = 2;
inline void SessionAccessToken::clear_type() {
  _impl_.type_.ClearToEmpty();
}
inline const std::string& SessionAccessToken::type() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.SessionAccessToken.type)
  return _internal_type();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SessionAccessToken::set_type(ArgT0&& arg0, ArgT... args) {
 
 _impl_.type_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.SessionAccessToken.type)
}
inline std::string* SessionAccessToken::mutable_type() {
  std::string* _s = _internal_mutable_type();
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.SessionAccessToken.type)
  return _s;
}
inline const std::string& SessionAccessToken::_internal_type() const {
  return _impl_.type_.Get();
}
inline void SessionAccessToken::_internal_set_type(const std::string& value) {
  
  _impl_.type_.Set(value, GetArenaForAllocation());
}
inline std::string* SessionAccessToken::_internal_mutable_type() {
  
  return _impl_.type_.Mutable(GetArenaForAllocation());
}
inline std::string* SessionAccessToken::release_type() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.SessionAccessToken.type)
  return _impl_.type_.Release();
}
inline void SessionAccessToken::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    
  } else {
    
  }
  _impl_.type_.SetAllocated(type, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.type_.IsDefault()) {
    _impl_.type_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.SessionAccessToken.type)
}

// .google.protobuf.Timestamp expiration_time = 3;
inline bool SessionAccessToken::_internal_has_expiration_time() const {
  return this != internal_default_instance() && _impl_.expiration_time_ != nullptr;
}
inline bool SessionAccessToken::has_expiration_time() const {
  return _internal_has_expiration_time();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& SessionAccessToken::_internal_expiration_time() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.expiration_time_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& SessionAccessToken::expiration_time() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.SessionAccessToken.expiration_time)
  return _internal_expiration_time();
}
inline void SessionAccessToken::unsafe_arena_set_allocated_expiration_time(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* expiration_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.expiration_time_);
  }
  _impl_.expiration_time_ = expiration_time;
  if (expiration_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:ai.inworld.studio.v1alpha.SessionAccessToken.expiration_time)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* SessionAccessToken::release_expiration_time() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.expiration_time_;
  _impl_.expiration_time_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* SessionAccessToken::unsafe_arena_release_expiration_time() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.SessionAccessToken.expiration_time)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.expiration_time_;
  _impl_.expiration_time_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* SessionAccessToken::_internal_mutable_expiration_time() {
  
  if (_impl_.expiration_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.expiration_time_ = p;
  }
  return _impl_.expiration_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* SessionAccessToken::mutable_expiration_time() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_expiration_time();
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.SessionAccessToken.expiration_time)
  return _msg;
}
inline void SessionAccessToken::set_allocated_expiration_time(::PROTOBUF_NAMESPACE_ID::Timestamp* expiration_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.expiration_time_);
  }
  if (expiration_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(expiration_time));
    if (message_arena != submessage_arena) {
      expiration_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, expiration_time, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.expiration_time_ = expiration_time;
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.SessionAccessToken.expiration_time)
}

// string session_id = 4;
inline void SessionAccessToken::clear_session_id() {
  _impl_.session_id_.ClearToEmpty();
}
inline const std::string& SessionAccessToken::session_id() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.SessionAccessToken.session_id)
  return _internal_session_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SessionAccessToken::set_session_id(ArgT0&& arg0, ArgT... args) {
 
 _impl_.session_id_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.SessionAccessToken.session_id)
}
inline std::string* SessionAccessToken::mutable_session_id() {
  std::string* _s = _internal_mutable_session_id();
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.SessionAccessToken.session_id)
  return _s;
}
inline const std::string& SessionAccessToken::_internal_session_id() const {
  return _impl_.session_id_.Get();
}
inline void SessionAccessToken::_internal_set_session_id(const std::string& value) {
  
  _impl_.session_id_.Set(value, GetArenaForAllocation());
}
inline std::string* SessionAccessToken::_internal_mutable_session_id() {
  
  return _impl_.session_id_.Mutable(GetArenaForAllocation());
}
inline std::string* SessionAccessToken::release_session_id() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.SessionAccessToken.session_id)
  return _impl_.session_id_.Release();
}
inline void SessionAccessToken::set_allocated_session_id(std::string* session_id) {
  if (session_id != nullptr) {
    
  } else {
    
  }
  _impl_.session_id_.SetAllocated(session_id, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.session_id_.IsDefault()) {
    _impl_.session_id_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.SessionAccessToken.session_id)
}

// -------------------------------------------------------------------

// GenerateSessionTokenRequest

// string key = 1 [(.google.api.field_behavior) = REQUIRED, (.ai.inworld.options.examples) = {
inline void GenerateSessionTokenRequest::clear_key() {
  _impl_.key_.ClearToEmpty();
}
inline const std::string& GenerateSessionTokenRequest::key() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.GenerateSessionTokenRequest.key)
  return _internal_key();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GenerateSessionTokenRequest::set_key(ArgT0&& arg0, ArgT... args) {
 
 _impl_.key_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.GenerateSessionTokenRequest.key)
}
inline std::string* GenerateSessionTokenRequest::mutable_key() {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.GenerateSessionTokenRequest.key)
  return _s;
}
inline const std::string& GenerateSessionTokenRequest::_internal_key() const {
  return _impl_.key_.Get();
}
inline void GenerateSessionTokenRequest::_internal_set_key(const std::string& value) {
  
  _impl_.key_.Set(value, GetArenaForAllocation());
}
inline std::string* GenerateSessionTokenRequest::_internal_mutable_key() {
  
  return _impl_.key_.Mutable(GetArenaForAllocation());
}
inline std::string* GenerateSessionTokenRequest::release_key() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.GenerateSessionTokenRequest.key)
  return _impl_.key_.Release();
}
inline void GenerateSessionTokenRequest::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  _impl_.key_.SetAllocated(key, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.key_.IsDefault()) {
    _impl_.key_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.GenerateSessionTokenRequest.key)
}

// -------------------------------------------------------------------

// GenerateDefaultSessionTokenRequest

// string parent = 1 [(.google.api.field_behavior) = REQUIRED, (.ai.inworld.options.examples) = {
inline void GenerateDefaultSessionTokenRequest::clear_parent() {
  _impl_.parent_.ClearToEmpty();
}
inline const std::string& GenerateDefaultSessionTokenRequest::parent() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.GenerateDefaultSessionTokenRequest.parent)
  return _internal_parent();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GenerateDefaultSessionTokenRequest::set_parent(ArgT0&& arg0, ArgT... args) {
 
 _impl_.parent_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.GenerateDefaultSessionTokenRequest.parent)
}
inline std::string* GenerateDefaultSessionTokenRequest::mutable_parent() {
  std::string* _s = _internal_mutable_parent();
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.GenerateDefaultSessionTokenRequest.parent)
  return _s;
}
inline const std::string& GenerateDefaultSessionTokenRequest::_internal_parent() const {
  return _impl_.parent_.Get();
}
inline void GenerateDefaultSessionTokenRequest::_internal_set_parent(const std::string& value) {
  
  _impl_.parent_.Set(value, GetArenaForAllocation());
}
inline std::string* GenerateDefaultSessionTokenRequest::_internal_mutable_parent() {
  
  return _impl_.parent_.Mutable(GetArenaForAllocation());
}
inline std::string* GenerateDefaultSessionTokenRequest::release_parent() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.GenerateDefaultSessionTokenRequest.parent)
  return _impl_.parent_.Release();
}
inline void GenerateDefaultSessionTokenRequest::set_allocated_parent(std::string* parent) {
  if (parent != nullptr) {
    
  } else {
    
  }
  _impl_.parent_.SetAllocated(parent, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.parent_.IsDefault()) {
    _impl_.parent_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.GenerateDefaultSessionTokenRequest.parent)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1alpha
}  // namespace studio
}  // namespace inworld
}  // namespace ai

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fstudio_2fv1alpha_2ftokens_2eproto