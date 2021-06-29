// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from suii_msgs:msg/SuiiTaskList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "suii_msgs/msg/detail/suii_task_list__rosidl_typesupport_introspection_c.h"
#include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "suii_msgs/msg/detail/suii_task_list__functions.h"
#include "suii_msgs/msg/detail/suii_task_list__struct.h"


// Include directives for member types
// Member `tasks`
#include "suii_msgs/msg/suii_task.h"
// Member `tasks`
#include "suii_msgs/msg/detail/suii_task__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  suii_msgs__msg__SuiiTaskList__init(message_memory);
}

void SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_fini_function(void * message_memory)
{
  suii_msgs__msg__SuiiTaskList__fini(message_memory);
}

size_t SuiiTaskList__rosidl_typesupport_introspection_c__size_function__SuiiTask__tasks(
  const void * untyped_member)
{
  const suii_msgs__msg__SuiiTask__Sequence * member =
    (const suii_msgs__msg__SuiiTask__Sequence *)(untyped_member);
  return member->size;
}

const void * SuiiTaskList__rosidl_typesupport_introspection_c__get_const_function__SuiiTask__tasks(
  const void * untyped_member, size_t index)
{
  const suii_msgs__msg__SuiiTask__Sequence * member =
    (const suii_msgs__msg__SuiiTask__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SuiiTaskList__rosidl_typesupport_introspection_c__get_function__SuiiTask__tasks(
  void * untyped_member, size_t index)
{
  suii_msgs__msg__SuiiTask__Sequence * member =
    (suii_msgs__msg__SuiiTask__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SuiiTaskList__rosidl_typesupport_introspection_c__resize_function__SuiiTask__tasks(
  void * untyped_member, size_t size)
{
  suii_msgs__msg__SuiiTask__Sequence * member =
    (suii_msgs__msg__SuiiTask__Sequence *)(untyped_member);
  suii_msgs__msg__SuiiTask__Sequence__fini(member);
  return suii_msgs__msg__SuiiTask__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_message_member_array[2] = {
  {
    "tasks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__SuiiTaskList, tasks),  // bytes offset in struct
    NULL,  // default value
    SuiiTaskList__rosidl_typesupport_introspection_c__size_function__SuiiTask__tasks,  // size() function pointer
    SuiiTaskList__rosidl_typesupport_introspection_c__get_const_function__SuiiTask__tasks,  // get_const(index) function pointer
    SuiiTaskList__rosidl_typesupport_introspection_c__get_function__SuiiTask__tasks,  // get(index) function pointer
    SuiiTaskList__rosidl_typesupport_introspection_c__resize_function__SuiiTask__tasks  // resize(index) function pointer
  },
  {
    "error_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__msg__SuiiTaskList, error_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_message_members = {
  "suii_msgs__msg",  // message namespace
  "SuiiTaskList",  // message name
  2,  // number of fields
  sizeof(suii_msgs__msg__SuiiTaskList),
  SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_message_member_array,  // message members
  SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_init_function,  // function to initialize message memory (memory has to be allocated)
  SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_message_type_support_handle = {
  0,
  &SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, msg, SuiiTaskList)() {
  SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, msg, SuiiTask)();
  if (!SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_message_type_support_handle.typesupport_identifier) {
    SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SuiiTaskList__rosidl_typesupport_introspection_c__SuiiTaskList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
