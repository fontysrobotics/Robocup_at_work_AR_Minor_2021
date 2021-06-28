// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:srv/ItemDrive.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__ITEM_DRIVE__BUILDER_HPP_
#define SUII_MSGS__SRV__DETAIL__ITEM_DRIVE__BUILDER_HPP_

#include "suii_msgs/srv/detail/item_drive__struct.hpp"
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
auto build<::suii_msgs::srv::ItemDrive_Request>()
{
  return ::suii_msgs::srv::ItemDrive_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace suii_msgs


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_ItemDrive_Response_error
{
public:
  explicit Init_ItemDrive_Response_error(::suii_msgs::srv::ItemDrive_Response & msg)
  : msg_(msg)
  {}
  ::suii_msgs::srv::ItemDrive_Response error(::suii_msgs::srv::ItemDrive_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::ItemDrive_Response msg_;
};

class Init_ItemDrive_Response_sucess
{
public:
  Init_ItemDrive_Response_sucess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItemDrive_Response_error sucess(::suii_msgs::srv::ItemDrive_Response::_sucess_type arg)
  {
    msg_.sucess = std::move(arg);
    return Init_ItemDrive_Response_error(msg_);
  }

private:
  ::suii_msgs::srv::ItemDrive_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::ItemDrive_Response>()
{
  return suii_msgs::srv::builder::Init_ItemDrive_Response_sucess();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__ITEM_DRIVE__BUILDER_HPP_
