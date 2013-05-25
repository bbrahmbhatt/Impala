/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "hive_service_types.h"

#include <algorithm>

namespace Apache { namespace Hadoop { namespace Hive {

int _kJobTrackerStateValues[] = {
  JobTrackerState::INITIALIZING,
  JobTrackerState::RUNNING
};
const char* _kJobTrackerStateNames[] = {
  "INITIALIZING",
  "RUNNING"
};
const std::map<int, const char*> _JobTrackerState_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kJobTrackerStateValues, _kJobTrackerStateNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* HiveClusterStatus::ascii_fingerprint = "D514EDCFFC86F64A2E924DCD16D4FAD8";
const uint8_t HiveClusterStatus::binary_fingerprint[16] = {0xD5,0x14,0xED,0xCF,0xFC,0x86,0xF6,0x4A,0x2E,0x92,0x4D,0xCD,0x16,0xD4,0xFA,0xD8};

uint32_t HiveClusterStatus::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->taskTrackers);
          this->__isset.taskTrackers = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->mapTasks);
          this->__isset.mapTasks = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->reduceTasks);
          this->__isset.reduceTasks = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->maxMapTasks);
          this->__isset.maxMapTasks = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->maxReduceTasks);
          this->__isset.maxReduceTasks = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->state = (JobTrackerState::type)ecast0;
          this->__isset.state = true;
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

uint32_t HiveClusterStatus::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("HiveClusterStatus");

  xfer += oprot->writeFieldBegin("taskTrackers", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->taskTrackers);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mapTasks", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->mapTasks);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("reduceTasks", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->reduceTasks);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("maxMapTasks", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->maxMapTasks);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("maxReduceTasks", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->maxReduceTasks);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("state", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32((int32_t)this->state);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(HiveClusterStatus &a, HiveClusterStatus &b) {
  using ::std::swap;
  swap(a.taskTrackers, b.taskTrackers);
  swap(a.mapTasks, b.mapTasks);
  swap(a.reduceTasks, b.reduceTasks);
  swap(a.maxMapTasks, b.maxMapTasks);
  swap(a.maxReduceTasks, b.maxReduceTasks);
  swap(a.state, b.state);
  swap(a.__isset, b.__isset);
}

const char* HiveServerException::ascii_fingerprint = "70563A0628F75DF9555F4D24690B1E26";
const uint8_t HiveServerException::binary_fingerprint[16] = {0x70,0x56,0x3A,0x06,0x28,0xF7,0x5D,0xF9,0x55,0x5F,0x4D,0x24,0x69,0x0B,0x1E,0x26};

uint32_t HiveServerException::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->errorCode);
          this->__isset.errorCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->SQLState);
          this->__isset.SQLState = true;
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

uint32_t HiveServerException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("HiveServerException");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("errorCode", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->errorCode);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("SQLState", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->SQLState);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(HiveServerException &a, HiveServerException &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.errorCode, b.errorCode);
  swap(a.SQLState, b.SQLState);
  swap(a.__isset, b.__isset);
}

}}} // namespace
