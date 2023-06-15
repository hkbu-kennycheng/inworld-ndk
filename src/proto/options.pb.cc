// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: options.proto

#include "ProtoDisableWarning.h"

#include "options.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace ai {
namespace inworld {
namespace options {
PROTOBUF_CONSTEXPR ExampleValue::ExampleValue(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.example_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ExampleValueDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ExampleValueDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ExampleValueDefaultTypeInternal() {}
  union {
    ExampleValue _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ExampleValueDefaultTypeInternal _ExampleValue_default_instance_;
}  // namespace options
}  // namespace inworld
}  // namespace ai
static ::_pb::Metadata file_level_metadata_options_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_options_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_options_2eproto = nullptr;

const uint32_t TableStruct_options_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ai::inworld::options::ExampleValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ai::inworld::options::ExampleValue, _impl_.example_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::ai::inworld::options::ExampleValue)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::ai::inworld::options::_ExampleValue_default_instance_._instance,
};

const char descriptor_table_protodef_options_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\roptions.proto\022\022ai.inworld.options\032 goo"
  "gle/protobuf/descriptor.proto\032\034google/pr"
  "otobuf/struct.proto\"7\n\014ExampleValue\022\'\n\007e"
  "xample\030\001 \003(\0132\026.google.protobuf.Value:V\n\010"
  "examples\022\035.google.protobuf.FieldOptions\030"
  "\364\251\004 \001(\0132 .ai.inworld.options.ExampleValu"
  "e\210\001\001Bt\n\022ai.inworld.optionsB\017OptionsProto"
  "colZMgithub.com/inworld-ai/inworld/servi"
  "ng/grpc-gateway/build/proto/engine/v1alp"
  "hab\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_options_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
  &::descriptor_table_google_2fprotobuf_2fstruct_2eproto,
};
static ::_pbi::once_flag descriptor_table_options_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_options_2eproto = {
    false, false, 370, descriptor_table_protodef_options_2eproto,
    "options.proto",
    &descriptor_table_options_2eproto_once, descriptor_table_options_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_options_2eproto::offsets,
    file_level_metadata_options_2eproto, file_level_enum_descriptors_options_2eproto,
    file_level_service_descriptors_options_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_options_2eproto_getter() {
  return &descriptor_table_options_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_options_2eproto(&descriptor_table_options_2eproto);
namespace ai {
namespace inworld {
namespace options {

// ===================================================================

class ExampleValue::_Internal {
 public:
};

void ExampleValue::clear_example() {
  _impl_.example_.Clear();
}
ExampleValue::ExampleValue(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:ai.inworld.options.ExampleValue)
}
ExampleValue::ExampleValue(const ExampleValue& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ExampleValue* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.example_){from._impl_.example_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ai.inworld.options.ExampleValue)
}

inline void ExampleValue::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.example_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ExampleValue::~ExampleValue() {
  // @@protoc_insertion_point(destructor:ai.inworld.options.ExampleValue)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ExampleValue::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.example_.~RepeatedPtrField();
}

void ExampleValue::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ExampleValue::Clear() {
// @@protoc_insertion_point(message_clear_start:ai.inworld.options.ExampleValue)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.example_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ExampleValue::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .google.protobuf.Value example = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_example(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ExampleValue::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ai.inworld.options.ExampleValue)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.protobuf.Value example = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_example_size()); i < n; i++) {
    const auto& repfield = this->_internal_example(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ai.inworld.options.ExampleValue)
  return target;
}

size_t ExampleValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ai.inworld.options.ExampleValue)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.protobuf.Value example = 1;
  total_size += 1UL * this->_internal_example_size();
  for (const auto& msg : this->_impl_.example_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ExampleValue::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ExampleValue::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ExampleValue::GetClassData() const { return &_class_data_; }


void ExampleValue::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ExampleValue*>(&to_msg);
  auto& from = static_cast<const ExampleValue&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:ai.inworld.options.ExampleValue)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.example_.MergeFrom(from._impl_.example_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ExampleValue::CopyFrom(const ExampleValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ai.inworld.options.ExampleValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExampleValue::IsInitialized() const {
  return true;
}

void ExampleValue::InternalSwap(ExampleValue* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.example_.InternalSwap(&other->_impl_.example_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ExampleValue::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_options_2eproto_getter, &descriptor_table_options_2eproto_once,
      file_level_metadata_options_2eproto[0]);
}
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::ai::inworld::options::ExampleValue >, 11, false>
  examples(kExamplesFieldNumber, ::ai::inworld::options::ExampleValue::default_instance(), nullptr);

// @@protoc_insertion_point(namespace_scope)
}  // namespace options
}  // namespace inworld
}  // namespace ai
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ai::inworld::options::ExampleValue*
Arena::CreateMaybeMessage< ::ai::inworld::options::ExampleValue >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ai::inworld::options::ExampleValue >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>