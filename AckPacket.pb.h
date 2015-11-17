// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AckPacket.proto

#ifndef PROTOBUF_AckPacket_2eproto__INCLUDED
#define PROTOBUF_AckPacket_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace uavforge {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_AckPacket_2eproto();
void protobuf_AssignDesc_AckPacket_2eproto();
void protobuf_ShutdownFile_AckPacket_2eproto();

class AckPacket;

// ===================================================================

class AckPacket : public ::google::protobuf::Message {
 public:
  AckPacket();
  virtual ~AckPacket();

  AckPacket(const AckPacket& from);

  inline AckPacket& operator=(const AckPacket& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AckPacket& default_instance();

  void Swap(AckPacket* other);

  // implements Message ----------------------------------------------

  AckPacket* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AckPacket& from);
  void MergeFrom(const AckPacket& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint64 ackTimestamp = 1;
  inline bool has_acktimestamp() const;
  inline void clear_acktimestamp();
  static const int kAckTimestampFieldNumber = 1;
  inline ::google::protobuf::uint64 acktimestamp() const;
  inline void set_acktimestamp(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:uavforge.AckPacket)
 private:
  inline void set_has_acktimestamp();
  inline void clear_has_acktimestamp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 acktimestamp_;
  friend void  protobuf_AddDesc_AckPacket_2eproto();
  friend void protobuf_AssignDesc_AckPacket_2eproto();
  friend void protobuf_ShutdownFile_AckPacket_2eproto();

  void InitAsDefaultInstance();
  static AckPacket* default_instance_;
};
// ===================================================================


// ===================================================================

// AckPacket

// required uint64 ackTimestamp = 1;
inline bool AckPacket::has_acktimestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AckPacket::set_has_acktimestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AckPacket::clear_has_acktimestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AckPacket::clear_acktimestamp() {
  acktimestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_acktimestamp();
}
inline ::google::protobuf::uint64 AckPacket::acktimestamp() const {
  // @@protoc_insertion_point(field_get:uavforge.AckPacket.ackTimestamp)
  return acktimestamp_;
}
inline void AckPacket::set_acktimestamp(::google::protobuf::uint64 value) {
  set_has_acktimestamp();
  acktimestamp_ = value;
  // @@protoc_insertion_point(field_set:uavforge.AckPacket.ackTimestamp)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace uavforge

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AckPacket_2eproto__INCLUDED
