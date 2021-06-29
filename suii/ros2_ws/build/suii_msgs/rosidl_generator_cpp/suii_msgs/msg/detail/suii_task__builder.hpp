// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:msg/SuiiTask.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__SUII_TASK__BUILDER_HPP_
#define SUII_MSGS__MSG__DETAIL__SUII_TASK__BUILDER_HPP_

#include "suii_msgs/msg/detail/suii_task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace msg
{

namespace builder
{

class Init_SuiiTask_orientation
{
public:
  explicit Init_SuiiTask_orientation(::suii_msgs::msg::SuiiTask & msg)
  : msg_(msg)
  {}
  ::suii_msgs::msg::SuiiTask orientation(::suii_msgs::msg::SuiiTask::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::msg::SuiiTask msg_;
};

class Init_SuiiTask_error_code
{
public:
  explicit Init_SuiiTask_error_code(::suii_msgs::msg::SuiiTask & msg)
  : msg_(msg)
  {}
  Init_SuiiTask_orientation error_code(::suii_msgs::msg::SuiiTask::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_SuiiTask_orientation(msg_);
  }

private:
  ::suii_msgs::msg::SuiiTask msg_;
};

class Init_SuiiTask_status
{
public:
  explicit Init_SuiiTask_status(::suii_msgs::msg::SuiiTask & msg)
  : msg_(msg)
  {}
  Init_SuiiTask_error_code status(::suii_msgs::msg::SuiiTask::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SuiiTask_error_code(msg_);
  }

private:
  ::suii_msgs::msg::SuiiTask msg_;
};

class Init_SuiiTask_container
{
public:
  explicit Init_SuiiTask_container(::suii_msgs::msg::SuiiTask & msg)
  : msg_(msg)
  {}
  Init_SuiiTask_status container(::suii_msgs::msg::SuiiTask::_container_type arg)
  {
    msg_.container = std::move(arg);
    return Init_SuiiTask_status(msg_);
  }

private:
  ::suii_msgs::msg::SuiiTask msg_;
};

class Init_SuiiTask_object
{
public:
  explicit Init_SuiiTask_object(::suii_msgs::msg::SuiiTask & msg)
  : msg_(msg)
  {}
  Init_SuiiTask_container object(::suii_msgs::msg::SuiiTask::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_SuiiTask_container(msg_);
  }

private:
  ::suii_msgs::msg::SuiiTask msg_;
};

class Init_SuiiTask_destination
{
public:
  explicit Init_SuiiTask_destination(::suii_msgs::msg::SuiiTask & msg)
  : msg_(msg)
  {}
  Init_SuiiTask_object destination(::suii_msgs::msg::SuiiTask::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_SuiiTask_object(msg_);
  }

private:
  ::suii_msgs::msg::SuiiTask msg_;
};

class Init_SuiiTask_source
{
public:
  explicit Init_SuiiTask_source(::suii_msgs::msg::SuiiTask & msg)
  : msg_(msg)
  {}
  Init_SuiiTask_destination source(::suii_msgs::msg::SuiiTask::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_SuiiTask_destination(msg_);
  }

private:
  ::suii_msgs::msg::SuiiTask msg_;
};

class Init_SuiiTask_action
{
public:
  Init_SuiiTask_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SuiiTask_source action(::suii_msgs::msg::SuiiTask::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_SuiiTask_source(msg_);
  }

private:
  ::suii_msgs::msg::SuiiTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::msg::SuiiTask>()
{
  return suii_msgs::msg::builder::Init_SuiiTask_action();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__MSG__DETAIL__SUII_TASK__BUILDER_HPP_
