// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from suii_msgs:srv/NavigationRepose.idl
// generated code does not contain a copyright notice
#include "suii_msgs/srv/detail/navigation_repose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/srv/detail/navigation_repose__struct.h"
#include "suii_msgs/srv/detail/navigation_repose__functions.h"
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

#include "geometry_msgs/msg/detail/vector3__functions.h"  // target

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_suii_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_suii_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_suii_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _NavigationRepose_Request__ros_msg_type = suii_msgs__srv__NavigationRepose_Request;

static bool _NavigationRepose_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigationRepose_Request__ros_msg_type * ros_message = static_cast<const _NavigationRepose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->target, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NavigationRepose_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigationRepose_Request__ros_msg_type * ros_message = static_cast<_NavigationRepose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->target))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__NavigationRepose_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigationRepose_Request__ros_msg_type * ros_message = static_cast<const _NavigationRepose_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name target

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->target), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NavigationRepose_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__NavigationRepose_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__NavigationRepose_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: target
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NavigationRepose_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__NavigationRepose_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavigationRepose_Request = {
  "suii_msgs::srv",
  "NavigationRepose_Request",
  _NavigationRepose_Request__cdr_serialize,
  _NavigationRepose_Request__cdr_deserialize,
  _NavigationRepose_Request__get_serialized_size,
  _NavigationRepose_Request__max_serialized_size
};

static rosidl_message_type_support_t _NavigationRepose_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigationRepose_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, NavigationRepose_Request)() {
  return &_NavigationRepose_Request__type_support;
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
// #include "suii_msgs/srv/detail/navigation_repose__struct.h"
// already included above
// #include "suii_msgs/srv/detail/navigation_repose__functions.h"
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


using _NavigationRepose_Response__ros_msg_type = suii_msgs__srv__NavigationRepose_Response;

static bool _NavigationRepose_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigationRepose_Response__ros_msg_type * ros_message = static_cast<const _NavigationRepose_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

static bool _NavigationRepose_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigationRepose_Response__ros_msg_type * ros_message = static_cast<_NavigationRepose_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__NavigationRepose_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigationRepose_Response__ros_msg_type * ros_message = static_cast<const _NavigationRepose_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavigationRepose_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__NavigationRepose_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__NavigationRepose_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NavigationRepose_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__NavigationRepose_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavigationRepose_Response = {
  "suii_msgs::srv",
  "NavigationRepose_Response",
  _NavigationRepose_Response__cdr_serialize,
  _NavigationRepose_Response__cdr_deserialize,
  _NavigationRepose_Response__get_serialized_size,
  _NavigationRepose_Response__max_serialized_size
};

static rosidl_message_type_support_t _NavigationRepose_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigationRepose_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, NavigationRepose_Response)() {
  return &_NavigationRepose_Response__type_support;
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
#include "suii_msgs/srv/navigation_repose.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NavigationRepose__callbacks = {
  "suii_msgs::srv",
  "NavigationRepose",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, NavigationRepose_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, NavigationRepose_Response)(),
};

static rosidl_service_type_support_t NavigationRepose__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &NavigationRepose__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, NavigationRepose)() {
  return &NavigationRepose__handle;
}

#if defined(__cplusplus)
}
#endif
