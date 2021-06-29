// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_msgs:msg/SuiiTaskList.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__BUILDER_HPP_
#define SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__BUILDER_HPP_

#include "suii_msgs/msg/detail/suii_task_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_msgs
{

namespace msg
{

namespace builder
{

class Init_SuiiTaskList_error_index
{
public:
  explicit Init_SuiiTaskList_error_index(::suii_msgs::msg::SuiiTaskList & msg)
  : msg_(msg)
  {}
  ::suii_msgs::msg::SuiiTaskList error_index(::suii_msgs::msg::SuiiTaskList::_error_index_type arg)
  {
    msg_.error_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_msgs::msg::SuiiTaskList msg_;
};

class Init_SuiiTaskList_tasks
{
public:
  Init_SuiiTaskList_tasks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SuiiTaskList_error_index tasks(::suii_msgs::msg::SuiiTaskList::_tasks_type arg)
  {
    msg_.tasks = std::move(arg);
    return Init_SuiiTaskList_error_index(msg_);
  }

private:
  ::suii_msgs::msg::SuiiTaskList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_msgs::msg::SuiiTaskList>()
{
  return suii_msgs::msg::builder::Init_SuiiTaskList_tasks();
}

}  // namespace suii_msgs

#endif  // SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__BUILDER_HPP_
