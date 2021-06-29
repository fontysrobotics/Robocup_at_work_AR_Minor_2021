// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:msg/VisionScanObject.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__BUILDER_HPP_
#define SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__BUILDER_HPP_

#include "suii_msgs/msg/detail/vision_scan_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace msg
{

namespace builder
{

class Init_VisionScanObject_sure
{
public:
  explicit Init_VisionScanObject_sure(::suii_msgs::msg::VisionScanObject & msg)
  : msg_(msg)
  {}
  ::suii_msgs::msg::VisionScanObject sure(::suii_msgs::msg::VisionScanObject::_sure_type arg)
  {
    msg_.sure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::msg::VisionScanObject msg_;
};

class Init_VisionScanObject_link
{
public:
  explicit Init_VisionScanObject_link(::suii_msgs::msg::VisionScanObject & msg)
  : msg_(msg)
  {}
  Init_VisionScanObject_sure link(::suii_msgs::msg::VisionScanObject::_link_type arg)
  {
    msg_.link = std::move(arg);
    return Init_VisionScanObject_sure(msg_);
  }

private:
  ::suii_msgs::msg::VisionScanObject msg_;
};

class Init_VisionScanObject_id
{
public:
  Init_VisionScanObject_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionScanObject_link id(::suii_msgs::msg::VisionScanObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_VisionScanObject_link(msg_);
  }

private:
  ::suii_msgs::msg::VisionScanObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::msg::VisionScanObject>()
{
  return suii_msgs::msg::builder::Init_VisionScanObject_id();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__BUILDER_HPP_
