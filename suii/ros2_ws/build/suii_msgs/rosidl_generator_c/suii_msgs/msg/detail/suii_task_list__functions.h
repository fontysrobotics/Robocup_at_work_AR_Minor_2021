// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from suii_msgs:msg/SuiiTaskList.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__FUNCTIONS_H_
#define SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "suii_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "suii_msgs/msg/detail/suii_task_list__struct.h"

/// Initialize msg/SuiiTaskList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * suii_msgs__msg__SuiiTaskList
 * )) before or use
 * suii_msgs__msg__SuiiTaskList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
bool
suii_msgs__msg__SuiiTaskList__init(suii_msgs__msg__SuiiTaskList * msg);

/// Finalize msg/SuiiTaskList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
void
suii_msgs__msg__SuiiTaskList__fini(suii_msgs__msg__SuiiTaskList * msg);

/// Create msg/SuiiTaskList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * suii_msgs__msg__SuiiTaskList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
suii_msgs__msg__SuiiTaskList *
suii_msgs__msg__SuiiTaskList__create();

/// Destroy msg/SuiiTaskList message.
/**
 * It calls
 * suii_msgs__msg__SuiiTaskList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
void
suii_msgs__msg__SuiiTaskList__destroy(suii_msgs__msg__SuiiTaskList * msg);


/// Initialize array of msg/SuiiTaskList messages.
/**
 * It allocates the memory for the number of elements and calls
 * suii_msgs__msg__SuiiTaskList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
bool
suii_msgs__msg__SuiiTaskList__Sequence__init(suii_msgs__msg__SuiiTaskList__Sequence * array, size_t size);

/// Finalize array of msg/SuiiTaskList messages.
/**
 * It calls
 * suii_msgs__msg__SuiiTaskList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
void
suii_msgs__msg__SuiiTaskList__Sequence__fini(suii_msgs__msg__SuiiTaskList__Sequence * array);

/// Create array of msg/SuiiTaskList messages.
/**
 * It allocates the memory for the array and calls
 * suii_msgs__msg__SuiiTaskList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
suii_msgs__msg__SuiiTaskList__Sequence *
suii_msgs__msg__SuiiTaskList__Sequence__create(size_t size);

/// Destroy array of msg/SuiiTaskList messages.
/**
 * It calls
 * suii_msgs__msg__SuiiTaskList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_suii_msgs
void
suii_msgs__msg__SuiiTaskList__Sequence__destroy(suii_msgs__msg__SuiiTaskList__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__FUNCTIONS_H_
