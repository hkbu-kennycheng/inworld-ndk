// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ai/inworld/voices/base_voice.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fvoices_2fbase_5fvoice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fvoices_2fbase_5fvoice_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ai/inworld/language_codes/language_codes.pb.h"
#include "ai/inworld/voices/voices.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ai_2finworld_2fvoices_2fbase_5fvoice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ai_2finworld_2fvoices_2fbase_5fvoice_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ai_2finworld_2fvoices_2fbase_5fvoice_2eproto;
namespace ai {
namespace inworld {
namespace voices {
class BaseVoice;
class BaseVoiceDefaultTypeInternal;
extern BaseVoiceDefaultTypeInternal _BaseVoice_default_instance_;
}  // namespace voices
}  // namespace inworld
}  // namespace ai
PROTOBUF_NAMESPACE_OPEN
template<> ::ai::inworld::voices::BaseVoice* Arena::CreateMaybeMessage<::ai::inworld::voices::BaseVoice>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ai {
namespace inworld {
namespace voices {

// ===================================================================

class BaseVoice PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ai.inworld.voices.BaseVoice) */ {
 public:
  inline BaseVoice() : BaseVoice(nullptr) {}
  virtual ~BaseVoice();

  BaseVoice(const BaseVoice& from);
  BaseVoice(BaseVoice&& from) noexcept
    : BaseVoice() {
    *this = ::std::move(from);
  }

  inline BaseVoice& operator=(const BaseVoice& from) {
    CopyFrom(from);
    return *this;
  }
  inline BaseVoice& operator=(BaseVoice&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const BaseVoice& default_instance();

  enum TtsMetadataCase {
    kElevenlabsMetadata = 100,
    kInworldV2Metadata = 101,
    TTS_METADATA_NOT_SET = 0,
  };

  static inline const BaseVoice* internal_default_instance() {
    return reinterpret_cast<const BaseVoice*>(
               &_BaseVoice_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BaseVoice& a, BaseVoice& b) {
    a.Swap(&b);
  }
  inline void Swap(BaseVoice* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BaseVoice* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BaseVoice* New() const final {
    return CreateMaybeMessage<BaseVoice>(nullptr);
  }

  BaseVoice* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BaseVoice>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BaseVoice& from);
  void MergeFrom(const BaseVoice& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BaseVoice* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ai.inworld.voices.BaseVoice";
  }
  protected:
  explicit BaseVoice(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ai_2finworld_2fvoices_2fbase_5fvoice_2eproto);
    return ::descriptor_table_ai_2finworld_2fvoices_2fbase_5fvoice_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLanguageCodesFieldNumber = 1,
    kLanguagesFieldNumber = 6,
    kNameFieldNumber = 2,
    kGenderFieldNumber = 3,
    kNaturalSampleRateHertzFieldNumber = 4,
    kAgeFieldNumber = 5,
    kElevenlabsMetadataFieldNumber = 100,
    kInworldV2MetadataFieldNumber = 101,
  };
  // repeated string language_codes = 1 [deprecated = true];
  PROTOBUF_DEPRECATED int language_codes_size() const;
  private:
  int _internal_language_codes_size() const;
  public:
  PROTOBUF_DEPRECATED void clear_language_codes();
  PROTOBUF_DEPRECATED const std::string& language_codes(int index) const;
  PROTOBUF_DEPRECATED std::string* mutable_language_codes(int index);
  PROTOBUF_DEPRECATED void set_language_codes(int index, const std::string& value);
  PROTOBUF_DEPRECATED void set_language_codes(int index, std::string&& value);
  PROTOBUF_DEPRECATED void set_language_codes(int index, const char* value);
  PROTOBUF_DEPRECATED void set_language_codes(int index, const char* value, size_t size);
  PROTOBUF_DEPRECATED std::string* add_language_codes();
  PROTOBUF_DEPRECATED void add_language_codes(const std::string& value);
  PROTOBUF_DEPRECATED void add_language_codes(std::string&& value);
  PROTOBUF_DEPRECATED void add_language_codes(const char* value);
  PROTOBUF_DEPRECATED void add_language_codes(const char* value, size_t size);
  PROTOBUF_DEPRECATED const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& language_codes() const;
  PROTOBUF_DEPRECATED ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_language_codes();
  private:
  const std::string& _internal_language_codes(int index) const;
  std::string* _internal_add_language_codes();
  public:

  // repeated .ai.inworld.language_codes.LanguageCode languages = 6;
  int languages_size() const;
  private:
  int _internal_languages_size() const;
  public:
  void clear_languages();
  private:
  ::ai::inworld::language_codes::LanguageCode _internal_languages(int index) const;
  void _internal_add_languages(::ai::inworld::language_codes::LanguageCode value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_languages();
  public:
  ::ai::inworld::language_codes::LanguageCode languages(int index) const;
  void set_languages(int index, ::ai::inworld::language_codes::LanguageCode value);
  void add_languages(::ai::inworld::language_codes::LanguageCode value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& languages() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_languages();

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .ai.inworld.voices.Gender gender = 3;
  void clear_gender();
  ::ai::inworld::voices::Gender gender() const;
  void set_gender(::ai::inworld::voices::Gender value);
  private:
  ::ai::inworld::voices::Gender _internal_gender() const;
  void _internal_set_gender(::ai::inworld::voices::Gender value);
  public:

  // int32 natural_sample_rate_hertz = 4;
  void clear_natural_sample_rate_hertz();
  ::PROTOBUF_NAMESPACE_ID::int32 natural_sample_rate_hertz() const;
  void set_natural_sample_rate_hertz(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_natural_sample_rate_hertz() const;
  void _internal_set_natural_sample_rate_hertz(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // .ai.inworld.voices.Age age = 5;
  void clear_age();
  ::ai::inworld::voices::Age age() const;
  void set_age(::ai::inworld::voices::Age value);
  private:
  ::ai::inworld::voices::Age _internal_age() const;
  void _internal_set_age(::ai::inworld::voices::Age value);
  public:

  // .ai.inworld.voices.Voice.ElevenLabsMetadata elevenlabs_metadata = 100;
  bool has_elevenlabs_metadata() const;
  private:
  bool _internal_has_elevenlabs_metadata() const;
  public:
  void clear_elevenlabs_metadata();
  const ::ai::inworld::voices::Voice_ElevenLabsMetadata& elevenlabs_metadata() const;
  ::ai::inworld::voices::Voice_ElevenLabsMetadata* release_elevenlabs_metadata();
  ::ai::inworld::voices::Voice_ElevenLabsMetadata* mutable_elevenlabs_metadata();
  void set_allocated_elevenlabs_metadata(::ai::inworld::voices::Voice_ElevenLabsMetadata* elevenlabs_metadata);
  private:
  const ::ai::inworld::voices::Voice_ElevenLabsMetadata& _internal_elevenlabs_metadata() const;
  ::ai::inworld::voices::Voice_ElevenLabsMetadata* _internal_mutable_elevenlabs_metadata();
  public:
  void unsafe_arena_set_allocated_elevenlabs_metadata(
      ::ai::inworld::voices::Voice_ElevenLabsMetadata* elevenlabs_metadata);
  ::ai::inworld::voices::Voice_ElevenLabsMetadata* unsafe_arena_release_elevenlabs_metadata();

  // .ai.inworld.voices.InworldV2Metadata inworld_v2_metadata = 101;
  bool has_inworld_v2_metadata() const;
  private:
  bool _internal_has_inworld_v2_metadata() const;
  public:
  void clear_inworld_v2_metadata();
  const ::ai::inworld::voices::InworldV2Metadata& inworld_v2_metadata() const;
  ::ai::inworld::voices::InworldV2Metadata* release_inworld_v2_metadata();
  ::ai::inworld::voices::InworldV2Metadata* mutable_inworld_v2_metadata();
  void set_allocated_inworld_v2_metadata(::ai::inworld::voices::InworldV2Metadata* inworld_v2_metadata);
  private:
  const ::ai::inworld::voices::InworldV2Metadata& _internal_inworld_v2_metadata() const;
  ::ai::inworld::voices::InworldV2Metadata* _internal_mutable_inworld_v2_metadata();
  public:
  void unsafe_arena_set_allocated_inworld_v2_metadata(
      ::ai::inworld::voices::InworldV2Metadata* inworld_v2_metadata);
  ::ai::inworld::voices::InworldV2Metadata* unsafe_arena_release_inworld_v2_metadata();

  void clear_tts_metadata();
  TtsMetadataCase tts_metadata_case() const;
  // @@protoc_insertion_point(class_scope:ai.inworld.voices.BaseVoice)
 private:
  class _Internal;
  void set_has_elevenlabs_metadata();
  void set_has_inworld_v2_metadata();

  inline bool has_tts_metadata() const;
  inline void clear_has_tts_metadata();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> language_codes_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> languages_;
  mutable std::atomic<int> _languages_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  int gender_;
  ::PROTOBUF_NAMESPACE_ID::int32 natural_sample_rate_hertz_;
  int age_;
  union TtsMetadataUnion {
    TtsMetadataUnion() {}
    ::ai::inworld::voices::Voice_ElevenLabsMetadata* elevenlabs_metadata_;
    ::ai::inworld::voices::InworldV2Metadata* inworld_v2_metadata_;
  } tts_metadata_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_ai_2finworld_2fvoices_2fbase_5fvoice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BaseVoice

// repeated string language_codes = 1 [deprecated = true];
inline int BaseVoice::_internal_language_codes_size() const {
  return language_codes_.size();
}
inline int BaseVoice::language_codes_size() const {
  return _internal_language_codes_size();
}
inline void BaseVoice::clear_language_codes() {
  language_codes_.Clear();
}
inline std::string* BaseVoice::add_language_codes() {
  // @@protoc_insertion_point(field_add_mutable:ai.inworld.voices.BaseVoice.language_codes)
  return _internal_add_language_codes();
}
inline const std::string& BaseVoice::_internal_language_codes(int index) const {
  return language_codes_.Get(index);
}
inline const std::string& BaseVoice::language_codes(int index) const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.BaseVoice.language_codes)
  return _internal_language_codes(index);
}
inline std::string* BaseVoice::mutable_language_codes(int index) {
  // @@protoc_insertion_point(field_mutable:ai.inworld.voices.BaseVoice.language_codes)
  return language_codes_.Mutable(index);
}
inline void BaseVoice::set_language_codes(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:ai.inworld.voices.BaseVoice.language_codes)
  language_codes_.Mutable(index)->assign(value);
}
inline void BaseVoice::set_language_codes(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:ai.inworld.voices.BaseVoice.language_codes)
  language_codes_.Mutable(index)->assign(std::move(value));
}
inline void BaseVoice::set_language_codes(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  language_codes_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ai.inworld.voices.BaseVoice.language_codes)
}
inline void BaseVoice::set_language_codes(int index, const char* value, size_t size) {
  language_codes_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.voices.BaseVoice.language_codes)
}
inline std::string* BaseVoice::_internal_add_language_codes() {
  return language_codes_.Add();
}
inline void BaseVoice::add_language_codes(const std::string& value) {
  language_codes_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ai.inworld.voices.BaseVoice.language_codes)
}
inline void BaseVoice::add_language_codes(std::string&& value) {
  language_codes_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ai.inworld.voices.BaseVoice.language_codes)
}
inline void BaseVoice::add_language_codes(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  language_codes_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ai.inworld.voices.BaseVoice.language_codes)
}
inline void BaseVoice::add_language_codes(const char* value, size_t size) {
  language_codes_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ai.inworld.voices.BaseVoice.language_codes)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
BaseVoice::language_codes() const {
  // @@protoc_insertion_point(field_list:ai.inworld.voices.BaseVoice.language_codes)
  return language_codes_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
BaseVoice::mutable_language_codes() {
  // @@protoc_insertion_point(field_mutable_list:ai.inworld.voices.BaseVoice.language_codes)
  return &language_codes_;
}

// string name = 2;
inline void BaseVoice::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& BaseVoice::name() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.BaseVoice.name)
  return _internal_name();
}
inline void BaseVoice::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:ai.inworld.voices.BaseVoice.name)
}
inline std::string* BaseVoice::mutable_name() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.voices.BaseVoice.name)
  return _internal_mutable_name();
}
inline const std::string& BaseVoice::_internal_name() const {
  return name_.Get();
}
inline void BaseVoice::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void BaseVoice::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ai.inworld.voices.BaseVoice.name)
}
inline void BaseVoice::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ai.inworld.voices.BaseVoice.name)
}
inline void BaseVoice::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.voices.BaseVoice.name)
}
inline std::string* BaseVoice::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* BaseVoice::release_name() {
  // @@protoc_insertion_point(field_release:ai.inworld.voices.BaseVoice.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void BaseVoice::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.voices.BaseVoice.name)
}

// .ai.inworld.voices.Gender gender = 3;
inline void BaseVoice::clear_gender() {
  gender_ = 0;
}
inline ::ai::inworld::voices::Gender BaseVoice::_internal_gender() const {
  return static_cast< ::ai::inworld::voices::Gender >(gender_);
}
inline ::ai::inworld::voices::Gender BaseVoice::gender() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.BaseVoice.gender)
  return _internal_gender();
}
inline void BaseVoice::_internal_set_gender(::ai::inworld::voices::Gender value) {
  
  gender_ = value;
}
inline void BaseVoice::set_gender(::ai::inworld::voices::Gender value) {
  _internal_set_gender(value);
  // @@protoc_insertion_point(field_set:ai.inworld.voices.BaseVoice.gender)
}

// int32 natural_sample_rate_hertz = 4;
inline void BaseVoice::clear_natural_sample_rate_hertz() {
  natural_sample_rate_hertz_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BaseVoice::_internal_natural_sample_rate_hertz() const {
  return natural_sample_rate_hertz_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BaseVoice::natural_sample_rate_hertz() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.BaseVoice.natural_sample_rate_hertz)
  return _internal_natural_sample_rate_hertz();
}
inline void BaseVoice::_internal_set_natural_sample_rate_hertz(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  natural_sample_rate_hertz_ = value;
}
inline void BaseVoice::set_natural_sample_rate_hertz(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_natural_sample_rate_hertz(value);
  // @@protoc_insertion_point(field_set:ai.inworld.voices.BaseVoice.natural_sample_rate_hertz)
}

// .ai.inworld.voices.Age age = 5;
inline void BaseVoice::clear_age() {
  age_ = 0;
}
inline ::ai::inworld::voices::Age BaseVoice::_internal_age() const {
  return static_cast< ::ai::inworld::voices::Age >(age_);
}
inline ::ai::inworld::voices::Age BaseVoice::age() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.BaseVoice.age)
  return _internal_age();
}
inline void BaseVoice::_internal_set_age(::ai::inworld::voices::Age value) {
  
  age_ = value;
}
inline void BaseVoice::set_age(::ai::inworld::voices::Age value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:ai.inworld.voices.BaseVoice.age)
}

// repeated .ai.inworld.language_codes.LanguageCode languages = 6;
inline int BaseVoice::_internal_languages_size() const {
  return languages_.size();
}
inline int BaseVoice::languages_size() const {
  return _internal_languages_size();
}
inline void BaseVoice::clear_languages() {
  languages_.Clear();
}
inline ::ai::inworld::language_codes::LanguageCode BaseVoice::_internal_languages(int index) const {
  return static_cast< ::ai::inworld::language_codes::LanguageCode >(languages_.Get(index));
}
inline ::ai::inworld::language_codes::LanguageCode BaseVoice::languages(int index) const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.BaseVoice.languages)
  return _internal_languages(index);
}
inline void BaseVoice::set_languages(int index, ::ai::inworld::language_codes::LanguageCode value) {
  languages_.Set(index, value);
  // @@protoc_insertion_point(field_set:ai.inworld.voices.BaseVoice.languages)
}
inline void BaseVoice::_internal_add_languages(::ai::inworld::language_codes::LanguageCode value) {
  languages_.Add(value);
}
inline void BaseVoice::add_languages(::ai::inworld::language_codes::LanguageCode value) {
  // @@protoc_insertion_point(field_add:ai.inworld.voices.BaseVoice.languages)
  _internal_add_languages(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
BaseVoice::languages() const {
  // @@protoc_insertion_point(field_list:ai.inworld.voices.BaseVoice.languages)
  return languages_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
BaseVoice::_internal_mutable_languages() {
  return &languages_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
BaseVoice::mutable_languages() {
  // @@protoc_insertion_point(field_mutable_list:ai.inworld.voices.BaseVoice.languages)
  return _internal_mutable_languages();
}

// .ai.inworld.voices.Voice.ElevenLabsMetadata elevenlabs_metadata = 100;
inline bool BaseVoice::_internal_has_elevenlabs_metadata() const {
  return tts_metadata_case() == kElevenlabsMetadata;
}
inline bool BaseVoice::has_elevenlabs_metadata() const {
  return _internal_has_elevenlabs_metadata();
}
inline void BaseVoice::set_has_elevenlabs_metadata() {
  _oneof_case_[0] = kElevenlabsMetadata;
}
inline ::ai::inworld::voices::Voice_ElevenLabsMetadata* BaseVoice::release_elevenlabs_metadata() {
  // @@protoc_insertion_point(field_release:ai.inworld.voices.BaseVoice.elevenlabs_metadata)
  if (_internal_has_elevenlabs_metadata()) {
    clear_has_tts_metadata();
      ::ai::inworld::voices::Voice_ElevenLabsMetadata* temp = tts_metadata_.elevenlabs_metadata_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    tts_metadata_.elevenlabs_metadata_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::ai::inworld::voices::Voice_ElevenLabsMetadata& BaseVoice::_internal_elevenlabs_metadata() const {
  return _internal_has_elevenlabs_metadata()
      ? *tts_metadata_.elevenlabs_metadata_
      : reinterpret_cast< ::ai::inworld::voices::Voice_ElevenLabsMetadata&>(::ai::inworld::voices::_Voice_ElevenLabsMetadata_default_instance_);
}
inline const ::ai::inworld::voices::Voice_ElevenLabsMetadata& BaseVoice::elevenlabs_metadata() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.BaseVoice.elevenlabs_metadata)
  return _internal_elevenlabs_metadata();
}
inline ::ai::inworld::voices::Voice_ElevenLabsMetadata* BaseVoice::unsafe_arena_release_elevenlabs_metadata() {
  // @@protoc_insertion_point(field_unsafe_arena_release:ai.inworld.voices.BaseVoice.elevenlabs_metadata)
  if (_internal_has_elevenlabs_metadata()) {
    clear_has_tts_metadata();
    ::ai::inworld::voices::Voice_ElevenLabsMetadata* temp = tts_metadata_.elevenlabs_metadata_;
    tts_metadata_.elevenlabs_metadata_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void BaseVoice::unsafe_arena_set_allocated_elevenlabs_metadata(::ai::inworld::voices::Voice_ElevenLabsMetadata* elevenlabs_metadata) {
  clear_tts_metadata();
  if (elevenlabs_metadata) {
    set_has_elevenlabs_metadata();
    tts_metadata_.elevenlabs_metadata_ = elevenlabs_metadata;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:ai.inworld.voices.BaseVoice.elevenlabs_metadata)
}
inline ::ai::inworld::voices::Voice_ElevenLabsMetadata* BaseVoice::_internal_mutable_elevenlabs_metadata() {
  if (!_internal_has_elevenlabs_metadata()) {
    clear_tts_metadata();
    set_has_elevenlabs_metadata();
    tts_metadata_.elevenlabs_metadata_ = CreateMaybeMessage< ::ai::inworld::voices::Voice_ElevenLabsMetadata >(GetArena());
  }
  return tts_metadata_.elevenlabs_metadata_;
}
inline ::ai::inworld::voices::Voice_ElevenLabsMetadata* BaseVoice::mutable_elevenlabs_metadata() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.voices.BaseVoice.elevenlabs_metadata)
  return _internal_mutable_elevenlabs_metadata();
}

// .ai.inworld.voices.InworldV2Metadata inworld_v2_metadata = 101;
inline bool BaseVoice::_internal_has_inworld_v2_metadata() const {
  return tts_metadata_case() == kInworldV2Metadata;
}
inline bool BaseVoice::has_inworld_v2_metadata() const {
  return _internal_has_inworld_v2_metadata();
}
inline void BaseVoice::set_has_inworld_v2_metadata() {
  _oneof_case_[0] = kInworldV2Metadata;
}
inline ::ai::inworld::voices::InworldV2Metadata* BaseVoice::release_inworld_v2_metadata() {
  // @@protoc_insertion_point(field_release:ai.inworld.voices.BaseVoice.inworld_v2_metadata)
  if (_internal_has_inworld_v2_metadata()) {
    clear_has_tts_metadata();
      ::ai::inworld::voices::InworldV2Metadata* temp = tts_metadata_.inworld_v2_metadata_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    tts_metadata_.inworld_v2_metadata_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::ai::inworld::voices::InworldV2Metadata& BaseVoice::_internal_inworld_v2_metadata() const {
  return _internal_has_inworld_v2_metadata()
      ? *tts_metadata_.inworld_v2_metadata_
      : reinterpret_cast< ::ai::inworld::voices::InworldV2Metadata&>(::ai::inworld::voices::_InworldV2Metadata_default_instance_);
}
inline const ::ai::inworld::voices::InworldV2Metadata& BaseVoice::inworld_v2_metadata() const {
  // @@protoc_insertion_point(field_get:ai.inworld.voices.BaseVoice.inworld_v2_metadata)
  return _internal_inworld_v2_metadata();
}
inline ::ai::inworld::voices::InworldV2Metadata* BaseVoice::unsafe_arena_release_inworld_v2_metadata() {
  // @@protoc_insertion_point(field_unsafe_arena_release:ai.inworld.voices.BaseVoice.inworld_v2_metadata)
  if (_internal_has_inworld_v2_metadata()) {
    clear_has_tts_metadata();
    ::ai::inworld::voices::InworldV2Metadata* temp = tts_metadata_.inworld_v2_metadata_;
    tts_metadata_.inworld_v2_metadata_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void BaseVoice::unsafe_arena_set_allocated_inworld_v2_metadata(::ai::inworld::voices::InworldV2Metadata* inworld_v2_metadata) {
  clear_tts_metadata();
  if (inworld_v2_metadata) {
    set_has_inworld_v2_metadata();
    tts_metadata_.inworld_v2_metadata_ = inworld_v2_metadata;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:ai.inworld.voices.BaseVoice.inworld_v2_metadata)
}
inline ::ai::inworld::voices::InworldV2Metadata* BaseVoice::_internal_mutable_inworld_v2_metadata() {
  if (!_internal_has_inworld_v2_metadata()) {
    clear_tts_metadata();
    set_has_inworld_v2_metadata();
    tts_metadata_.inworld_v2_metadata_ = CreateMaybeMessage< ::ai::inworld::voices::InworldV2Metadata >(GetArena());
  }
  return tts_metadata_.inworld_v2_metadata_;
}
inline ::ai::inworld::voices::InworldV2Metadata* BaseVoice::mutable_inworld_v2_metadata() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.voices.BaseVoice.inworld_v2_metadata)
  return _internal_mutable_inworld_v2_metadata();
}

inline bool BaseVoice::has_tts_metadata() const {
  return tts_metadata_case() != TTS_METADATA_NOT_SET;
}
inline void BaseVoice::clear_has_tts_metadata() {
  _oneof_case_[0] = TTS_METADATA_NOT_SET;
}
inline BaseVoice::TtsMetadataCase BaseVoice::tts_metadata_case() const {
  return BaseVoice::TtsMetadataCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace voices
}  // namespace inworld
}  // namespace ai

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fvoices_2fbase_5fvoice_2eproto
