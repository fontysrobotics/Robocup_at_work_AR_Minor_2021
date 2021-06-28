// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from suii_msgs:srv/ItemPlace.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__ITEM_PLACE__TRAITS_HPP_
#define SUII_MSGS__SRV__DETAIL__ITEM_PLACE__TRAITS_HPP_

#include "suii_msgs/srv/detail/item_place__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::ItemPlace_Request>()
{
  return "suii_msgs::srv::ItemPlace_Request";
}

template<>
inline const char * name<suii_msgs::srv::ItemPlace_Request>()
{
  return "suii_msgs/srv/ItemPlace_Request";
}

template<>
struct has_fixed_size<suii_msgs::srv::ItemPlace_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<suii_msgs::srv::ItemPlace_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<suii_msgs::srv::ItemPlace_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::ItemPlace_Response>()
{
  return "suii_msgs::srv::ItemPlace_Response";
}

template<>
inline const char * name<suii_msgs::srv::ItemPlace_Response>()
{
  return "suii_msgs/srv/ItemPlace_Response";
}

template<>
struct has_fixed_size<suii_msgs::srv::ItemPlace_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<suii_msgs::srv::ItemPlace_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<suii_msgs::srv::ItemPlace_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<suii_msgs::srv::ItemPlace>()
{
  return "suii_msgs::srv::ItemPlace";
}

template<>
inline const char * name<suii_msgs::srv::ItemPlace>()
{
  return "suii_msgs/srv/ItemPlace";
}

template<>
struct has_fixed_size<suii_msgs::srv::ItemPlace>
  : std::integral_constant<
    bool,
    has_fixed_size<suii_msgs::srv::ItemPlace_Request>::value &&
    has_fixed_size<suii_msgs::srv::ItemPlace_Response>::value
  >
{
};

template<>
struct has_bounded_size<suii_msgs::srv::ItemPlace>
  : std::integral_constant<
    bool,
    has_bounded_size<suii_msgs::srv::ItemPlace_Request>::value &&
    has_bounded_size<suii_msgs::srv::ItemPlace_Response>::value
  >
{
};

template<>
struct is_service<suii_msgs::srv::ItemPlace>
  : std::true_type
{
};

template<>
struct is_service_request<suii_msgs::srv::ItemPlace_Request>
  : std::true_type
{
};

template<>
struct is_service_response<suii_msgs::srv::ItemPlace_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SUII_MSGS__SRV__DETAIL__ITEM_PLACE__TRAITS_HPP_
