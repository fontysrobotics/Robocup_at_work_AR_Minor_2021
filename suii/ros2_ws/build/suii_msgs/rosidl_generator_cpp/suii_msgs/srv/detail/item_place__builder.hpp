// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:srv/ItemPlace.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__ITEM_PLACE__BUILDER_HPP_
#define SUII_MSGS__SRV__DETAIL__ITEM_PLACE__BUILDER_HPP_

#include "suii_msgs/srv/detail/item_place__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_ItemPlace_Request_placeposition
{
public:
  explicit Init_ItemPlace_Request_placeposition(::suii_msgs::srv::ItemPlace_Request & msg)
  : msg_(msg)
  {}
  ::suii_msgs::srv::ItemPlace_Request placeposition(::suii_msgs::srv::ItemPlace_Request::_placeposition_type arg)
  {
    msg_.placeposition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::ItemPlace_Request msg_;
};

class Init_ItemPlace_Request_inhole
{
public:
  explicit Init_ItemPlace_Request_inhole(::suii_msgs::srv::ItemPlace_Request & msg)
  : msg_(msg)
  {}
  Init_ItemPlace_Request_placeposition inhole(::suii_msgs::srv::ItemPlace_Request::_inhole_type arg)
  {
    msg_.inhole = std::move(arg);
    return Init_ItemPlace_Request_placeposition(msg_);
  }

private:
  ::suii_msgs::srv::ItemPlace_Request msg_;
};

class Init_ItemPlace_Request_onrobot
{
public:
  explicit Init_ItemPlace_Request_onrobot(::suii_msgs::srv::ItemPlace_Request & msg)
  : msg_(msg)
  {}
  Init_ItemPlace_Request_inhole onrobot(::suii_msgs::srv::ItemPlace_Request::_onrobot_type arg)
  {
    msg_.onrobot = std::move(arg);
    return Init_ItemPlace_Request_inhole(msg_);
  }

private:
  ::suii_msgs::srv::ItemPlace_Request msg_;
};

class Init_ItemPlace_Request_itemid
{
public:
  Init_ItemPlace_Request_itemid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItemPlace_Request_onrobot itemid(::suii_msgs::srv::ItemPlace_Request::_itemid_type arg)
  {
    msg_.itemid = std::move(arg);
    return Init_ItemPlace_Request_onrobot(msg_);
  }

private:
  ::suii_msgs::srv::ItemPlace_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::ItemPlace_Request>()
{
  return suii_msgs::srv::builder::Init_ItemPlace_Request_itemid();
}

}  // namespace suii_msgs


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_ItemPlace_Response_error
{
public:
  explicit Init_ItemPlace_Response_error(::suii_msgs::srv::ItemPlace_Response & msg)
  : msg_(msg)
  {}
  ::suii_msgs::srv::ItemPlace_Response error(::suii_msgs::srv::ItemPlace_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::ItemPlace_Response msg_;
};

class Init_ItemPlace_Response_sucess
{
public:
  Init_ItemPlace_Response_sucess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItemPlace_Response_error sucess(::suii_msgs::srv::ItemPlace_Response::_sucess_type arg)
  {
    msg_.sucess = std::move(arg);
    return Init_ItemPlace_Response_error(msg_);
  }

private:
  ::suii_msgs::srv::ItemPlace_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::ItemPlace_Response>()
{
  return suii_msgs::srv::builder::Init_ItemPlace_Response_sucess();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__ITEM_PLACE__BUILDER_HPP_
