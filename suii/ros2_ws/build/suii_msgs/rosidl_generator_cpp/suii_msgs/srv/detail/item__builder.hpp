// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:srv/Item.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__ITEM__BUILDER_HPP_
#define SUII_MSGS__SRV__DETAIL__ITEM__BUILDER_HPP_

#include "suii_msgs/srv/detail/item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_Item_Request_onrobot
{
public:
  explicit Init_Item_Request_onrobot(::suii_msgs::srv::Item_Request & msg)
  : msg_(msg)
  {}
  ::suii_msgs::srv::Item_Request onrobot(::suii_msgs::srv::Item_Request::_onrobot_type arg)
  {
    msg_.onrobot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::Item_Request msg_;
};

class Init_Item_Request_itemid
{
public:
  Init_Item_Request_itemid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Item_Request_onrobot itemid(::suii_msgs::srv::Item_Request::_itemid_type arg)
  {
    msg_.itemid = std::move(arg);
    return Init_Item_Request_onrobot(msg_);
  }

private:
  ::suii_msgs::srv::Item_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::Item_Request>()
{
  return suii_msgs::srv::builder::Init_Item_Request_itemid();
}

}  // namespace suii_msgs


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_Item_Response_link
{
public:
  explicit Init_Item_Response_link(::suii_msgs::srv::Item_Response & msg)
  : msg_(msg)
  {}
  ::suii_msgs::srv::Item_Response link(::suii_msgs::srv::Item_Response::_link_type arg)
  {
    msg_.link = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::Item_Response msg_;
};

class Init_Item_Response_id
{
public:
  explicit Init_Item_Response_id(::suii_msgs::srv::Item_Response & msg)
  : msg_(msg)
  {}
  Init_Item_Response_link id(::suii_msgs::srv::Item_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Item_Response_link(msg_);
  }

private:
  ::suii_msgs::srv::Item_Response msg_;
};

class Init_Item_Response_sucess
{
public:
  Init_Item_Response_sucess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Item_Response_id sucess(::suii_msgs::srv::Item_Response::_sucess_type arg)
  {
    msg_.sucess = std::move(arg);
    return Init_Item_Response_id(msg_);
  }

private:
  ::suii_msgs::srv::Item_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::Item_Response>()
{
  return suii_msgs::srv::builder::Init_Item_Response_sucess();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__ITEM__BUILDER_HPP_
