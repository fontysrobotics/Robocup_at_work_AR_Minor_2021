// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from suii_msgs:srv/NavigationGoal.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__NAVIGATION_GOAL__TRAITS_HPP_
#define SUII_MSGS__SRV__DETAIL__NAVIGATION_GOAL__TRAITS_HPP_

#include "suii_msgs/srv/detail/navigation_goal__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::NavigationGoal_Request>()
{
  return "suii_msgs::srv::NavigationGoal_Request";
}

template<>
inline const char * name<suii_msgs::srv::NavigationGoal_Request>()
{
  return "suii_msgs/srv/NavigationGoal_Request";
}

template<>
struct has_fixed_size<suii_msgs::srv::NavigationGoal_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<suii_msgs::srv::NavigationGoal_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<suii_msgs::srv::NavigationGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::NavigationGoal_Response>()
{
  return "suii_msgs::srv::NavigationGoal_Response";
}

template<>
inline const char * name<suii_msgs::srv::NavigationGoal_Response>()
{
  return "suii_msgs/srv/NavigationGoal_Response";
}

template<>
struct has_fixed_size<suii_msgs::srv::NavigationGoal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<suii_msgs::srv::NavigationGoal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<suii_msgs::srv::NavigationGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::NavigationGoal>()
{
  return "suii_msgs::srv::NavigationGoal";
}

template<>
inline const char * name<suii_msgs::srv::NavigationGoal>()
{
  return "suii_msgs/srv/NavigationGoal";
}

template<>
struct has_fixed_size<suii_msgs::srv::NavigationGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<suii_msgs::srv::NavigationGoal_Request>::value &&
    has_fixed_size<suii_msgs::srv::NavigationGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<suii_msgs::srv::NavigationGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<suii_msgs::srv::NavigationGoal_Request>::value &&
    has_bounded_size<suii_msgs::srv::NavigationGoal_Response>::value
  >
{
};

template<>
struct is_service<suii_msgs::srv::NavigationGoal>
  : std::true_type
{
};

template<>
struct is_service_request<suii_msgs::srv::NavigationGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<suii_msgs::srv::NavigationGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SUII_MSGS__SRV__DETAIL__NAVIGATION_GOAL__TRAITS_HPP_
