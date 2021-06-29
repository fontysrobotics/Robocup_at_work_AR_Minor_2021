// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:srv/ItemPlace.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__ITEM_PLACE__STRUCT_H_
#define SUII_MSGS__SRV__DETAIL__ITEM_PLACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ItemPlace in the package suii_msgs.
typedef struct suii_msgs__srv__ItemPlace_Request
{
  uint16_t itemid;
  bool onrobot;
  bool inhole;
  uint16_t placeposition;
} suii_msgs__srv__ItemPlace_Request;

// Struct for a sequence of suii_msgs__srv__ItemPlace_Request.
typedef struct suii_msgs__srv__ItemPlace_Request__Sequence
{
  suii_msgs__srv__ItemPlace_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__ItemPlace_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ItemPlace in the package suii_msgs.
typedef struct suii_msgs__srv__ItemPlace_Response
{
  bool sucess;
  uint8_t error;
} suii_msgs__srv__ItemPlace_Response;

// Struct for a sequence of suii_msgs__srv__ItemPlace_Response.
typedef struct suii_msgs__srv__ItemPlace_Response__Sequence
{
  suii_msgs__srv__ItemPlace_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__ItemPlace_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__SRV__DETAIL__ITEM_PLACE__STRUCT_H_
