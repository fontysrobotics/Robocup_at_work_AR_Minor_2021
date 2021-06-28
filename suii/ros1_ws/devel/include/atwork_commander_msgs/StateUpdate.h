// Generated by gencpp from file atwork_commander_msgs/StateUpdate.msg
// DO NOT EDIT!


#ifndef ATWORK_COMMANDER_MSGS_MESSAGE_STATEUPDATE_H
#define ATWORK_COMMANDER_MSGS_MESSAGE_STATEUPDATE_H

#include <ros/service_traits.h>


#include <atwork_commander_msgs/StateUpdateRequest.h>
#include <atwork_commander_msgs/StateUpdateResponse.h>


namespace atwork_commander_msgs
{

struct StateUpdate
{

typedef StateUpdateRequest Request;
typedef StateUpdateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StateUpdate
} // namespace atwork_commander_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::atwork_commander_msgs::StateUpdate > {
  static const char* value()
  {
    return "a8b2d625f7bc386acccfad3294525589";
  }

  static const char* value(const ::atwork_commander_msgs::StateUpdate&) { return value(); }
};

template<>
struct DataType< ::atwork_commander_msgs::StateUpdate > {
  static const char* value()
  {
    return "atwork_commander_msgs/StateUpdate";
  }

  static const char* value(const ::atwork_commander_msgs::StateUpdate&) { return value(); }
};


// service_traits::MD5Sum< ::atwork_commander_msgs::StateUpdateRequest> should match
// service_traits::MD5Sum< ::atwork_commander_msgs::StateUpdate >
template<>
struct MD5Sum< ::atwork_commander_msgs::StateUpdateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::atwork_commander_msgs::StateUpdate >::value();
  }
  static const char* value(const ::atwork_commander_msgs::StateUpdateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::atwork_commander_msgs::StateUpdateRequest> should match
// service_traits::DataType< ::atwork_commander_msgs::StateUpdate >
template<>
struct DataType< ::atwork_commander_msgs::StateUpdateRequest>
{
  static const char* value()
  {
    return DataType< ::atwork_commander_msgs::StateUpdate >::value();
  }
  static const char* value(const ::atwork_commander_msgs::StateUpdateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::atwork_commander_msgs::StateUpdateResponse> should match
// service_traits::MD5Sum< ::atwork_commander_msgs::StateUpdate >
template<>
struct MD5Sum< ::atwork_commander_msgs::StateUpdateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::atwork_commander_msgs::StateUpdate >::value();
  }
  static const char* value(const ::atwork_commander_msgs::StateUpdateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::atwork_commander_msgs::StateUpdateResponse> should match
// service_traits::DataType< ::atwork_commander_msgs::StateUpdate >
template<>
struct DataType< ::atwork_commander_msgs::StateUpdateResponse>
{
  static const char* value()
  {
    return DataType< ::atwork_commander_msgs::StateUpdate >::value();
  }
  static const char* value(const ::atwork_commander_msgs::StateUpdateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ATWORK_COMMANDER_MSGS_MESSAGE_STATEUPDATE_H