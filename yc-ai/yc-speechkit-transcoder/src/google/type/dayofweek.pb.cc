// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/dayofweek.proto

#include "google/type/dayofweek.pb.h"

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
namespace google {
namespace type {
}  // namespace type
}  // namespace google
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_google_2ftype_2fdayofweek_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2ftype_2fdayofweek_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2ftype_2fdayofweek_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2ftype_2fdayofweek_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_google_2ftype_2fdayofweek_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033google/type/dayofweek.proto\022\013google.ty"
  "pe*\204\001\n\tDayOfWeek\022\033\n\027DAY_OF_WEEK_UNSPECIF"
  "IED\020\000\022\n\n\006MONDAY\020\001\022\013\n\007TUESDAY\020\002\022\r\n\tWEDNES"
  "DAY\020\003\022\014\n\010THURSDAY\020\004\022\n\n\006FRIDAY\020\005\022\014\n\010SATUR"
  "DAY\020\006\022\n\n\006SUNDAY\020\007Bi\n\017com.google.typeB\016Da"
  "yOfWeekProtoP\001Z>google.golang.org/genpro"
  "to/googleapis/type/dayofweek;dayofweek\242\002"
  "\003GTPb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2ftype_2fdayofweek_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2fdayofweek_2eproto = {
  false, false, 292, descriptor_table_protodef_google_2ftype_2fdayofweek_2eproto, "google/type/dayofweek.proto", 
  &descriptor_table_google_2ftype_2fdayofweek_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_google_2ftype_2fdayofweek_2eproto::offsets,
  file_level_metadata_google_2ftype_2fdayofweek_2eproto, file_level_enum_descriptors_google_2ftype_2fdayofweek_2eproto, file_level_service_descriptors_google_2ftype_2fdayofweek_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_google_2ftype_2fdayofweek_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2ftype_2fdayofweek_2eproto);
  return descriptor_table_google_2ftype_2fdayofweek_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_google_2ftype_2fdayofweek_2eproto(&descriptor_table_google_2ftype_2fdayofweek_2eproto);
namespace google {
namespace type {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DayOfWeek_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2ftype_2fdayofweek_2eproto);
  return file_level_enum_descriptors_google_2ftype_2fdayofweek_2eproto[0];
}
bool DayOfWeek_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>