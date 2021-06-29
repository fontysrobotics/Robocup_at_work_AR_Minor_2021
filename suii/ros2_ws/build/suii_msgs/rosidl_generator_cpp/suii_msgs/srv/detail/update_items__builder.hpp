// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:srv/UpdateItems.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__UPDATE_ITEMS__BUILDER_HPP_
#define SUII_MSGS__SRV__DETAIL__UPDATE_ITEMS__BUILDER_HPP_

#include "suii_msgs/srv/detail/update_items__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_UpdateItems_Request_items
{
public:
  Init_UpdateItems_Request_items()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::suii_msgs::srv::UpdateItems_Request items(::suii_msgs::srv::UpdateItems_Request::_items_type arg)
  {
    msg_.items = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::UpdateItems_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::UpdateItems_Request>()
{
  return suii_msgs::srv::builder::Init_UpdateItems_Request_items();
}

}  // namespace suii_msgs


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_UpdateItems_Response_succes
{
public:
  Init_UpdateItems_Response_succes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::suii_msgs::srv::UpdateItems_Response succes(::suii_msgs::srv::UpdateItems_Response::_succes_type arg)
  {
    msg_.succes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::UpdateItems_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::UpdateItems_Response>()
{
  return suii_msgs::srv::builder::Init_UpdateItems_Response_succes();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__UPDATE_ITEMS__BUILDER_HPP_
