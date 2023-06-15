// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: voices.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_voices_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_voices_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_voices_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_voices_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_voices_2eproto;
namespace ai {
namespace inworld {
namespace voices {
class Voice;
struct VoiceDefaultTypeInternal;
extern VoiceDefaultTypeInternal _Voice_default_instance_;
}  // namespace voices
}  // namespace inworld
}  // namespace ai
PROTOBUF_NAMESPACE_OPEN
template<> ::ai::inworld::voices::Voice* Arena::CreateMaybeMessage<::ai::inworld::voices::Voice>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ai {
namespace inworld {
namespace voices {

enum Gender : int {
  VOICE_GENDER_UNSPECIFIED = 0,
  VOICE_GENDER_MALE = 1,
  VOICE_GENDER_FEMALE = 2,
  VOICE_GENDER_NEUTRAL = 3,
  Gender_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  Gender_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool Gender_IsValid(int value);
constexpr Gender Gender_MIN = VOICE_GENDER_UNSPECIFIED;
constexpr Gender Gender_MAX = VOICE_GENDER_NEUTRAL;
constexpr int Gender_ARRAYSIZE = Gender_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Gender_descriptor();
template<typename T>
inline const std::string& Gender_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Gender>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Gender_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Gender_descriptor(), enum_t_value);
}
inline bool Gender_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Gender* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Gender>(
    Gender_descriptor(), name, value);
}
enum TTSType : int {
  TTS_TYPE_STANDARD = 0,
  TTS_TYPE_ADVANCED = 1,
  TTSType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  TTSType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool TTSType_IsValid(int value);
constexpr TTSType TTSType_MIN = TTS_TYPE_STANDARD;
constexpr TTSType TTSType_MAX = TTS_TYPE_ADVANCED;
constexpr int TTSType_ARRAYSIZE = TTSType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TTSType_descriptor();
template<typename T>
inline const std::string& TTSType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TTSType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TTSType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TTSType_descriptor(), enum_t_value);
}
inline bool TTSType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, TTSType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TTSType>(
    TTSType_descriptor(), name, value);
}
// ===================================================================

class Voice final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ai.inworld.voices.Voice) */ {
 public:
  inline Voice() : Voice(nullptr) {}
  ~Voice() override;
  explicit PROTOBUF_CONSTEXPR Voice(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Voice(const Voice& from);
  Voice(Voice&& from) noexcept
    : Voice() {
    *this = ::std::move(from);
  }

  inline Voice& operator=(const Voice& from) {
    CopyFrom(from);
    return *this;
  }
  inline Voice& operator=(Voice&& from) noexcept {
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
  static const Voice& default_instance() {
    return *internal_default_instance();
  }
  static inline const Voice* internal_default_instance() {
    return reinterpret_cast<const Voice*>(
               &_Voice_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Voice& a, Voice& b) {
    a.Swap(&b);
  }
  inline void Swap(Voice* other) {
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
  void UnsafeArenaSwap(Voice* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Voice* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Voice>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Voice& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Voice& from) {
    Voice::MergeImpl(*this, from);
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
  void InternalSwap(Voice* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ai.inworld.voices.Voice";
  }
  protected:
  explicit Voice(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBaseNameFieldNumber = 1,
    kTtsTypeFieldNumber = 2,
    kGenderFieldNumber = 3,
    kPitchFieldNumber = 4,
    kSpeakingRateFieldNumber = 5,
    kRoboticVoiceFilterLevelFieldNumber = 6,
  };
  // string baseName = 1;
  void clear_basename();
  const std::string& basename() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_basename(ArgT0&& arg0, ArgT... args);
  std::string* mutable_basename();
  PROTOBUF_NODISCARD std::string* release_basename();
  void set_allocated_basename(std::string* basename);
  private:
  const std::string& _internal_basename() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_basename(const std::string& value);
  std::string* _internal_mutable_basename();
  public:

  // .ai.inworld.voices.TTSType tts_type = 2;
  void clear_tts_type();
  ::ai::inworld::voices::TTSType tts_type() const;
  void set_tts_type(::ai::inworld::voices::TTSType value);
  private:
  ::ai::inworld::voices::TTSType _internal_tts_type() const;
  void _internal_set_tts_type(::ai::inworld::voices::TTSType value);
  public:

  // .ai.inworld.voices.Gender gender = 3;
  void clear_gender();
  ::ai::inworld::voices::Gender gender() const;
  void set_gender(::ai::inworld::voices::Gender value);
  private:
  ::ai::inworld::voices::Gender _internal_gender() const;
  void _internal_set_gender(::ai::inworld::voices::Gender value);
  public:

  // double pitch = 4;
  void clear_pitch();
  double pitch() const;
  void set_pitch(double value);
  private:
  double _internal_pitch() const;
  void _internal_set_pitch(double value);
  public:

  // double speaking_rate = 5;
  void clear_speaking_rate();
  double speaking_rate() const;
  void set_speaking_rate(double value);
  private:
  double _internal_speaking_rate() const;
  void _internal_set_speaking_rate(double value);
  public:

  // double robotic_voice_filter_level = 6;
  void clear_robotic_voice_filter_level();
  double robotic_voice_filter_level() const;
  void set_robotic_voice_filter_level(double value);
  private:
  double _internal_robotic_voice_filter_level() const;
  void _internal_set_robotic_voice_filter_level(double value);
  public:

  // @@protoc_insertion_point(class_scope:ai.inworld.voices.Voice)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr basename_;
    int tts_type_;
    int gender_;
    double pitch_;
    double speaking_rate_;
    double robotic_voice_filter_level_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_voices_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Voice

// string baseName = 1;
inline void Voice::clear_basename() {
  _impl_.basename_.ClearToEmpty();
}
inline const std::string& Voice::basename() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.Voice.baseName)
  return _internal_basename();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Voice::set_basename(ArgT0&& arg0, ArgT... args) {
 
 _impl_.basename_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ai.inworld.voices.Voice.baseName)
}
inline std::string* Voice::mutable_basename() {
  std::string* _s = _internal_mutable_basename();
  // @@protoc_insertion_point(field_mutable:ai.inworld.voices.Voice.baseName)
  return _s;
}
inline const std::string& Voice::_internal_basename() const {
  return _impl_.basename_.Get();
}
inline void Voice::_internal_set_basename(const std::string& value) {
  
  _impl_.basename_.Set(value, GetArenaForAllocation());
}
inline std::string* Voice::_internal_mutable_basename() {
  
  return _impl_.basename_.Mutable(GetArenaForAllocation());
}
inline std::string* Voice::release_basename() {
  // @@protoc_insertion_point(field_release:ai.inworld.voices.Voice.baseName)
  return _impl_.basename_.Release();
}
inline void Voice::set_allocated_basename(std::string* basename) {
  if (basename != nullptr) {
    
  } else {
    
  }
  _impl_.basename_.SetAllocated(basename, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.basename_.IsDefault()) {
    _impl_.basename_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.voices.Voice.baseName)
}

// .ai.inworld.voices.TTSType tts_type = 2;
inline void Voice::clear_tts_type() {
  _impl_.tts_type_ = 0;
}
inline ::ai::inworld::voices::TTSType Voice::_internal_tts_type() const {
  return static_cast< ::ai::inworld::voices::TTSType >(_impl_.tts_type_);
}
inline ::ai::inworld::voices::TTSType Voice::tts_type() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.Voice.tts_type)
  return _internal_tts_type();
}
inline void Voice::_internal_set_tts_type(::ai::inworld::voices::TTSType value) {
  
  _impl_.tts_type_ = value;
}
inline void Voice::set_tts_type(::ai::inworld::voices::TTSType value) {
  _internal_set_tts_type(value);
  // @@protoc_insertion_point(field_set:ai.inworld.voices.Voice.tts_type)
}

// .ai.inworld.voices.Gender gender = 3;
inline void Voice::clear_gender() {
  _impl_.gender_ = 0;
}
inline ::ai::inworld::voices::Gender Voice::_internal_gender() const {
  return static_cast< ::ai::inworld::voices::Gender >(_impl_.gender_);
}
inline ::ai::inworld::voices::Gender Voice::gender() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.Voice.gender)
  return _internal_gender();
}
inline void Voice::_internal_set_gender(::ai::inworld::voices::Gender value) {
  
  _impl_.gender_ = value;
}
inline void Voice::set_gender(::ai::inworld::voices::Gender value) {
  _internal_set_gender(value);
  // @@protoc_insertion_point(field_set:ai.inworld.voices.Voice.gender)
}

// double pitch = 4;
inline void Voice::clear_pitch() {
  _impl_.pitch_ = 0;
}
inline double Voice::_internal_pitch() const {
  return _impl_.pitch_;
}
inline double Voice::pitch() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.Voice.pitch)
  return _internal_pitch();
}
inline void Voice::_internal_set_pitch(double value) {
  
  _impl_.pitch_ = value;
}
inline void Voice::set_pitch(double value) {
  _internal_set_pitch(value);
  // @@protoc_insertion_point(field_set:ai.inworld.voices.Voice.pitch)
}

// double speaking_rate = 5;
inline void Voice::clear_speaking_rate() {
  _impl_.speaking_rate_ = 0;
}
inline double Voice::_internal_speaking_rate() const {
  return _impl_.speaking_rate_;
}
inline double Voice::speaking_rate() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.Voice.speaking_rate)
  return _internal_speaking_rate();
}
inline void Voice::_internal_set_speaking_rate(double value) {
  
  _impl_.speaking_rate_ = value;
}
inline void Voice::set_speaking_rate(double value) {
  _internal_set_speaking_rate(value);
  // @@protoc_insertion_point(field_set:ai.inworld.voices.Voice.speaking_rate)
}

// double robotic_voice_filter_level = 6;
inline void Voice::clear_robotic_voice_filter_level() {
  _impl_.robotic_voice_filter_level_ = 0;
}
inline double Voice::_internal_robotic_voice_filter_level() const {
  return _impl_.robotic_voice_filter_level_;
}
inline double Voice::robotic_voice_filter_level() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.Voice.robotic_voice_filter_level)
  return _internal_robotic_voice_filter_level();
}
inline void Voice::_internal_set_robotic_voice_filter_level(double value) {
  
  _impl_.robotic_voice_filter_level_ = value;
}
inline void Voice::set_robotic_voice_filter_level(double value) {
  _internal_set_robotic_voice_filter_level(value);
  // @@protoc_insertion_point(field_set:ai.inworld.voices.Voice.robotic_voice_filter_level)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace voices
}  // namespace inworld
}  // namespace ai

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::ai::inworld::voices::Gender> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ai::inworld::voices::Gender>() {
  return ::ai::inworld::voices::Gender_descriptor();
}
template <> struct is_proto_enum< ::ai::inworld::voices::TTSType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ai::inworld::voices::TTSType>() {
  return ::ai::inworld::voices::TTSType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_voices_2eproto