// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from suii_msgs:srv/DistanceToGoal.idl
// generated code does not contain a copyright notice
#include "suii_msgs/srv/detail/distance_to_goal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/srv/detail/distance_to_goal__struct.h"
#include "suii_msgs/srv/detail/distance_to_goal__functions.h"
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


// forward declare type support functions


using _DistanceToGoal_Request__ros_msg_type = suii_msgs__srv__DistanceToGoal_Request;

static bool _DistanceToGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DistanceToGoal_Request__ros_msg_type * ros_message = static_cast<const _DistanceToGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  return true;
}

static bool _DistanceToGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DistanceToGoal_Request__ros_msg_type * ros_message = static_cast<_DistanceToGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__DistanceToGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DistanceToGoal_Request__ros_msg_type * ros_message = static_cast<const _DistanceToGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DistanceToGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__DistanceToGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__DistanceToGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DistanceToGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__DistanceToGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DistanceToGoal_Request = {
  "suii_msgs::srv",
  "DistanceToGoal_Request",
  _DistanceToGoal_Request__cdr_serialize,
  _DistanceToGoal_Request__cdr_deserialize,
  _DistanceToGoal_Request__get_serialized_size,
  _DistanceToGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _DistanceToGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DistanceToGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, DistanceToGoal_Request)() {
  return &_DistanceToGoal_Request__type_support;
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
// #include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "suii_msgs/srv/detail/distance_to_goal__struct.h"
// already included above
// #include "suii_msgs/srv/detail/distance_to_goal__functions.h"
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


using _DistanceToGoal_Response__ros_msg_type = suii_msgs__srv__DistanceToGoal_Response;

static bool _DistanceToGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DistanceToGoal_Response__ros_msg_type * ros_message = static_cast<const _DistanceToGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  return true;
}

static bool _DistanceToGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DistanceToGoal_Response__ros_msg_type * ros_message = static_cast<_DistanceToGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__DistanceToGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DistanceToGoal_Response__ros_msg_type * ros_message = static_cast<const _DistanceToGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DistanceToGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__DistanceToGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__DistanceToGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DistanceToGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__DistanceToGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DistanceToGoal_Response = {
  "suii_msgs::srv",
  "DistanceToGoal_Response",
  _DistanceToGoal_Response__cdr_serialize,
  _DistanceToGoal_Response__cdr_deserialize,
  _DistanceToGoal_Response__get_serialized_size,
  _DistanceToGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _DistanceToGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DistanceToGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, DistanceToGoal_Response)() {
  return &_DistanceToGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/srv/distance_to_goal.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DistanceToGoal__callbacks = {
  "suii_msgs::srv",
  "DistanceToGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, DistanceToGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, DistanceToGoal_Response)(),
};

static rosidl_service_type_support_t DistanceToGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DistanceToGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, DistanceToGoal)() {
  return &DistanceToGoal__handle;
}

#if defined(__cplusplus)
}
#endif
