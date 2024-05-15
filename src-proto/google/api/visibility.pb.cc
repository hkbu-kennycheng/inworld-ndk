#include "ProtoDisableWarning.h"
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/visibility.proto

#include "google/api/visibility.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fvisibility_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VisibilityRule_google_2fapi_2fvisibility_2eproto;
namespace google {
namespace api {
class VisibilityDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Visibility> _instance;
} _Visibility_default_instance_;
class VisibilityRuleDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VisibilityRule> _instance;
} _VisibilityRule_default_instance_;
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_Visibility_google_2fapi_2fvisibility_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_Visibility_default_instance_;
    new (ptr) ::google::api::Visibility();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Visibility_google_2fapi_2fvisibility_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Visibility_google_2fapi_2fvisibility_2eproto}, {
      &scc_info_VisibilityRule_google_2fapi_2fvisibility_2eproto.base,}};

static void InitDefaultsscc_info_VisibilityRule_google_2fapi_2fvisibility_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_VisibilityRule_default_instance_;
    new (ptr) ::google::api::VisibilityRule();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VisibilityRule_google_2fapi_2fvisibility_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_VisibilityRule_google_2fapi_2fvisibility_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fvisibility_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fvisibility_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fvisibility_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fvisibility_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Visibility, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::Visibility, rules_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::VisibilityRule, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::VisibilityRule, selector_),
  PROTOBUF_FIELD_OFFSET(::google::api::VisibilityRule, restriction_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::Visibility)},
  { 6, -1, sizeof(::google::api::VisibilityRule)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_Visibility_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_VisibilityRule_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fvisibility_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033google/api/visibility.proto\022\ngoogle.ap"
  "i\032 google/protobuf/descriptor.proto\"7\n\nV"
  "isibility\022)\n\005rules\030\001 \003(\0132\032.google.api.Vi"
  "sibilityRule\"7\n\016VisibilityRule\022\020\n\010select"
  "or\030\001 \001(\t\022\023\n\013restriction\030\002 \001(\t:T\n\017enum_vi"
  "sibility\022\034.google.protobuf.EnumOptions\030\257"
  "\312\274\" \001(\0132\032.google.api.VisibilityRule:Z\n\020v"
  "alue_visibility\022!.google.protobuf.EnumVa"
  "lueOptions\030\257\312\274\" \001(\0132\032.google.api.Visibil"
  "ityRule:V\n\020field_visibility\022\035.google.pro"
  "tobuf.FieldOptions\030\257\312\274\" \001(\0132\032.google.api"
  ".VisibilityRule:Z\n\022message_visibility\022\037."
  "google.protobuf.MessageOptions\030\257\312\274\" \001(\0132"
  "\032.google.api.VisibilityRule:X\n\021method_vi"
  "sibility\022\036.google.protobuf.MethodOptions"
  "\030\257\312\274\" \001(\0132\032.google.api.VisibilityRule:V\n"
  "\016api_visibility\022\037.google.protobuf.Servic"
  "eOptions\030\257\312\274\" \001(\0132\032.google.api.Visibilit"
  "yRuleBn\n\016com.google.apiB\017VisibilityProto"
  "P\001Z\?google.golang.org/genproto/googleapi"
  "s/api/visibility;visibility\370\001\001\242\002\004GAPIb\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fvisibility_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fvisibility_2eproto_sccs[2] = {
  &scc_info_Visibility_google_2fapi_2fvisibility_2eproto.base,
  &scc_info_VisibilityRule_google_2fapi_2fvisibility_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fvisibility_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fvisibility_2eproto = {
  false, false, descriptor_table_protodef_google_2fapi_2fvisibility_2eproto, "google/api/visibility.proto", 845,
  &descriptor_table_google_2fapi_2fvisibility_2eproto_once, descriptor_table_google_2fapi_2fvisibility_2eproto_sccs, descriptor_table_google_2fapi_2fvisibility_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_google_2fapi_2fvisibility_2eproto::offsets,
  file_level_metadata_google_2fapi_2fvisibility_2eproto, 2, file_level_enum_descriptors_google_2fapi_2fvisibility_2eproto, file_level_service_descriptors_google_2fapi_2fvisibility_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fvisibility_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fvisibility_2eproto)), true);
namespace google {
namespace api {

// ===================================================================

class Visibility::_Internal {
 public:
};

Visibility::Visibility(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  rules_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.api.Visibility)
}
Visibility::Visibility(const Visibility& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      rules_(from.rules_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.Visibility)
}

void Visibility::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Visibility_google_2fapi_2fvisibility_2eproto.base);
}

Visibility::~Visibility() {
  // @@protoc_insertion_point(destructor:google.api.Visibility)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Visibility::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Visibility::ArenaDtor(void* object) {
  Visibility* _this = reinterpret_cast< Visibility* >(object);
  (void)_this;
}
void Visibility::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Visibility::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Visibility& Visibility::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Visibility_google_2fapi_2fvisibility_2eproto.base);
  return *internal_default_instance();
}


void Visibility::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Visibility)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rules_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Visibility::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .google.api.VisibilityRule rules = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_rules(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Visibility::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Visibility)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.VisibilityRule rules = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_rules_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_rules(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Visibility)
  return target;
}

size_t Visibility::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Visibility)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.VisibilityRule rules = 1;
  total_size += 1UL * this->_internal_rules_size();
  for (const auto& msg : this->rules_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Visibility::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Visibility)
  GOOGLE_DCHECK_NE(&from, this);
  const Visibility* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Visibility>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Visibility)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Visibility)
    MergeFrom(*source);
  }
}

void Visibility::MergeFrom(const Visibility& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Visibility)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  rules_.MergeFrom(from.rules_);
}

void Visibility::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Visibility)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Visibility::CopyFrom(const Visibility& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Visibility)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Visibility::IsInitialized() const {
  return true;
}

void Visibility::InternalSwap(Visibility* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  rules_.InternalSwap(&other->rules_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Visibility::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class VisibilityRule::_Internal {
 public:
};

VisibilityRule::VisibilityRule(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.api.VisibilityRule)
}
VisibilityRule::VisibilityRule(const VisibilityRule& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  selector_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_selector().empty()) {
    selector_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_selector(), 
      GetArena());
  }
  restriction_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_restriction().empty()) {
    restriction_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_restriction(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:google.api.VisibilityRule)
}

void VisibilityRule::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_VisibilityRule_google_2fapi_2fvisibility_2eproto.base);
  selector_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  restriction_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

VisibilityRule::~VisibilityRule() {
  // @@protoc_insertion_point(destructor:google.api.VisibilityRule)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void VisibilityRule::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  selector_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  restriction_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void VisibilityRule::ArenaDtor(void* object) {
  VisibilityRule* _this = reinterpret_cast< VisibilityRule* >(object);
  (void)_this;
}
void VisibilityRule::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void VisibilityRule::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VisibilityRule& VisibilityRule::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VisibilityRule_google_2fapi_2fvisibility_2eproto.base);
  return *internal_default_instance();
}


void VisibilityRule::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.VisibilityRule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  selector_.ClearToEmpty();
  restriction_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VisibilityRule::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string selector = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_selector();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.VisibilityRule.selector"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string restriction = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_restriction();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.api.VisibilityRule.restriction"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* VisibilityRule::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.VisibilityRule)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string selector = 1;
  if (this->selector().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_selector().data(), static_cast<int>(this->_internal_selector().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.VisibilityRule.selector");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_selector(), target);
  }

  // string restriction = 2;
  if (this->restriction().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_restriction().data(), static_cast<int>(this->_internal_restriction().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.VisibilityRule.restriction");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_restriction(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.VisibilityRule)
  return target;
}

size_t VisibilityRule::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.VisibilityRule)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string selector = 1;
  if (this->selector().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_selector());
  }

  // string restriction = 2;
  if (this->restriction().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_restriction());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VisibilityRule::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.VisibilityRule)
  GOOGLE_DCHECK_NE(&from, this);
  const VisibilityRule* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VisibilityRule>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.VisibilityRule)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.VisibilityRule)
    MergeFrom(*source);
  }
}

void VisibilityRule::MergeFrom(const VisibilityRule& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.VisibilityRule)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.selector().size() > 0) {
    _internal_set_selector(from._internal_selector());
  }
  if (from.restriction().size() > 0) {
    _internal_set_restriction(from._internal_restriction());
  }
}

void VisibilityRule::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.VisibilityRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VisibilityRule::CopyFrom(const VisibilityRule& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.VisibilityRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VisibilityRule::IsInitialized() const {
  return true;
}

void VisibilityRule::InternalSwap(VisibilityRule* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  selector_.Swap(&other->selector_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  restriction_.Swap(&other->restriction_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata VisibilityRule::GetMetadata() const {
  return GetMetadataStatic();
}

::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false >
  enum_visibility(kEnumVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance());
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false >
  value_visibility(kValueVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance());
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false >
  field_visibility(kFieldVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance());
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false >
  message_visibility(kMessageVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance());
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false >
  method_visibility(kMethodVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance());
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf_inworld::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false >
  api_visibility(kApiVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::Visibility* Arena::CreateMaybeMessage< ::google::api::Visibility >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::Visibility >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::VisibilityRule* Arena::CreateMaybeMessage< ::google::api::VisibilityRule >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::VisibilityRule >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>