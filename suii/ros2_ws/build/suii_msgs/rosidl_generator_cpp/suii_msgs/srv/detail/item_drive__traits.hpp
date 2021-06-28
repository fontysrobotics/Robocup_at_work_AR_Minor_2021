// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from suii_msgs:srv/ItemDrive.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__ITEM_DRIVE__TRAITS_HPP_
#define SUII_MSGS__SRV__DETAIL__ITEM_DRIVE__TRAITS_HPP_

#include "suii_msgs/srv/detail/item_drive__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::ItemDrive_Request>()
{
  return "suii_msgs::srv::ItemDrive_Request";
}

template<>
inline const char * name<suii_msgs::srv::ItemDrive_Request>()
{
  return "suii_msgs/srv/ItemDrive_Request";
}

template<>
struct has_fixed_size<suii_msgs::srv::ItemDrive_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<suii_msgs::srv::ItemDrive_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<suii_msgs::srv::ItemDrive_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::ItemDrive_Response>()
{
  return "suii_msgs::srv::ItemDrive_Response";
}

template<>
inline const char * name<suii_msgs::srv::ItemDrive_Response>()
{
  return "suii_msgs/srv/ItemDrive_Response";
}

template<>
struct has_fixed_size<suii_msgs::srv::ItemDrive_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<suii_msgs::srv::ItemDrive_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<suii_msgs::srv::ItemDrive_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::ItemDrive>()
{
  return "suii_msgs::srv::ItemDrive";
}

template<>
inline const char * name<suii_msgs::srv::ItemDrive>()
{
  return "suii_msgs/srv/ItemDrive";
}

template<>
struct has_fixed_size<suii_msgs::srv::ItemDrive>
  : std::integral_constant<
    bool,
    has_fixed_size<suii_msgs::srv::ItemDrive_Request>::value &&
    has_fixed_size<suii_msgs::srv::ItemDrive_Response>::value
  >
{
};

template<>
struct has_bounded_size<suii_msgs::srv::ItemDrive>
  : std::integral_constant<
    bool,
    has_bounded_size<suii_msgs::srv::ItemDrive_Request>::value &&
    has_bounded_size<suii_msgs::srv::ItemDrive_Response>::value
  >
{
};

template<>
struct is_service<suii_msgs::srv::ItemDrive>
  : std::true_type
{
};

template<>
struct is_service_request<suii_msgs::srv::ItemDrive_Request>
  : std::true_type
{
};

template<>
struct is_service_response<suii_msgs::srv::ItemDrive_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SUII_MSGS__SRV__DETAIL__ITEM_DRIVE__TRAITS_HPP_
