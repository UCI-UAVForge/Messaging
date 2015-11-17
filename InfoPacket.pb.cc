// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InfoPacket.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "InfoPacket.pb.h"

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

const ::google::protobuf::Descriptor* InfoPacket_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InfoPacket_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_InfoPacket_2eproto() {
  protobuf_AddDesc_InfoPacket_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "InfoPacket.proto");
  GOOGLE_CHECK(file != NULL);
  InfoPacket_descriptor_ = file->message_type(0);
  static const int InfoPacket_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoPacket, pointsstorable_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoPacket, battery_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoPacket, infostrings_),
  };
  InfoPacket_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      InfoPacket_descriptor_,
      InfoPacket::default_instance_,
      InfoPacket_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoPacket, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoPacket, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(InfoPacket));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_InfoPacket_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    InfoPacket_descriptor_, &InfoPacket::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_InfoPacket_2eproto() {
  delete InfoPacket::default_instance_;
  delete InfoPacket_reflection_;
}

void protobuf_AddDesc_InfoPacket_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020InfoPacket.proto\022\010uavforge\"J\n\nInfoPack"
    "et\022\026\n\016pointsStorable\030\001 \001(\r\022\017\n\007battery\030\002 "
    "\001(\r\022\023\n\013infoStrings\030\003 \003(\t", 104);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "InfoPacket.proto", &protobuf_RegisterTypes);
  InfoPacket::default_instance_ = new InfoPacket();
  InfoPacket::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_InfoPacket_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_InfoPacket_2eproto {
  StaticDescriptorInitializer_InfoPacket_2eproto() {
    protobuf_AddDesc_InfoPacket_2eproto();
  }
} static_descriptor_initializer_InfoPacket_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int InfoPacket::kPointsStorableFieldNumber;
const int InfoPacket::kBatteryFieldNumber;
const int InfoPacket::kInfoStringsFieldNumber;
#endif  // !_MSC_VER

InfoPacket::InfoPacket()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:uavforge.InfoPacket)
}

void InfoPacket::InitAsDefaultInstance() {
}

InfoPacket::InfoPacket(const InfoPacket& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:uavforge.InfoPacket)
}

void InfoPacket::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  pointsstorable_ = 0u;
  battery_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InfoPacket::~InfoPacket() {
  // @@protoc_insertion_point(destructor:uavforge.InfoPacket)
  SharedDtor();
}

void InfoPacket::SharedDtor() {
  if (this != default_instance_) {
  }
}

void InfoPacket::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InfoPacket::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InfoPacket_descriptor_;
}

const InfoPacket& InfoPacket::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_InfoPacket_2eproto();
  return *default_instance_;
}

InfoPacket* InfoPacket::default_instance_ = NULL;

InfoPacket* InfoPacket::New() const {
  return new InfoPacket;
}

void InfoPacket::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<InfoPacket*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(pointsstorable_, battery_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  infostrings_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool InfoPacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:uavforge.InfoPacket)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 pointsStorable = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &pointsstorable_)));
          set_has_pointsstorable();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_battery;
        break;
      }

      // optional uint32 battery = 2;
      case 2: {
        if (tag == 16) {
         parse_battery:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &battery_)));
          set_has_battery();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_infoStrings;
        break;
      }

      // repeated string infoStrings = 3;
      case 3: {
        if (tag == 26) {
         parse_infoStrings:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_infostrings()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->infostrings(this->infostrings_size() - 1).data(),
            this->infostrings(this->infostrings_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "infostrings");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_infoStrings;
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
  // @@protoc_insertion_point(parse_success:uavforge.InfoPacket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:uavforge.InfoPacket)
  return false;
#undef DO_
}

void InfoPacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:uavforge.InfoPacket)
  // optional uint32 pointsStorable = 1;
  if (has_pointsstorable()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->pointsstorable(), output);
  }

  // optional uint32 battery = 2;
  if (has_battery()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->battery(), output);
  }

  // repeated string infoStrings = 3;
  for (int i = 0; i < this->infostrings_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->infostrings(i).data(), this->infostrings(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "infostrings");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->infostrings(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:uavforge.InfoPacket)
}

::google::protobuf::uint8* InfoPacket::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:uavforge.InfoPacket)
  // optional uint32 pointsStorable = 1;
  if (has_pointsstorable()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->pointsstorable(), target);
  }

  // optional uint32 battery = 2;
  if (has_battery()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->battery(), target);
  }

  // repeated string infoStrings = 3;
  for (int i = 0; i < this->infostrings_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->infostrings(i).data(), this->infostrings(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "infostrings");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->infostrings(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:uavforge.InfoPacket)
  return target;
}

int InfoPacket::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 pointsStorable = 1;
    if (has_pointsstorable()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->pointsstorable());
    }

    // optional uint32 battery = 2;
    if (has_battery()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->battery());
    }

  }
  // repeated string infoStrings = 3;
  total_size += 1 * this->infostrings_size();
  for (int i = 0; i < this->infostrings_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->infostrings(i));
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

void InfoPacket::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const InfoPacket* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const InfoPacket*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void InfoPacket::MergeFrom(const InfoPacket& from) {
  GOOGLE_CHECK_NE(&from, this);
  infostrings_.MergeFrom(from.infostrings_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_pointsstorable()) {
      set_pointsstorable(from.pointsstorable());
    }
    if (from.has_battery()) {
      set_battery(from.battery());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void InfoPacket::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InfoPacket::CopyFrom(const InfoPacket& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InfoPacket::IsInitialized() const {

  return true;
}

void InfoPacket::Swap(InfoPacket* other) {
  if (other != this) {
    std::swap(pointsstorable_, other->pointsstorable_);
    std::swap(battery_, other->battery_);
    infostrings_.Swap(&other->infostrings_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata InfoPacket::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InfoPacket_descriptor_;
  metadata.reflection = InfoPacket_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace uavforge

// @@protoc_insertion_point(global_scope)
