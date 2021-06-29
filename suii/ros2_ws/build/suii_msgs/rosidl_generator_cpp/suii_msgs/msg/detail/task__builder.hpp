// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__TASK__BUILDER_HPP_
#define SUII_MSGS__MSG__DETAIL__TASK__BUILDER_HPP_

#include "suii_msgs/msg/detail/task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace msg
{

namespace builder
{

class Init_Task_pose
{
public:
  explicit Init_Task_pose(::suii_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  ::suii_msgs::msg::Task pose(::suii_msgs::msg::Task::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::msg::Task msg_;
};

class Init_Task_id
{
public:
  Init_Task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_pose id(::suii_msgs::msg::Task::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Task_pose(msg_);
  }

private:
  ::suii_msgs::msg::Task msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::msg::Task>()
{
  return suii_msgs::msg::builder::Init_Task_id();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__MSG__DETAIL__TASK__BUILDER_HPP_
