// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:srv/GetFreeSpot.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__GET_FREE_SPOT__BUILDER_HPP_
#define SUII_MSGS__SRV__DETAIL__GET_FREE_SPOT__BUILDER_HPP_

#include "suii_msgs/srv/detail/get_free_spot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::GetFreeSpot_Request>()
{
  return ::suii_msgs::srv::GetFreeSpot_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace suii_msgs


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_GetFreeSpot_Response_spot
{
public:
  explicit Init_GetFreeSpot_Response_spot(::suii_msgs::srv::GetFreeSpot_Response & msg)
  : msg_(msg)
  {}
  ::suii_msgs::srv::GetFreeSpot_Response spot(::suii_msgs::srv::GetFreeSpot_Response::_spot_type arg)
  {
    msg_.spot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::GetFreeSpot_Response msg_;
};

class Init_GetFreeSpot_Response_sucess
{
public:
  Init_GetFreeSpot_Response_sucess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFreeSpot_Response_spot sucess(::suii_msgs::srv::GetFreeSpot_Response::_sucess_type arg)
  {
    msg_.sucess = std::move(arg);
    return Init_GetFreeSpot_Response_spot(msg_);
  }

private:
  ::suii_msgs::srv::GetFreeSpot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::GetFreeSpot_Response>()
{
  return suii_msgs::srv::builder::Init_GetFreeSpot_Response_sucess();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__GET_FREE_SPOT__BUILDER_HPP_
