// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: yandex/cloud/api/operation.proto

#include "yandex/cloud/api/operation.pb.h"

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
namespace yandex {
namespace cloud {
namespace api {
constexpr Operation::Operation(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : metadata_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , response_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct OperationDefaultTypeInternal {
  constexpr OperationDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~OperationDefaultTypeInternal() {}
  union {
    Operation _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT OperationDefaultTypeInternal _Operation_default_instance_;
}  // namespace api
}  // namespace cloud
}  // namespace yandex
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_yandex_2fcloud_2fapi_2foperation_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_yandex_2fcloud_2fapi_2foperation_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_yandex_2fcloud_2fapi_2foperation_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_yandex_2fcloud_2fapi_2foperation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::yandex::cloud::api::Operation, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::yandex::cloud::api::Operation, metadata_),
  PROTOBUF_FIELD_OFFSET(::yandex::cloud::api::Operation, response_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::yandex::cloud::api::Operation)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::yandex::cloud::api::_Operation_default_instance_),
};

const char descriptor_table_protodef_yandex_2fcloud_2fapi_2foperation_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n yandex/cloud/api/operation.proto\022\020yand"
  "ex.cloud.api\032 google/protobuf/descriptor"
  ".proto\"/\n\tOperation\022\020\n\010metadata\030\001 \001(\t\022\020\n"
  "\010response\030\002 \001(\t:P\n\toperation\022\036.google.pr"
  "otobuf.MethodOptions\030\246\252\005 \001(\0132\033.yandex.cl"
  "oud.api.OperationB:Z8github.com/yandex-c"
  "loud/go-genproto/yandex/cloud/api;apib\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_yandex_2fcloud_2fapi_2foperation_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_yandex_2fcloud_2fapi_2foperation_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_yandex_2fcloud_2fapi_2foperation_2eproto = {
  false, false, 285, descriptor_table_protodef_yandex_2fcloud_2fapi_2foperation_2eproto, "yandex/cloud/api/operation.proto", 
  &descriptor_table_yandex_2fcloud_2fapi_2foperation_2eproto_once, descriptor_table_yandex_2fcloud_2fapi_2foperation_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_yandex_2fcloud_2fapi_2foperation_2eproto::offsets,
  file_level_metadata_yandex_2fcloud_2fapi_2foperation_2eproto, file_level_enum_descriptors_yandex_2fcloud_2fapi_2foperation_2eproto, file_level_service_descriptors_yandex_2fcloud_2fapi_2foperation_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_yandex_2fcloud_2fapi_2foperation_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_yandex_2fcloud_2fapi_2foperation_2eproto);
  return descriptor_table_yandex_2fcloud_2fapi_2foperation_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_yandex_2fcloud_2fapi_2foperation_2eproto(&descriptor_table_yandex_2fcloud_2fapi_2foperation_2eproto);
namespace yandex {
namespace cloud {
namespace api {

// ===================================================================

class Operation::_Internal {
 public:
};

Operation::Operation(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:yandex.cloud.api.Operation)
}
Operation::Operation(const Operation& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  metadata_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_metadata().empty()) {
    metadata_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_metadata(), 
      GetArena());
  }
  response_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_response().empty()) {
    response_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_response(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:yandex.cloud.api.Operation)
}

void Operation::SharedCtor() {
metadata_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
response_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Operation::~Operation() {
  // @@protoc_insertion_point(destructor:yandex.cloud.api.Operation)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Operation::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  metadata_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  response_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Operation::ArenaDtor(void* object) {
  Operation* _this = reinterpret_cast< Operation* >(object);
  (void)_this;
}
void Operation::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Operation::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Operation::Clear() {
// @@protoc_insertion_point(message_clear_start:yandex.cloud.api.Operation)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  metadata_.ClearToEmpty();
  response_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Operation::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string metadata = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_metadata();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "yandex.cloud.api.Operation.metadata"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string response = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_response();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "yandex.cloud.api.Operation.response"));
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

::PROTOBUF_NAMESPACE_ID::uint8* Operation::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:yandex.cloud.api.Operation)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string metadata = 1;
  if (this->metadata().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_metadata().data(), static_cast<int>(this->_internal_metadata().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "yandex.cloud.api.Operation.metadata");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_metadata(), target);
  }

  // string response = 2;
  if (this->response().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_response().data(), static_cast<int>(this->_internal_response().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "yandex.cloud.api.Operation.response");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_response(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:yandex.cloud.api.Operation)
  return target;
}

size_t Operation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:yandex.cloud.api.Operation)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string metadata = 1;
  if (this->metadata().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_metadata());
  }

  // string response = 2;
  if (this->response().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_response());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Operation::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:yandex.cloud.api.Operation)
  GOOGLE_DCHECK_NE(&from, this);
  const Operation* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Operation>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:yandex.cloud.api.Operation)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:yandex.cloud.api.Operation)
    MergeFrom(*source);
  }
}

void Operation::MergeFrom(const Operation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:yandex.cloud.api.Operation)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.metadata().size() > 0) {
    _internal_set_metadata(from._internal_metadata());
  }
  if (from.response().size() > 0) {
    _internal_set_response(from._internal_response());
  }
}

void Operation::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:yandex.cloud.api.Operation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Operation::CopyFrom(const Operation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:yandex.cloud.api.Operation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Operation::IsInitialized() const {
  return true;
}

void Operation::InternalSwap(Operation* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  metadata_.Swap(&other->metadata_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  response_.Swap(&other->response_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata Operation::GetMetadata() const {
  return GetMetadataStatic();
}

PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::yandex::cloud::api::Operation >, 11, false >
  operation(kOperationFieldNumber, ::yandex::cloud::api::Operation::default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace cloud
}  // namespace yandex
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::yandex::cloud::api::Operation* Arena::CreateMaybeMessage< ::yandex::cloud::api::Operation >(Arena* arena) {
  return Arena::CreateMessageInternal< ::yandex::cloud::api::Operation >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>