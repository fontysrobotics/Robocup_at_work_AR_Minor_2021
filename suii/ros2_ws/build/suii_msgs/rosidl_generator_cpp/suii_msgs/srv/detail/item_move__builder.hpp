// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:srv/ItemMove.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__ITEM_MOVE__BUILDER_HPP_
#define SUII_MSGS__SRV__DETAIL__ITEM_MOVE__BUILDER_HPP_

#include "suii_msgs/srv/detail/item_move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_ItemMove_Request_newlink
{
public:
  explicit Init_ItemMove_Request_newlink(::suii_msgs::srv::ItemMove_Request & msg)
  : msg_(msg)
  {}
  ::suii_msgs::srv::ItemMove_Request newlink(::suii_msgs::srv::ItemMove_Request::_newlink_type arg)
  {
    msg_.newlink = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::ItemMove_Request msg_;
};

class Init_ItemMove_Request_torobot
{
public:
  explicit Init_ItemMove_Request_torobot(::suii_msgs::srv::ItemMove_Request & msg)
  : msg_(msg)
  {}
  Init_ItemMove_Request_newlink torobot(::suii_msgs::srv::ItemMove_Request::_torobot_type arg)
  {
    msg_.torobot = std::move(arg);
    return Init_ItemMove_Request_newlink(msg_);
  }

private:
  ::suii_msgs::srv::ItemMove_Request msg_;
};

class Init_ItemMove_Request_itemid
{
public:
  Init_ItemMove_Request_itemid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItemMove_Request_torobot itemid(::suii_msgs::srv::ItemMove_Request::_itemid_type arg)
  {
    msg_.itemid = std::move(arg);
    return Init_ItemMove_Request_torobot(msg_);
  }

private:
  ::suii_msgs::srv::ItemMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::ItemMove_Request>()
{
  return suii_msgs::srv::builder::Init_ItemMove_Request_itemid();
}

}  // namespace suii_msgs


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_ItemMove_Response_sucess
{
public:
  Init_ItemMove_Response_sucess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::suii_msgs::srv::ItemMove_Response sucess(::suii_msgs::srv::ItemMove_Response::_sucess_type arg)
  {
    msg_.sucess = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::ItemMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::ItemMove_Response>()
{
  return suii_msgs::srv::builder::Init_ItemMove_Response_sucess();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__ITEM_MOVE__BUILDER_HPP_
