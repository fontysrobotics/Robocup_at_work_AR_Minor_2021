// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from suii_msgs:srv/ItemDrive.idl
// generated code does not contain a copyright notice
#include "suii_msgs/srv/detail/item_drive__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/srv/detail/item_drive__struct.h"
#include "suii_msgs/srv/detail/item_drive__functions.h"
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


using _ItemDrive_Request__ros_msg_type = suii_msgs__srv__ItemDrive_Request;

static bool _ItemDrive_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ItemDrive_Request__ros_msg_type * ros_message = static_cast<const _ItemDrive_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _ItemDrive_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ItemDrive_Request__ros_msg_type * ros_message = static_cast<_ItemDrive_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__ItemDrive_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ItemDrive_Request__ros_msg_type * ros_message = static_cast<const _ItemDrive_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ItemDrive_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__ItemDrive_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__ItemDrive_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ItemDrive_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__ItemDrive_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ItemDrive_Request = {
  "suii_msgs::srv",
  "ItemDrive_Request",
  _ItemDrive_Request__cdr_serialize,
  _ItemDrive_Request__cdr_deserialize,
  _ItemDrive_Request__get_serialized_size,
  _ItemDrive_Request__max_serialized_size
};

static rosidl_message_type_support_t _ItemDrive_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ItemDrive_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ItemDrive_Request)() {
  return &_ItemDrive_Request__type_support;
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
// #include "suii_msgs/srv/detail/item_drive__struct.h"
// already included above
// #include "suii_msgs/srv/detail/item_drive__functions.h"
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


using _ItemDrive_Response__ros_msg_type = suii_msgs__srv__ItemDrive_Response;

static bool _ItemDrive_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ItemDrive_Response__ros_msg_type * ros_message = static_cast<const _ItemDrive_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sucess
  {
    cdr << (ros_message->sucess ? true : false);
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  return true;
}

static bool _ItemDrive_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ItemDrive_Response__ros_msg_type * ros_message = static_cast<_ItemDrive_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sucess
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sucess = tmp ? true : false;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__ItemDrive_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ItemDrive_Response__ros_msg_type * ros_message = static_cast<const _ItemDrive_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sucess
  {
    size_t item_size = sizeof(ros_message->sucess);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ItemDrive_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__ItemDrive_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__ItemDrive_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sucess
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ItemDrive_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__ItemDrive_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ItemDrive_Response = {
  "suii_msgs::srv",
  "ItemDrive_Response",
  _ItemDrive_Response__cdr_serialize,
  _ItemDrive_Response__cdr_deserialize,
  _ItemDrive_Response__get_serialized_size,
  _ItemDrive_Response__max_serialized_size
};

static rosidl_message_type_support_t _ItemDrive_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ItemDrive_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ItemDrive_Response)() {
  return &_ItemDrive_Response__type_support;
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
#include "suii_msgs/srv/item_drive.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ItemDrive__callbacks = {
  "suii_msgs::srv",
  "ItemDrive",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ItemDrive_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ItemDrive_Response)(),
};

static rosidl_service_type_support_t ItemDrive__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ItemDrive__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ItemDrive)() {
  return &ItemDrive__handle;
}

#if defined(__cplusplus)
}
#endif
