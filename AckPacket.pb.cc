// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AckPacket.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AckPacket.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace uavforge {

namespace {

const ::google::protobuf::Descriptor* AckPacket_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AckPacket_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_AckPacket_2eproto() {
  protobuf_AddDesc_AckPacket_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "AckPacket.proto");
  GOOGLE_CHECK(file != NULL);
  AckPacket_descriptor_ = file->message_type(0);
  static const int AckPacket_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AckPacket, acktimestamp_),
  };
  AckPacket_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AckPacket_descriptor_,
      AckPacket::default_instance_,
      AckPacket_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AckPacket, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AckPacket, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AckPacket));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_AckPacket_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AckPacket_descriptor_, &AckPacket::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_AckPacket_2eproto() {
  delete AckPacket::default_instance_;
  delete AckPacket_reflection_;
}

void protobuf_AddDesc_AckPacket_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017AckPacket.proto\022\010uavforge\"!\n\tAckPacket"
    "\022\024\n\014ackTimestamp\030\001 \002(\004", 62);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AckPacket.proto", &protobuf_RegisterTypes);
  AckPacket::default_instance_ = new AckPacket();
  AckPacket::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AckPacket_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AckPacket_2eproto {
  StaticDescriptorInitializer_AckPacket_2eproto() {
    protobuf_AddDesc_AckPacket_2eproto();
  }
} static_descriptor_initializer_AckPacket_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int AckPacket::kAckTimestampFieldNumber;
#endif  // !_MSC_VER

AckPacket::AckPacket()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:uavforge.AckPacket)
}

void AckPacket::InitAsDefaultInstance() {
}

AckPacket::AckPacket(const AckPacket& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:uavforge.AckPacket)
}

void AckPacket::SharedCtor() {
  _cached_size_ = 0;
  acktimestamp_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AckPacket::~AckPacket() {
  // @@protoc_insertion_point(destructor:uavforge.AckPacket)
  SharedDtor();
}

void AckPacket::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AckPacket::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AckPacket::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AckPacket_descriptor_;
}

const AckPacket& AckPacket::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_AckPacket_2eproto();
  return *default_instance_;
}

AckPacket* AckPacket::default_instance_ = NULL;

AckPacket* AckPacket::New() const {
  return new AckPacket;
}

void AckPacket::Clear() {
  acktimestamp_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AckPacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:uavforge.AckPacket)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 ackTimestamp = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &acktimestamp_)));
          set_has_acktimestamp();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:uavforge.AckPacket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:uavforge.AckPacket)
  return false;
#undef DO_
}

void AckPacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:uavforge.AckPacket)
  // required uint64 ackTimestamp = 1;
  if (has_acktimestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->acktimestamp(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:uavforge.AckPacket)
}

::google::protobuf::uint8* AckPacket::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:uavforge.AckPacket)
  // required uint64 ackTimestamp = 1;
  if (has_acktimestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->acktimestamp(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:uavforge.AckPacket)
  return target;
}

int AckPacket::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 ackTimestamp = 1;
    if (has_acktimestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->acktimestamp());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AckPacket::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AckPacket* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AckPacket*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AckPacket::MergeFrom(const AckPacket& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_acktimestamp()) {
      set_acktimestamp(from.acktimestamp());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AckPacket::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AckPacket::CopyFrom(const AckPacket& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AckPacket::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void AckPacket::Swap(AckPacket* other) {
  if (other != this) {
    std::swap(acktimestamp_, other->acktimestamp_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AckPacket::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AckPacket_descriptor_;
  metadata.reflection = AckPacket_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace uavforge

// @@protoc_insertion_point(global_scope)
