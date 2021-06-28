// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:srv/VisionScan.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__VISION_SCAN__BUILDER_HPP_
#define SUII_MSGS__SRV__DETAIL__VISION_SCAN__BUILDER_HPP_

#include "suii_msgs/srv/detail/vision_scan__struct.hpp"
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
auto build<::suii_msgs::srv::VisionScan_Request>()
{
  return ::suii_msgs::srv::VisionScan_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace suii_msgs


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_VisionScan_Response_result
{
public:
  Init_VisionScan_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::suii_msgs::srv::VisionScan_Response result(::suii_msgs::srv::VisionScan_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::VisionScan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::VisionScan_Response>()
{
  return suii_msgs::srv::builder::Init_VisionScan_Response_result();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__VISION_SCAN__BUILDER_HPP_
