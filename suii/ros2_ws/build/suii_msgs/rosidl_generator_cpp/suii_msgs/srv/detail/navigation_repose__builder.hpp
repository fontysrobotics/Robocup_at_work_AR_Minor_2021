// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:srv/NavigationRepose.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__NAVIGATION_REPOSE__BUILDER_HPP_
#define SUII_MSGS__SRV__DETAIL__NAVIGATION_REPOSE__BUILDER_HPP_

#include "suii_msgs/srv/detail/navigation_repose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_NavigationRepose_Request_target
{
public:
  Init_NavigationRepose_Request_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::suii_msgs::srv::NavigationRepose_Request target(::suii_msgs::srv::NavigationRepose_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::NavigationRepose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::NavigationRepose_Request>()
{
  return suii_msgs::srv::builder::Init_NavigationRepose_Request_target();
}

}  // namespace suii_msgs


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_NavigationRepose_Response_status
{
public:
  Init_NavigationRepose_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::suii_msgs::srv::NavigationRepose_Response status(::suii_msgs::srv::NavigationRepose_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::NavigationRepose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::NavigationRepose_Response>()
{
  return suii_msgs::srv::builder::Init_NavigationRepose_Response_status();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__NAVIGATION_REPOSE__BUILDER_HPP_
