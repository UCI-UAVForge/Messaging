// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Packet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Packet.pb.h"

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

const ::google::protobuf::Descriptor* Packet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Packet_reflection_ = NULL;
struct PacketOneofInstance {
  const ::uavforge::TelemetryPacket* telem_;
  const ::uavforge::ActionPacket* comm_;
  const ::uavforge::InfoPacket* info_;
  const ::uavforge::AckPacket* ack_;
}* Packet_default_oneof_instance_ = NULL;
const ::google::protobuf::EnumDescriptor* Packet_MessageType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Packet_2eproto() {
  protobuf_AddDesc_Packet_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Packet.proto");
  GOOGLE_CHECK(file != NULL);
  Packet_descriptor_ = file->message_type(0);
  static const int Packet_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, sender_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, target_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, type_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Packet_default_oneof_instance_, telem_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Packet_default_oneof_instance_, comm_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Packet_default_oneof_instance_, info_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Packet_default_oneof_instance_, ack_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, contents_),
  };
  Packet_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Packet_descriptor_,
      Packet::default_instance_,
      Packet_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _unknown_fields_),
      -1,
      Packet_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _oneof_case_[0]),
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Packet));
  Packet_MessageType_descriptor_ = Packet_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Packet_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Packet_descriptor_, &Packet::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Packet_2eproto() {
  delete Packet::default_instance_;
  delete Packet_default_oneof_instance_;
  delete Packet_reflection_;
}

void protobuf_AddDesc_Packet_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::uavforge::protobuf_AddDesc_AckPacket_2eproto();
  ::uavforge::protobuf_AddDesc_TelemetryPacket_2eproto();
  ::uavforge::protobuf_AddDesc_ActionPacket_2eproto();
  ::uavforge::protobuf_AddDesc_InfoPacket_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014Packet.proto\022\010uavforge\032\017AckPacket.prot"
    "o\032\025TelemetryPacket.proto\032\022ActionPacket.p"
    "roto\032\020InfoPacket.proto\"\326\002\n\006Packet\022\021\n\ttim"
    "estamp\030\001 \002(\004\022\016\n\006sender\030\002 \002(\t\022\016\n\006target\030\003"
    " \002(\t\022*\n\004type\030\004 \002(\0162\034.uavforge.Packet.Mes"
    "sageType\022*\n\005telem\030\005 \001(\0132\031.uavforge.Telem"
    "etryPacketH\000\022&\n\004comm\030\006 \001(\0132\026.uavforge.Ac"
    "tionPacketH\000\022$\n\004info\030\010 \001(\0132\024.uavforge.In"
    "foPacketH\000\022\"\n\003ack\030\t \001(\0132\023.uavforge.AckPa"
    "cketH\000\"C\n\013MessageType\022\007\n\003ACK\020\000\022\t\n\005TELEM\020"
    "\001\022\n\n\006ACTION\020\002\022\n\n\006UPDATE\020\003\022\010\n\004INFO\020\004B\n\n\010c"
    "ontents", 447);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Packet.proto", &protobuf_RegisterTypes);
  Packet::default_instance_ = new Packet();
  Packet_default_oneof_instance_ = new PacketOneofInstance;
  Packet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Packet_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Packet_2eproto {
  StaticDescriptorInitializer_Packet_2eproto() {
    protobuf_AddDesc_Packet_2eproto();
  }
} static_descriptor_initializer_Packet_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Packet_MessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Packet_MessageType_descriptor_;
}
bool Packet_MessageType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Packet_MessageType Packet::ACK;
const Packet_MessageType Packet::TELEM;
const Packet_MessageType Packet::ACTION;
const Packet_MessageType Packet::UPDATE;
const Packet_MessageType Packet::INFO;
const Packet_MessageType Packet::MessageType_MIN;
const Packet_MessageType Packet::MessageType_MAX;
const int Packet::MessageType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Packet::kTimestampFieldNumber;
const int Packet::kSenderFieldNumber;
const int Packet::kTargetFieldNumber;
const int Packet::kTypeFieldNumber;
const int Packet::kTelemFieldNumber;
const int Packet::kCommFieldNumber;
const int Packet::kInfoFieldNumber;
const int Packet::kAckFieldNumber;
#endif  // !_MSC_VER

Packet::Packet()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:uavforge.Packet)
}

void Packet::InitAsDefaultInstance() {
  Packet_default_oneof_instance_->telem_ = const_cast< ::uavforge::TelemetryPacket*>(&::uavforge::TelemetryPacket::default_instance());
  Packet_default_oneof_instance_->comm_ = const_cast< ::uavforge::ActionPacket*>(&::uavforge::ActionPacket::default_instance());
  Packet_default_oneof_instance_->info_ = const_cast< ::uavforge::InfoPacket*>(&::uavforge::InfoPacket::default_instance());
  Packet_default_oneof_instance_->ack_ = const_cast< ::uavforge::AckPacket*>(&::uavforge::AckPacket::default_instance());
}

Packet::Packet(const Packet& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:uavforge.Packet)
}

void Packet::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  timestamp_ = GOOGLE_ULONGLONG(0);
  sender_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  clear_has_contents();
}

Packet::~Packet() {
  // @@protoc_insertion_point(destructor:uavforge.Packet)
  SharedDtor();
}

void Packet::SharedDtor() {
  if (sender_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete sender_;
  }
  if (target_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete target_;
  }
  if (has_contents()) {
    clear_contents();
  }
  if (this != default_instance_) {
  }
}

void Packet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Packet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Packet_descriptor_;
}

const Packet& Packet::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Packet_2eproto();
  return *default_instance_;
}

Packet* Packet::default_instance_ = NULL;

Packet* Packet::New() const {
  return new Packet;
}

void Packet::clear_contents() {
  switch(contents_case()) {
    case kTelem: {
      delete contents_.telem_;
      break;
    }
    case kComm: {
      delete contents_.comm_;
      break;
    }
    case kInfo: {
      delete contents_.info_;
      break;
    }
    case kAck: {
      delete contents_.ack_;
      break;
    }
    case CONTENTS_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = CONTENTS_NOT_SET;
}


void Packet::Clear() {
  if (_has_bits_[0 / 32] & 15) {
    timestamp_ = GOOGLE_ULONGLONG(0);
    if (has_sender()) {
      if (sender_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        sender_->clear();
      }
    }
    if (has_target()) {
      if (target_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        target_->clear();
      }
    }
    type_ = 0;
  }
  clear_contents();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Packet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:uavforge.Packet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 timestamp = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &timestamp_)));
          set_has_timestamp();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_sender;
        break;
      }

      // required string sender = 2;
      case 2: {
        if (tag == 18) {
         parse_sender:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sender()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->sender().data(), this->sender().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "sender");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_target;
        break;
      }

      // required string target = 3;
      case 3: {
        if (tag == 26) {
         parse_target:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_target()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->target().data(), this->target().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "target");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_type;
        break;
      }

      // required .uavforge.Packet.MessageType type = 4;
      case 4: {
        if (tag == 32) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::uavforge::Packet_MessageType_IsValid(value)) {
            set_type(static_cast< ::uavforge::Packet_MessageType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_telem;
        break;
      }

      // optional .uavforge.TelemetryPacket telem = 5;
      case 5: {
        if (tag == 42) {
         parse_telem:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_telem()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_comm;
        break;
      }

      // optional .uavforge.ActionPacket comm = 6;
      case 6: {
        if (tag == 50) {
         parse_comm:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_comm()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_info;
        break;
      }

      // optional .uavforge.InfoPacket info = 8;
      case 8: {
        if (tag == 66) {
         parse_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_info()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_ack;
        break;
      }

      // optional .uavforge.AckPacket ack = 9;
      case 9: {
        if (tag == 74) {
         parse_ack:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ack()));
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
  // @@protoc_insertion_point(parse_success:uavforge.Packet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:uavforge.Packet)
  return false;
#undef DO_
}

void Packet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:uavforge.Packet)
  // required uint64 timestamp = 1;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->timestamp(), output);
  }

  // required string sender = 2;
  if (has_sender()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->sender().data(), this->sender().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "sender");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->sender(), output);
  }

  // required string target = 3;
  if (has_target()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->target().data(), this->target().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "target");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->target(), output);
  }

  // required .uavforge.Packet.MessageType type = 4;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->type(), output);
  }

  // optional .uavforge.TelemetryPacket telem = 5;
  if (has_telem()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->telem(), output);
  }

  // optional .uavforge.ActionPacket comm = 6;
  if (has_comm()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->comm(), output);
  }

  // optional .uavforge.InfoPacket info = 8;
  if (has_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->info(), output);
  }

  // optional .uavforge.AckPacket ack = 9;
  if (has_ack()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->ack(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:uavforge.Packet)
}

::google::protobuf::uint8* Packet::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:uavforge.Packet)
  // required uint64 timestamp = 1;
  if (has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->timestamp(), target);
  }

  // required string sender = 2;
  if (has_sender()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->sender().data(), this->sender().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "sender");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->sender(), target);
  }

  // required string target = 3;
  if (has_target()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->target().data(), this->target().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "target");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->target(), target);
  }

  // required .uavforge.Packet.MessageType type = 4;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->type(), target);
  }

  // optional .uavforge.TelemetryPacket telem = 5;
  if (has_telem()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->telem(), target);
  }

  // optional .uavforge.ActionPacket comm = 6;
  if (has_comm()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->comm(), target);
  }

  // optional .uavforge.InfoPacket info = 8;
  if (has_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        8, this->info(), target);
  }

  // optional .uavforge.AckPacket ack = 9;
  if (has_ack()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        9, this->ack(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:uavforge.Packet)
  return target;
}

int Packet::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 timestamp = 1;
    if (has_timestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->timestamp());
    }

    // required string sender = 2;
    if (has_sender()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sender());
    }

    // required string target = 3;
    if (has_target()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->target());
    }

    // required .uavforge.Packet.MessageType type = 4;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

  }
  switch (contents_case()) {
    // optional .uavforge.TelemetryPacket telem = 5;
    case kTelem: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->telem());
      break;
    }
    // optional .uavforge.ActionPacket comm = 6;
    case kComm: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->comm());
      break;
    }
    // optional .uavforge.InfoPacket info = 8;
    case kInfo: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->info());
      break;
    }
    // optional .uavforge.AckPacket ack = 9;
    case kAck: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ack());
      break;
    }
    case CONTENTS_NOT_SET: {
      break;
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

void Packet::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Packet* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Packet*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Packet::MergeFrom(const Packet& from) {
  GOOGLE_CHECK_NE(&from, this);
  switch (from.contents_case()) {
    case kTelem: {
      mutable_telem()->::uavforge::TelemetryPacket::MergeFrom(from.telem());
      break;
    }
    case kComm: {
      mutable_comm()->::uavforge::ActionPacket::MergeFrom(from.comm());
      break;
    }
    case kInfo: {
      mutable_info()->::uavforge::InfoPacket::MergeFrom(from.info());
      break;
    }
    case kAck: {
      mutable_ack()->::uavforge::AckPacket::MergeFrom(from.ack());
      break;
    }
    case CONTENTS_NOT_SET: {
      break;
    }
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_timestamp()) {
      set_timestamp(from.timestamp());
    }
    if (from.has_sender()) {
      set_sender(from.sender());
    }
    if (from.has_target()) {
      set_target(from.target());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Packet::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Packet::CopyFrom(const Packet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Packet::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  if (has_telem()) {
    if (!this->telem().IsInitialized()) return false;
  }
  if (has_comm()) {
    if (!this->comm().IsInitialized()) return false;
  }
  if (has_ack()) {
    if (!this->ack().IsInitialized()) return false;
  }
  return true;
}

void Packet::Swap(Packet* other) {
  if (other != this) {
    std::swap(timestamp_, other->timestamp_);
    std::swap(sender_, other->sender_);
    std::swap(target_, other->target_);
    std::swap(type_, other->type_);
    std::swap(contents_, other->contents_);
    std::swap(_oneof_case_[0], other->_oneof_case_[0]);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Packet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Packet_descriptor_;
  metadata.reflection = Packet_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace uavforge

// @@protoc_insertion_point(global_scope)
