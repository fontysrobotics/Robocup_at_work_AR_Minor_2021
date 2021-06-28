// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from suii_msgs:msg/SuiiTaskList.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__TRAITS_HPP_
#define SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__TRAITS_HPP_

#include "suii_msgs/msg/detail/suii_task_list__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::msg::SuiiTaskList>()
{
  return "suii_msgs::msg::SuiiTaskList";
}

template<>
inline const char * name<suii_msgs::msg::SuiiTaskList>()
{
  return "suii_msgs/msg/SuiiTaskList";
}

template<>
struct has_fixed_size<suii_msgs::msg::SuiiTaskList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<suii_msgs::msg::SuiiTaskList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<suii_msgs::msg::SuiiTaskList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__TRAITS_HPP_
