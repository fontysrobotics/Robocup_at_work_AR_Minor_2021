// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from suii_msgs:srv/UpdateItems.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "suii_msgs/srv/detail/update_items__rosidl_typesupport_introspection_c.h"
#include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "suii_msgs/srv/detail/update_items__functions.h"
#include "suii_msgs/srv/detail/update_items__struct.h"


// Include directives for member types
// Member `items`
#include "suii_msgs/msg/vision_scan_object.h"
// Member `items`
#include "suii_msgs/msg/detail/vision_scan_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  suii_msgs__srv__UpdateItems_Request__init(message_memory);
}

void UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_fini_function(void * message_memory)
{
  suii_msgs__srv__UpdateItems_Request__fini(message_memory);
}

size_t UpdateItems_Request__rosidl_typesupport_introspection_c__size_function__VisionScanObject__items(
  const void * untyped_member)
{
  const suii_msgs__msg__VisionScanObject__Sequence * member =
    (const suii_msgs__msg__VisionScanObject__Sequence *)(untyped_member);
  return member->size;
}

const void * UpdateItems_Request__rosidl_typesupport_introspection_c__get_const_function__VisionScanObject__items(
  const void * untyped_member, size_t index)
{
  const suii_msgs__msg__VisionScanObject__Sequence * member =
    (const suii_msgs__msg__VisionScanObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * UpdateItems_Request__rosidl_typesupport_introspection_c__get_function__VisionScanObject__items(
  void * untyped_member, size_t index)
{
  suii_msgs__msg__VisionScanObject__Sequence * member =
    (suii_msgs__msg__VisionScanObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool UpdateItems_Request__rosidl_typesupport_introspection_c__resize_function__VisionScanObject__items(
  void * untyped_member, size_t size)
{
  suii_msgs__msg__VisionScanObject__Sequence * member =
    (suii_msgs__msg__VisionScanObject__Sequence *)(untyped_member);
  suii_msgs__msg__VisionScanObject__Sequence__fini(member);
  return suii_msgs__msg__VisionScanObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_message_member_array[1] = {
  {
    "items",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__srv__UpdateItems_Request, items),  // bytes offset in struct
    NULL,  // default value
    UpdateItems_Request__rosidl_typesupport_introspection_c__size_function__VisionScanObject__items,  // size() function pointer
    UpdateItems_Request__rosidl_typesupport_introspection_c__get_const_function__VisionScanObject__items,  // get_const(index) function pointer
    UpdateItems_Request__rosidl_typesupport_introspection_c__get_function__VisionScanObject__items,  // get(index) function pointer
    UpdateItems_Request__rosidl_typesupport_introspection_c__resize_function__VisionScanObject__items  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_message_members = {
  "suii_msgs__srv",  // message namespace
  "UpdateItems_Request",  // message name
  1,  // number of fields
  sizeof(suii_msgs__srv__UpdateItems_Request),
  UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_message_member_array,  // message members
  UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_message_type_support_handle = {
  0,
  &UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, UpdateItems_Request)() {
  UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, msg, VisionScanObject)();
  if (!UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_message_type_support_handle.typesupport_identifier) {
    UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UpdateItems_Request__rosidl_typesupport_introspection_c__UpdateItems_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "suii_msgs/srv/detail/update_items__rosidl_typesupport_introspection_c.h"
// already included above
// #include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "suii_msgs/srv/detail/update_items__functions.h"
// already included above
// #include "suii_msgs/srv/detail/update_items__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  suii_msgs__srv__UpdateItems_Response__init(message_memory);
}

void UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_fini_function(void * message_memory)
{
  suii_msgs__srv__UpdateItems_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_message_member_array[1] = {
  {
    "succes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__srv__UpdateItems_Response, succes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_message_members = {
  "suii_msgs__srv",  // message namespace
  "UpdateItems_Response",  // message name
  1,  // number of fields
  sizeof(suii_msgs__srv__UpdateItems_Response),
  UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_message_member_array,  // message members
  UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_message_type_support_handle = {
  0,
  &UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, UpdateItems_Response)() {
  if (!UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_message_type_support_handle.typesupport_identifier) {
    UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UpdateItems_Response__rosidl_typesupport_introspection_c__UpdateItems_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "suii_msgs/srv/detail/update_items__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers suii_msgs__srv__detail__update_items__rosidl_typesupport_introspection_c__UpdateItems_service_members = {
  "suii_msgs__srv",  // service namespace
  "UpdateItems",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // suii_msgs__srv__detail__update_items__rosidl_typesupport_introspection_c__UpdateItems_Request_message_type_support_handle,
  NULL  // response message
  // suii_msgs__srv__detail__update_items__rosidl_typesupport_introspection_c__UpdateItems_Response_message_type_support_handle
};

static rosidl_service_type_support_t suii_msgs__srv__detail__update_items__rosidl_typesupport_introspection_c__UpdateItems_service_type_support_handle = {
  0,
  &suii_msgs__srv__detail__update_items__rosidl_typesupport_introspection_c__UpdateItems_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, UpdateItems_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, UpdateItems_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, UpdateItems)() {
  if (!suii_msgs__srv__detail__update_items__rosidl_typesupport_introspection_c__UpdateItems_service_type_support_handle.typesupport_identifier) {
    suii_msgs__srv__detail__update_items__rosidl_typesupport_introspection_c__UpdateItems_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)suii_msgs__srv__detail__update_items__rosidl_typesupport_introspection_c__UpdateItems_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, UpdateItems_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, UpdateItems_Response)()->data;
  }

  return &suii_msgs__srv__detail__update_items__rosidl_typesupport_introspection_c__UpdateItems_service_type_support_handle;
}
