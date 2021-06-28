// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from suii_msgs:msg/SuiiTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "suii_msgs/msg/detail/suii_task__rosidl_typesupport_introspection_c.h"
#include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "suii_msgs/msg/detail/suii_task__functions.h"
#include "suii_msgs/msg/detail/suii_task__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  suii_msgs__msg__SuiiTask__init(message_memory);
}

void SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_fini_function(void * message_memory)
{
  suii_msgs__msg__SuiiTask__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_message_member_array[8] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__SuiiTask, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__SuiiTask, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__SuiiTask, destination),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__SuiiTask, object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "container",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__SuiiTask, container),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__SuiiTask, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__SuiiTask, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__SuiiTask, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_message_members = {
  "suii_msgs__msg",  // message namespace
  "SuiiTask",  // message name
  8,  // number of fields
  sizeof(suii_msgs__msg__SuiiTask),
  SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_message_member_array,  // message members
  SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_init_function,  // function to initialize message memory (memory has to be allocated)
  SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_message_type_support_handle = {
  0,
  &SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, msg, SuiiTask)() {
  if (!SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_message_type_support_handle.typesupport_identifier) {
    SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SuiiTask__rosidl_typesupport_introspection_c__SuiiTask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
