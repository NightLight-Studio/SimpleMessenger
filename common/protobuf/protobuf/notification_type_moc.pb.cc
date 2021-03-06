// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: notification_type_moc.proto

#include "notification_type_moc.pb.h"

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
constexpr NotificationTypeMoc::NotificationTypeMoc(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : nt_type_(0){}
struct NotificationTypeMocDefaultTypeInternal {
  constexpr NotificationTypeMocDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~NotificationTypeMocDefaultTypeInternal() {}
  union {
    NotificationTypeMoc _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT NotificationTypeMocDefaultTypeInternal _NotificationTypeMoc_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_notification_5ftype_5fmoc_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_notification_5ftype_5fmoc_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_notification_5ftype_5fmoc_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_notification_5ftype_5fmoc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::NotificationTypeMoc, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::NotificationTypeMoc, nt_type_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::NotificationTypeMoc)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_NotificationTypeMoc_default_instance_),
};

const char descriptor_table_protodef_notification_5ftype_5fmoc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033notification_type_moc.proto\"&\n\023Notific"
  "ationTypeMoc\022\017\n\007nt_type\030\001 \001(\005b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_notification_5ftype_5fmoc_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_notification_5ftype_5fmoc_2eproto = {
  false, false, 77, descriptor_table_protodef_notification_5ftype_5fmoc_2eproto, "notification_type_moc.proto", 
  &descriptor_table_notification_5ftype_5fmoc_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_notification_5ftype_5fmoc_2eproto::offsets,
  file_level_metadata_notification_5ftype_5fmoc_2eproto, file_level_enum_descriptors_notification_5ftype_5fmoc_2eproto, file_level_service_descriptors_notification_5ftype_5fmoc_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_notification_5ftype_5fmoc_2eproto_getter() {
  return &descriptor_table_notification_5ftype_5fmoc_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_notification_5ftype_5fmoc_2eproto(&descriptor_table_notification_5ftype_5fmoc_2eproto);

// ===================================================================

class NotificationTypeMoc::_Internal {
 public:
};

NotificationTypeMoc::NotificationTypeMoc(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:NotificationTypeMoc)
}
NotificationTypeMoc::NotificationTypeMoc(const NotificationTypeMoc& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  nt_type_ = from.nt_type_;
  // @@protoc_insertion_point(copy_constructor:NotificationTypeMoc)
}

inline void NotificationTypeMoc::SharedCtor() {
nt_type_ = 0;
}

NotificationTypeMoc::~NotificationTypeMoc() {
  // @@protoc_insertion_point(destructor:NotificationTypeMoc)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void NotificationTypeMoc::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void NotificationTypeMoc::ArenaDtor(void* object) {
  NotificationTypeMoc* _this = reinterpret_cast< NotificationTypeMoc* >(object);
  (void)_this;
}
void NotificationTypeMoc::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NotificationTypeMoc::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void NotificationTypeMoc::Clear() {
// @@protoc_insertion_point(message_clear_start:NotificationTypeMoc)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  nt_type_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NotificationTypeMoc::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 nt_type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          nt_type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* NotificationTypeMoc::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:NotificationTypeMoc)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 nt_type = 1;
  if (this->_internal_nt_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_nt_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:NotificationTypeMoc)
  return target;
}

size_t NotificationTypeMoc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:NotificationTypeMoc)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 nt_type = 1;
  if (this->_internal_nt_type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_nt_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData NotificationTypeMoc::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    NotificationTypeMoc::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*NotificationTypeMoc::GetClassData() const { return &_class_data_; }

void NotificationTypeMoc::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<NotificationTypeMoc *>(to)->MergeFrom(
      static_cast<const NotificationTypeMoc &>(from));
}


void NotificationTypeMoc::MergeFrom(const NotificationTypeMoc& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:NotificationTypeMoc)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_nt_type() != 0) {
    _internal_set_nt_type(from._internal_nt_type());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void NotificationTypeMoc::CopyFrom(const NotificationTypeMoc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:NotificationTypeMoc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NotificationTypeMoc::IsInitialized() const {
  return true;
}

void NotificationTypeMoc::InternalSwap(NotificationTypeMoc* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(nt_type_, other->nt_type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata NotificationTypeMoc::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_notification_5ftype_5fmoc_2eproto_getter, &descriptor_table_notification_5ftype_5fmoc_2eproto_once,
      file_level_metadata_notification_5ftype_5fmoc_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::NotificationTypeMoc* Arena::CreateMaybeMessage< ::NotificationTypeMoc >(Arena* arena) {
  return Arena::CreateMessageInternal< ::NotificationTypeMoc >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
