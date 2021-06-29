// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:srv/ItemPick.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__ITEM_PICK__BUILDER_HPP_
#define SUII_MSGS__SRV__DETAIL__ITEM_PICK__BUILDER_HPP_

#include "suii_msgs/srv/detail/item_pick__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_ItemPick_Request_onrobot
{
public:
  explicit Init_ItemPick_Request_onrobot(::suii_msgs::srv::ItemPick_Request & msg)
  : msg_(msg)
  {}
  ::suii_msgs::srv::ItemPick_Request onrobot(::suii_msgs::srv::ItemPick_Request::_onrobot_type arg)
  {
    msg_.onrobot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::ItemPick_Request msg_;
};

class Init_ItemPick_Request_itemid
{
public:
  Init_ItemPick_Request_itemid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItemPick_Request_onrobot itemid(::suii_msgs::srv::ItemPick_Request::_itemid_type arg)
  {
    msg_.itemid = std::move(arg);
    return Init_ItemPick_Request_onrobot(msg_);
  }

private:
  ::suii_msgs::srv::ItemPick_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::ItemPick_Request>()
{
  return suii_msgs::srv::builder::Init_ItemPick_Request_itemid();
}

}  // namespace suii_msgs


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_ItemPick_Response_error
{
public:
  explicit Init_ItemPick_Response_error(::suii_msgs::srv::ItemPick_Response & msg)
  : msg_(msg)
  {}
  ::suii_msgs::srv::ItemPick_Response error(::suii_msgs::srv::ItemPick_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::ItemPick_Response msg_;
};

class Init_ItemPick_Response_sucess
{
public:
  Init_ItemPick_Response_sucess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItemPick_Response_error sucess(::suii_msgs::srv::ItemPick_Response::_sucess_type arg)
  {
    msg_.sucess = std::move(arg);
    return Init_ItemPick_Response_error(msg_);
  }

private:
  ::suii_msgs::srv::ItemPick_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::ItemPick_Response>()
{
  return suii_msgs::srv::builder::Init_ItemPick_Response_sucess();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__ITEM_PICK__BUILDER_HPP_
