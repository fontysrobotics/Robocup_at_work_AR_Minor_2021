// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from suii_communication_ros2:srv/TableGoal.idl
// generated code does not contain a copyright notice

#ifndef SUII_COMMUNICATION_ROS2__SRV__DETAIL__TABLE_GOAL__TRAITS_HPP_
#define SUII_COMMUNICATION_ROS2__SRV__DETAIL__TABLE_GOAL__TRAITS_HPP_

#include "suii_communication_ros2/srv/detail/table_goal__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_communication_ros2::srv::TableGoal_Request>()
{
  return "suii_communication_ros2::srv::TableGoal_Request";
}

template<>
inline const char * name<suii_communication_ros2::srv::TableGoal_Request>()
{
  return "suii_communication_ros2/srv/TableGoal_Request";
}

template<>
struct has_fixed_size<suii_communication_ros2::srv::TableGoal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<suii_communication_ros2::srv::TableGoal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<suii_communication_ros2::srv::TableGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_communication_ros2::srv::TableGoal_Response>()
{
  return "suii_communication_ros2::srv::TableGoal_Response";
}

template<>
inline const char * name<suii_communication_ros2::srv::TableGoal_Response>()
{
  return "suii_communication_ros2/srv/TableGoal_Response";
}

template<>
struct has_fixed_size<suii_communication_ros2::srv::TableGoal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<suii_communication_ros2::srv::TableGoal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<suii_communication_ros2::srv::TableGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_communication_ros2::srv::TableGoal>()
{
  return "suii_communication_ros2::srv::TableGoal";
}

template<>
inline const char * name<suii_communication_ros2::srv::TableGoal>()
{
  return "suii_communication_ros2/srv/TableGoal";
}

template<>
struct has_fixed_size<suii_communication_ros2::srv::TableGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<suii_communication_ros2::srv::TableGoal_Request>::value &&
    has_fixed_size<suii_communication_ros2::srv::TableGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<suii_communication_ros2::srv::TableGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<suii_communication_ros2::srv::TableGoal_Request>::value &&
    has_bounded_size<suii_communication_ros2::srv::TableGoal_Response>::value
  >
{
};

template<>
struct is_service<suii_communication_ros2::srv::TableGoal>
  : std::true_type
{
};

template<>
struct is_service_request<suii_communication_ros2::srv::TableGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<suii_communication_ros2::srv::TableGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SUII_COMMUNICATION_ROS2__SRV__DETAIL__TABLE_GOAL__TRAITS_HPP_
