// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from suii_msgs:srv/UpdateItems.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "suii_msgs/srv/detail/update_items__struct.h"
#include "suii_msgs/srv/detail/update_items__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "suii_msgs/msg/detail/vision_scan_object__functions.h"
// end nested array functions include
bool suii_msgs__msg__vision_scan_object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * suii_msgs__msg__vision_scan_object__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool suii_msgs__srv__update_items__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("suii_msgs.srv._update_items.UpdateItems_Request", full_classname_dest, 47) == 0);
  }
  suii_msgs__srv__UpdateItems_Request * ros_message = _ros_message;
  {  // items
    PyObject * field = PyObject_GetAttrString(_pymsg, "items");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'items'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!suii_msgs__msg__VisionScanObject__Sequence__init(&(ros_message->items), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create suii_msgs__msg__VisionScanObject__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    suii_msgs__msg__VisionScanObject * dest = ros_message->items.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!suii_msgs__msg__vision_scan_object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * suii_msgs__srv__update_items__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UpdateItems_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("suii_msgs.srv._update_items");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UpdateItems_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  suii_msgs__srv__UpdateItems_Request * ros_message = (suii_msgs__srv__UpdateItems_Request *)raw_ros_message;
  {  // items
    PyObject * field = NULL;
    size_t size = ros_message->items.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    suii_msgs__msg__VisionScanObject * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->items.data[i]);
      PyObject * pyitem = suii_msgs__msg__vision_scan_object__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "items", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "suii_msgs/srv/detail/update_items__struct.h"
// already included above
// #include "suii_msgs/srv/detail/update_items__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool suii_msgs__srv__update_items__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("suii_msgs.srv._update_items.UpdateItems_Response", full_classname_dest, 48) == 0);
  }
  suii_msgs__srv__UpdateItems_Response * ros_message = _ros_message;
  {  // succes
    PyObject * field = PyObject_GetAttrString(_pymsg, "succes");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->succes = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * suii_msgs__srv__update_items__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UpdateItems_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("suii_msgs.srv._update_items");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UpdateItems_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  suii_msgs__srv__UpdateItems_Response * ros_message = (suii_msgs__srv__UpdateItems_Response *)raw_ros_message;
  {  // succes
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->succes ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "succes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
