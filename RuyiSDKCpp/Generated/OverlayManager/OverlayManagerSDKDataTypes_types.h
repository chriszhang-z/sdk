/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef OverlayManagerSDKDataTypes_TYPES_H
#define OverlayManagerSDKDataTypes_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>


namespace Ruyi { namespace SDK { namespace OverlayManagerExternal {

class NotifyTakeScreenShot;


class NotifyTakeScreenShot : public virtual ::apache::thrift::TBase {
 public:

  NotifyTakeScreenShot(const NotifyTakeScreenShot&);
  NotifyTakeScreenShot& operator=(const NotifyTakeScreenShot&);
  NotifyTakeScreenShot() {
  }

  virtual ~NotifyTakeScreenShot() throw();

  bool operator == (const NotifyTakeScreenShot & /* rhs */) const
  {
    return true;
  }
  bool operator != (const NotifyTakeScreenShot &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotifyTakeScreenShot & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(NotifyTakeScreenShot &a, NotifyTakeScreenShot &b);

std::ostream& operator<<(std::ostream& out, const NotifyTakeScreenShot& obj);

}}} // namespace

#endif