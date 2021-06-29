// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from suii_communication_ros2:srv/TableGoal.idl
// generated code does not contain a copyright notice
#include "suii_communication_ros2/srv/detail/table_goal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "suii_communication_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_communication_ros2/srv/detail/table_goal__struct.h"
#include "suii_communication_ros2/srv/detail/table_goal__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // table
#include "rosidl_runtime_c/string_functions.h"  // table

// forward declare type support functions


using _TableGoal_Request__ros_msg_type = suii_communication_ros2__srv__TableGoal_Request;

static bool _TableGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TableGoal_Request__ros_msg_type * ros_message = static_cast<const _TableGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: table
  {
    const rosidl_runtime_c__String * str = &ros_message->table;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _TableGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TableGoal_Request__ros_msg_type * ros_message = static_cast<_TableGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: table
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->table.data) {
      rosidl_runtime_c__String__init(&ros_message->table);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->table,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'table'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_communication_ros2
size_t get_serialized_size_suii_communication_ros2__srv__TableGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TableGoal_Request__ros_msg_type * ros_message = static_cast<const _TableGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name table
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->table.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TableGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_communication_ros2__srv__TableGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_communication_ros2
size_t max_serialized_size_suii_communication_ros2__srv__TableGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: table
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TableGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_communication_ros2__srv__TableGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TableGoal_Request = {
  "suii_communication_ros2::srv",
  "TableGoal_Request",
  _TableGoal_Request__cdr_serialize,
  _TableGoal_Request__cdr_deserialize,
  _TableGoal_Request__get_serialized_size,
  _TableGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _TableGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TableGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_communication_ros2, srv, TableGoal_Request)() {
  return &_TableGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "suii_communication_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "suii_communication_ros2/srv/detail/table_goal__struct.h"
// already included above
// #include "suii_communication_ros2/srv/detail/table_goal__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TableGoal_Response__ros_msg_type = suii_communication_ros2__srv__TableGoal_Response;

static bool _TableGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TableGoal_Response__ros_msg_type * ros_message = static_cast<const _TableGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: succes
  {
    cdr << (ros_message->succes ? true : false);
  }

  return true;
}

static bool _TableGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TableGoal_Response__ros_msg_type * ros_message = static_cast<_TableGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: succes
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->succes = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_communication_ros2
size_t get_serialized_size_suii_communication_ros2__srv__TableGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TableGoal_Response__ros_msg_type * ros_message = static_cast<const _TableGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name succes
  {
    size_t item_size = sizeof(ros_message->succes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TableGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_communication_ros2__srv__TableGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_communication_ros2
size_t max_serialized_size_suii_communication_ros2__srv__TableGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: succes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TableGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_communication_ros2__srv__TableGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TableGoal_Response = {
  "suii_communication_ros2::srv",
  "TableGoal_Response",
  _TableGoal_Response__cdr_serialize,
  _TableGoal_Response__cdr_deserialize,
  _TableGoal_Response__get_serialized_size,
  _TableGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _TableGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TableGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_communication_ros2, srv, TableGoal_Response)() {
  return &_TableGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "suii_communication_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_communication_ros2/srv/table_goal.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TableGoal__callbacks = {
  "suii_communication_ros2::srv",
  "TableGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_communication_ros2, srv, TableGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_communication_ros2, srv, TableGoal_Response)(),
};

static rosidl_service_type_support_t TableGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TableGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_communication_ros2, srv, TableGoal)() {
  return &TableGoal__handle;
}

#if defined(__cplusplus)
}
#endif
