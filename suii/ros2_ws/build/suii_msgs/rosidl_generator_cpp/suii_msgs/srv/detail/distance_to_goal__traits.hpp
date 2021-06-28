// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from suii_msgs:srv/DistanceToGoal.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__DISTANCE_TO_GOAL__TRAITS_HPP_
#define SUII_MSGS__SRV__DETAIL__DISTANCE_TO_GOAL__TRAITS_HPP_

#include "suii_msgs/srv/detail/distance_to_goal__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::DistanceToGoal_Request>()
{
  return "suii_msgs::srv::DistanceToGoal_Request";
}

template<>
inline const char * name<suii_msgs::srv::DistanceToGoal_Request>()
{
  return "suii_msgs/srv/DistanceToGoal_Request";
}

template<>
struct has_fixed_size<suii_msgs::srv::DistanceToGoal_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<suii_msgs::srv::DistanceToGoal_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<suii_msgs::srv::DistanceToGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::DistanceToGoal_Response>()
{
  return "suii_msgs::srv::DistanceToGoal_Response";
}

template<>
inline const char * name<suii_msgs::srv::DistanceToGoal_Response>()
{
  return "suii_msgs/srv/DistanceToGoal_Response";
}

template<>
struct has_fixed_size<suii_msgs::srv::DistanceToGoal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<suii_msgs::srv::DistanceToGoal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<suii_msgs::srv::DistanceToGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::DistanceToGoal>()
{
  return "suii_msgs::srv::DistanceToGoal";
}

template<>
inline const char * name<suii_msgs::srv::DistanceToGoal>()
{
  return "suii_msgs/srv/DistanceToGoal";
}

template<>
struct has_fixed_size<suii_msgs::srv::DistanceToGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<suii_msgs::srv::DistanceToGoal_Request>::value &&
    has_fixed_size<suii_msgs::srv::DistanceToGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<suii_msgs::srv::DistanceToGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<suii_msgs::srv::DistanceToGoal_Request>::value &&
    has_bounded_size<suii_msgs::srv::DistanceToGoal_Response>::value
  >
{
};

template<>
struct is_service<suii_msgs::srv::DistanceToGoal>
  : std::true_type
{
};

template<>
struct is_service_request<suii_msgs::srv::DistanceToGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<suii_msgs::srv::DistanceToGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SUII_MSGS__SRV__DETAIL__DISTANCE_TO_GOAL__TRAITS_HPP_
