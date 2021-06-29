// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from suii_msgs:srv/ManipulationPose.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__MANIPULATION_POSE__TRAITS_HPP_
#define SUII_MSGS__SRV__DETAIL__MANIPULATION_POSE__TRAITS_HPP_

#include "suii_msgs/srv/detail/manipulation_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::ManipulationPose_Request>()
{
  return "suii_msgs::srv::ManipulationPose_Request";
}

template<>
inline const char * name<suii_msgs::srv::ManipulationPose_Request>()
{
  return "suii_msgs/srv/ManipulationPose_Request";
}

template<>
struct has_fixed_size<suii_msgs::srv::ManipulationPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<suii_msgs::srv::ManipulationPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<suii_msgs::srv::ManipulationPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::ManipulationPose_Response>()
{
  return "suii_msgs::srv::ManipulationPose_Response";
}

template<>
inline const char * name<suii_msgs::srv::ManipulationPose_Response>()
{
  return "suii_msgs/srv/ManipulationPose_Response";
}

template<>
struct has_fixed_size<suii_msgs::srv::ManipulationPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<suii_msgs::srv::ManipulationPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<suii_msgs::srv::ManipulationPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::ManipulationPose>()
{
  return "suii_msgs::srv::ManipulationPose";
}

template<>
inline const char * name<suii_msgs::srv::ManipulationPose>()
{
  return "suii_msgs/srv/ManipulationPose";
}

template<>
struct has_fixed_size<suii_msgs::srv::ManipulationPose>
  : std::integral_constant<
    bool,
    has_fixed_size<suii_msgs::srv::ManipulationPose_Request>::value &&
    has_fixed_size<suii_msgs::srv::ManipulationPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<suii_msgs::srv::ManipulationPose>
  : std::integral_constant<
    bool,
    has_bounded_size<suii_msgs::srv::ManipulationPose_Request>::value &&
    has_bounded_size<suii_msgs::srv::ManipulationPose_Response>::value
  >
{
};

template<>
struct is_service<suii_msgs::srv::ManipulationPose>
  : std::true_type
{
};

template<>
struct is_service_request<suii_msgs::srv::ManipulationPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<suii_msgs::srv::ManipulationPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SUII_MSGS__SRV__DETAIL__MANIPULATION_POSE__TRAITS_HPP_
