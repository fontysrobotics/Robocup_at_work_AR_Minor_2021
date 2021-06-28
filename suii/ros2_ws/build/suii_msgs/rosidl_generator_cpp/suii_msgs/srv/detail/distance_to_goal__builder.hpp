// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:srv/DistanceToGoal.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__DISTANCE_TO_GOAL__BUILDER_HPP_
#define SUII_MSGS__SRV__DETAIL__DISTANCE_TO_GOAL__BUILDER_HPP_

#include "suii_msgs/srv/detail/distance_to_goal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_DistanceToGoal_Request_y
{
public:
  explicit Init_DistanceToGoal_Request_y(::suii_msgs::srv::DistanceToGoal_Request & msg)
  : msg_(msg)
  {}
  ::suii_msgs::srv::DistanceToGoal_Request y(::suii_msgs::srv::DistanceToGoal_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::DistanceToGoal_Request msg_;
};

class Init_DistanceToGoal_Request_x
{
public:
  Init_DistanceToGoal_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistanceToGoal_Request_y x(::suii_msgs::srv::DistanceToGoal_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DistanceToGoal_Request_y(msg_);
  }

private:
  ::suii_msgs::srv::DistanceToGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::DistanceToGoal_Request>()
{
  return suii_msgs::srv::builder::Init_DistanceToGoal_Request_x();
}

}  // namespace suii_msgs


namespace suii_msgs
{

namespace srv
{

namespace builder
{

class Init_DistanceToGoal_Response_distance
{
public:
  Init_DistanceToGoal_Response_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::suii_msgs::srv::DistanceToGoal_Response distance(::suii_msgs::srv::DistanceToGoal_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::srv::DistanceToGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::srv::DistanceToGoal_Response>()
{
  return suii_msgs::srv::builder::Init_DistanceToGoal_Response_distance();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__DISTANCE_TO_GOAL__BUILDER_HPP_
