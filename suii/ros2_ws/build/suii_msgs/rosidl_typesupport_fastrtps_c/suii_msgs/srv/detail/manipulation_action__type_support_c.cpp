// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from suii_msgs:srv/ManipulationAction.idl
// generated code does not contain a copyright notice
#include "suii_msgs/srv/detail/manipulation_action__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/srv/detail/manipulation_action__struct.h"
#include "suii_msgs/srv/detail/manipulation_action__functions.h"
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

#include "rosidl_runtime_c/string.h"  // link
#include "rosidl_runtime_c/string_functions.h"  // link

// forward declare type support functions


using _ManipulationAction_Request__ros_msg_type = suii_msgs__srv__ManipulationAction_Request;

static bool _ManipulationAction_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ManipulationAction_Request__ros_msg_type * ros_message = static_cast<const _ManipulationAction_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: link
  {
    const rosidl_runtime_c__String * str = &ros_message->link;
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

static bool _ManipulationAction_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ManipulationAction_Request__ros_msg_type * ros_message = static_cast<_ManipulationAction_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->link.data) {
      rosidl_runtime_c__String__init(&ros_message->link);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'link'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__ManipulationAction_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ManipulationAction_Request__ros_msg_type * ros_message = static_cast<const _ManipulationAction_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->link.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ManipulationAction_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__ManipulationAction_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__ManipulationAction_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: link
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

static size_t _ManipulationAction_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__ManipulationAction_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ManipulationAction_Request = {
  "suii_msgs::srv",
  "ManipulationAction_Request",
  _ManipulationAction_Request__cdr_serialize,
  _ManipulationAction_Request__cdr_deserialize,
  _ManipulationAction_Request__get_serialized_size,
  _ManipulationAction_Request__max_serialized_size
};

static rosidl_message_type_support_t _ManipulationAction_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ManipulationAction_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ManipulationAction_Request)() {
  return &_ManipulationAction_Request__type_support;
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
// #include "suii_msgs/srv/detail/manipulation_action__struct.h"
// already included above
// #include "suii_msgs/srv/detail/manipulation_action__functions.h"
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


using _ManipulationAction_Response__ros_msg_type = suii_msgs__srv__ManipulationAction_Response;

static bool _ManipulationAction_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ManipulationAction_Response__ros_msg_type * ros_message = static_cast<const _ManipulationAction_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

static bool _ManipulationAction_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ManipulationAction_Response__ros_msg_type * ros_message = static_cast<_ManipulationAction_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__ManipulationAction_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ManipulationAction_Response__ros_msg_type * ros_message = static_cast<const _ManipulationAction_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ManipulationAction_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__ManipulationAction_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__ManipulationAction_Response(
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

static size_t _ManipulationAction_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__ManipulationAction_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ManipulationAction_Response = {
  "suii_msgs::srv",
  "ManipulationAction_Response",
  _ManipulationAction_Response__cdr_serialize,
  _ManipulationAction_Response__cdr_deserialize,
  _ManipulationAction_Response__get_serialized_size,
  _ManipulationAction_Response__max_serialized_size
};

static rosidl_message_type_support_t _ManipulationAction_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ManipulationAction_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ManipulationAction_Response)() {
  return &_ManipulationAction_Response__type_support;
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
#include "suii_msgs/srv/manipulation_action.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ManipulationAction__callbacks = {
  "suii_msgs::srv",
  "ManipulationAction",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ManipulationAction_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ManipulationAction_Response)(),
};

static rosidl_service_type_support_t ManipulationAction__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ManipulationAction__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ManipulationAction)() {
  return &ManipulationAction__handle;
}

#if defined(__cplusplus)
}
#endif
