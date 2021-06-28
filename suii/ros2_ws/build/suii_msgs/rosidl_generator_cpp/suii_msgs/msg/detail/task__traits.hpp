// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from suii_msgs:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__TASK__TRAITS_HPP_
#define SUII_MSGS__MSG__DETAIL__TASK__TRAITS_HPP_

#include "suii_msgs/msg/detail/task__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::msg::Task>()
{
  return "suii_msgs::msg::Task";
}

template<>
inline const char * name<suii_msgs::msg::Task>()
{
  return "suii_msgs/msg/Task";
}

template<>
struct has_fixed_size<suii_msgs::msg::Task>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<suii_msgs::msg::Task>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<suii_msgs::msg::Task>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SUII_MSGS__MSG__DETAIL__TASK__TRAITS_HPP_
