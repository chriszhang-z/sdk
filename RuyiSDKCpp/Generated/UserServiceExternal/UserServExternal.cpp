/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "UserServExternal.h"

namespace Ruyi { namespace SDK { namespace UserServiceExternal {


UserServExternal_GetPlayingUserInfo_args::~UserServExternal_GetPlayingUserInfo_args() throw() {
}


uint32_t UserServExternal_GetPlayingUserInfo_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->appId);
          this->__isset.appId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->userId);
          this->__isset.userId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UserServExternal_GetPlayingUserInfo_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserServExternal_GetPlayingUserInfo_args");

  xfer += oprot->writeFieldBegin("appId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->appId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("userId", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->userId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserServExternal_GetPlayingUserInfo_pargs::~UserServExternal_GetPlayingUserInfo_pargs() throw() {
}


uint32_t UserServExternal_GetPlayingUserInfo_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserServExternal_GetPlayingUserInfo_pargs");

  xfer += oprot->writeFieldBegin("appId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->appId)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("userId", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString((*(this->userId)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserServExternal_GetPlayingUserInfo_result::~UserServExternal_GetPlayingUserInfo_result() throw() {
}


uint32_t UserServExternal_GetPlayingUserInfo_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->success.read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->error1.read(iprot);
          this->__isset.error1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UserServExternal_GetPlayingUserInfo_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("UserServExternal_GetPlayingUserInfo_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
    xfer += this->success.write(oprot);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.error1) {
    xfer += oprot->writeFieldBegin("error1", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->error1.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserServExternal_GetPlayingUserInfo_presult::~UserServExternal_GetPlayingUserInfo_presult() throw() {
}


uint32_t UserServExternal_GetPlayingUserInfo_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += (*(this->success)).read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->error1.read(iprot);
          this->__isset.error1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void UserServExternalClient::GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& _return, const std::string& appId, const std::string& userId)
{
  send_GetPlayingUserInfo(appId, userId);
  recv_GetPlayingUserInfo(_return);
}

void UserServExternalClient::send_GetPlayingUserInfo(const std::string& appId, const std::string& userId)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("GetPlayingUserInfo", ::apache::thrift::protocol::T_CALL, cseqid);

  UserServExternal_GetPlayingUserInfo_pargs args;
  args.appId = &appId;
  args.userId = &userId;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void UserServExternalClient::recv_GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("GetPlayingUserInfo") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  UserServExternal_GetPlayingUserInfo_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  if (result.__isset.error1) {
    throw result.error1;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "GetPlayingUserInfo failed: unknown result");
}

bool UserServExternalProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void UserServExternalProcessor::process_GetPlayingUserInfo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("UserServExternal.GetPlayingUserInfo", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "UserServExternal.GetPlayingUserInfo");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "UserServExternal.GetPlayingUserInfo");
  }

  UserServExternal_GetPlayingUserInfo_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "UserServExternal.GetPlayingUserInfo", bytes);
  }

  UserServExternal_GetPlayingUserInfo_result result;
  try {
    iface_->GetPlayingUserInfo(result.success, args.appId, args.userId);
    result.__isset.success = true;
  } catch ( ::Ruyi::SDK::CommonType::ErrorException &error1) {
    result.error1 = error1;
    result.__isset.error1 = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "UserServExternal.GetPlayingUserInfo");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("GetPlayingUserInfo", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "UserServExternal.GetPlayingUserInfo");
  }

  oprot->writeMessageBegin("GetPlayingUserInfo", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "UserServExternal.GetPlayingUserInfo", bytes);
  }
}

::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > UserServExternalProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< UserServExternalIfFactory > cleanup(handlerFactory_);
  ::apache::thrift::stdcxx::shared_ptr< UserServExternalIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > processor(new UserServExternalProcessor(handler));
  return processor;
}

void UserServExternalConcurrentClient::GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& _return, const std::string& appId, const std::string& userId)
{
  int32_t seqid = send_GetPlayingUserInfo(appId, userId);
  recv_GetPlayingUserInfo(_return, seqid);
}

int32_t UserServExternalConcurrentClient::send_GetPlayingUserInfo(const std::string& appId, const std::string& userId)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("GetPlayingUserInfo", ::apache::thrift::protocol::T_CALL, cseqid);

  UserServExternal_GetPlayingUserInfo_pargs args;
  args.appId = &appId;
  args.userId = &userId;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

void UserServExternalConcurrentClient::recv_GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& _return, const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);

  while(true) {
    if(!this->sync_.getPending(fname, mtype, rseqid)) {
      iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(iprot_);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
      }
      if (fname.compare("GetPlayingUserInfo") != 0) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      UserServExternal_GetPlayingUserInfo_presult result;
      result.success = &_return;
      result.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        // _return pointer has now been filled
        sentry.commit();
        return;
      }
      if (result.__isset.error1) {
        sentry.commit();
        throw result.error1;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "GetPlayingUserInfo failed: unknown result");
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}

}}} // namespace

