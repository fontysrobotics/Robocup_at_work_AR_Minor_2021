// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from suii_msgs:srv/VisionScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "suii_msgs/srv/detail/vision_scan__rosidl_typesupport_introspection_c.h"
#include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "suii_msgs/srv/detail/vision_scan__functions.h"
#include "suii_msgs/srv/detail/vision_scan__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  suii_msgs__srv__VisionScan_Request__init(message_memory);
}

void VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_fini_function(void * message_memory)
{
  suii_msgs__srv__VisionScan_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__srv__VisionScan_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_message_members = {
  "suii_msgs__srv",  // message namespace
  "VisionScan_Request",  // message name
  1,  // number of fields
  sizeof(suii_msgs__srv__VisionScan_Request),
  VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_message_member_array,  // message members
  VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_message_type_support_handle = {
  0,
  &VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, VisionScan_Request)() {
  if (!VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_message_type_support_handle.typesupport_identifier) {
    VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VisionScan_Request__rosidl_typesupport_introspection_c__VisionScan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "suii_msgs/srv/detail/vision_scan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "suii_msgs/srv/detail/vision_scan__functions.h"
// already included above
// #include "suii_msgs/srv/detail/vision_scan__struct.h"


// Include directives for member types
// Member `result`
#include "suii_msgs/msg/vision_scan_object.h"
// Member `result`
#include "suii_msgs/msg/detail/vision_scan_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  suii_msgs__srv__VisionScan_Response__init(message_memory);
}

void VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_fini_function(void * message_memory)
{
  suii_msgs__srv__VisionScan_Response__fini(message_memory);
}

size_t VisionScan_Response__rosidl_typesupport_introspection_c__size_function__VisionScanObject__result(
  const void * untyped_member)
{
  const suii_msgs__msg__VisionScanObject__Sequence * member =
    (const suii_msgs__msg__VisionScanObject__Sequence *)(untyped_member);
  return member->size;
}

const void * VisionScan_Response__rosidl_typesupport_introspection_c__get_const_function__VisionScanObject__result(
  const void * untyped_member, size_t index)
{
  const suii_msgs__msg__VisionScanObject__Sequence * member =
    (const suii_msgs__msg__VisionScanObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VisionScan_Response__rosidl_typesupport_introspection_c__get_function__VisionScanObject__result(
  void * untyped_member, size_t index)
{
  suii_msgs__msg__VisionScanObject__Sequence * member =
    (suii_msgs__msg__VisionScanObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VisionScan_Response__rosidl_typesupport_introspection_c__resize_function__VisionScanObject__result(
  void * untyped_member, size_t size)
{
  suii_msgs__msg__VisionScanObject__Sequence * member =
    (suii_msgs__msg__VisionScanObject__Sequence *)(untyped_member);
  suii_msgs__msg__VisionScanObject__Sequence__fini(member);
  return suii_msgs__msg__VisionScanObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__srv__VisionScan_Response, result),  // bytes offset in struct
    NULL,  // default value
    VisionScan_Response__rosidl_typesupport_introspection_c__size_function__VisionScanObject__result,  // size() function pointer
    VisionScan_Response__rosidl_typesupport_introspection_c__get_const_function__VisionScanObject__result,  // get_const(index) function pointer
    VisionScan_Response__rosidl_typesupport_introspection_c__get_function__VisionScanObject__result,  // get(index) function pointer
    VisionScan_Response__rosidl_typesupport_introspection_c__resize_function__VisionScanObject__result  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_message_members = {
  "suii_msgs__srv",  // message namespace
  "VisionScan_Response",  // message name
  1,  // number of fields
  sizeof(suii_msgs__srv__VisionScan_Response),
  VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_message_member_array,  // message members
  VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_message_type_support_handle = {
  0,
  &VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, VisionScan_Response)() {
  VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, msg, VisionScanObject)();
  if (!VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_message_type_support_handle.typesupport_identifier) {
    VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VisionScan_Response__rosidl_typesupport_introspection_c__VisionScan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "suii_msgs/srv/detail/vision_scan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers suii_msgs__srv__detail__vision_scan__rosidl_typesupport_introspection_c__VisionScan_service_members = {
  "suii_msgs__srv",  // service namespace
  "VisionScan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // suii_msgs__srv__detail__vision_scan__rosidl_typesupport_introspection_c__VisionScan_Request_message_type_support_handle,
  NULL  // response message
  // suii_msgs__srv__detail__vision_scan__rosidl_typesupport_introspection_c__VisionScan_Response_message_type_support_handle
};

static rosidl_service_type_support_t suii_msgs__srv__detail__vision_scan__rosidl_typesupport_introspection_c__VisionScan_service_type_support_handle = {
  0,
  &suii_msgs__srv__detail__vision_scan__rosidl_typesupport_introspection_c__VisionScan_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, VisionScan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, VisionScan_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, VisionScan)() {
  if (!suii_msgs__srv__detail__vision_scan__rosidl_typesupport_introspection_c__VisionScan_service_type_support_handle.typesupport_identifier) {
    suii_msgs__srv__detail__vision_scan__rosidl_typesupport_introspection_c__VisionScan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)suii_msgs__srv__detail__vision_scan__rosidl_typesupport_introspection_c__VisionScan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, VisionScan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, VisionScan_Response)()->data;
  }

  return &suii_msgs__srv__detail__vision_scan__rosidl_typesupport_introspection_c__VisionScan_service_type_support_handle;
}
