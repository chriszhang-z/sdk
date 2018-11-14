/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef StorageLayerSDKDataTypes_TYPES_H
#define StorageLayerSDKDataTypes_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>


namespace Ruyi { namespace SDK { namespace StorageLayer {

class GetLocalPathResult;

typedef struct _GetLocalPathResult__isset {
  _GetLocalPathResult__isset() : result(false), path(false) {}
  bool result :1;
  bool path :1;
} _GetLocalPathResult__isset;

class GetLocalPathResult : public virtual ::apache::thrift::TBase {
 public:

  GetLocalPathResult(const GetLocalPathResult&);
  GetLocalPathResult& operator=(const GetLocalPathResult&);
  GetLocalPathResult() : result(0), path() {
  }

  virtual ~GetLocalPathResult() throw();
  bool result;
  std::string path;

  _GetLocalPathResult__isset __isset;

  void __set_result(const bool val);

  void __set_path(const std::string& val);

  bool operator == (const GetLocalPathResult & rhs) const
  {
    if (!(result == rhs.result))
      return false;
    if (!(path == rhs.path))
      return false;
    return true;
  }
  bool operator != (const GetLocalPathResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetLocalPathResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetLocalPathResult &a, GetLocalPathResult &b);

std::ostream& operator<<(std::ostream& out, const GetLocalPathResult& obj);

}}} // namespace

#endif