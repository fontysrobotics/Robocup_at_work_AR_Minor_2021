// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from suii_msgs:msg/VisionScanObject.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__FUNCTIONS_H_
#define SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "suii_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "suii_msgs/msg/detail/vision_scan_object__struct.h"

/// Initialize msg/VisionScanObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * suii_msgs__msg__VisionScanObject
 * )) before or use
 * suii_msgs__msg__VisionScanObject__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
bool
suii_msgs__msg__VisionScanObject__init(suii_msgs__msg__VisionScanObject * msg);

/// Finalize msg/VisionScanObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
void
suii_msgs__msg__VisionScanObject__fini(suii_msgs__msg__VisionScanObject * msg);

/// Create msg/VisionScanObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * suii_msgs__msg__VisionScanObject__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
suii_msgs__msg__VisionScanObject *
suii_msgs__msg__VisionScanObject__create();

/// Destroy msg/VisionScanObject message.
/**
 * It calls
 * suii_msgs__msg__VisionScanObject__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
void
suii_msgs__msg__VisionScanObject__destroy(suii_msgs__msg__VisionScanObject * msg);


/// Initialize array of msg/VisionScanObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * suii_msgs__msg__VisionScanObject__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
bool
suii_msgs__msg__VisionScanObject__Sequence__init(suii_msgs__msg__VisionScanObject__Sequence * array, size_t size);

/// Finalize array of msg/VisionScanObject messages.
/**
 * It calls
 * suii_msgs__msg__VisionScanObject__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
void
suii_msgs__msg__VisionScanObject__Sequence__fini(suii_msgs__msg__VisionScanObject__Sequence * array);

/// Create array of msg/VisionScanObject messages.
/**
 * It allocates the memory for the array and calls
 * suii_msgs__msg__VisionScanObject__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
suii_msgs__msg__VisionScanObject__Sequence *
suii_msgs__msg__VisionScanObject__Sequence__create(size_t size);

/// Destroy array of msg/VisionScanObject messages.
/**
 * It calls
 * suii_msgs__msg__VisionScanObject__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
void
suii_msgs__msg__VisionScanObject__Sequence__destroy(suii_msgs__msg__VisionScanObject__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__FUNCTIONS_H_
