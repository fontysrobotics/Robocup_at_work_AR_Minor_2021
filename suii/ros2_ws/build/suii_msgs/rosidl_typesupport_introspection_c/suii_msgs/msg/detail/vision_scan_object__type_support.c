// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from suii_msgs:msg/VisionScanObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "suii_msgs/msg/detail/vision_scan_object__rosidl_typesupport_introspection_c.h"
#include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "suii_msgs/msg/detail/vision_scan_object__functions.h"
#include "suii_msgs/msg/detail/vision_scan_object__struct.h"


// Include directives for member types
// Member `link`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  suii_msgs__msg__VisionScanObject__init(message_memory);
}

void VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_fini_function(void * message_memory)
{
  suii_msgs__msg__VisionScanObject__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__VisionScanObject, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__VisionScanObject, link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__VisionScanObject, sure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_message_members = {
  "suii_msgs__msg",  // message namespace
  "VisionScanObject",  // message name
  3,  // number of fields
  sizeof(suii_msgs__msg__VisionScanObject),
  VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_message_member_array,  // message members
  VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_init_function,  // function to initialize message memory (memory has to be allocated)
  VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_message_type_support_handle = {
  0,
  &VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, msg, VisionScanObject)() {
  if (!VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_message_type_support_handle.typesupport_identifier) {
    VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VisionScanObject__rosidl_typesupport_introspection_c__VisionScanObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
