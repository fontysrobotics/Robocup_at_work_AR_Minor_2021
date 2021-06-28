// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from suii_msgs:msg/VisionScanObject.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "suii_msgs/msg/detail/vision_scan_object__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace suii_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VisionScanObject_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) suii_msgs::msg::VisionScanObject(_init);
}

void VisionScanObject_fini_function(void * message_memory)
{
  auto typed_message = static_cast<suii_msgs::msg::VisionScanObject *>(message_memory);
  typed_message->~VisionScanObject();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VisionScanObject_message_member_array[3] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs::msg::VisionScanObject, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs::msg::VisionScanObject, link),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sure",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs::msg::VisionScanObject, sure),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VisionScanObject_message_members = {
  "suii_msgs::msg",  // message namespace
  "VisionScanObject",  // message name
  3,  // number of fields
  sizeof(suii_msgs::msg::VisionScanObject),
  VisionScanObject_message_member_array,  // message members
  VisionScanObject_init_function,  // function to initialize message memory (memory has to be allocated)
  VisionScanObject_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VisionScanObject_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VisionScanObject_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace suii_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<suii_msgs::msg::VisionScanObject>()
{
  return &::suii_msgs::msg::rosidl_typesupport_introspection_cpp::VisionScanObject_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, suii_msgs, msg, VisionScanObject)() {
  return &::suii_msgs::msg::rosidl_typesupport_introspection_cpp::VisionScanObject_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
