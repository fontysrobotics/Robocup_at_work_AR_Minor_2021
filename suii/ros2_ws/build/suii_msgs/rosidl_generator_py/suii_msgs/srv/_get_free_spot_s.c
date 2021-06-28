// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from suii_msgs:srv/GetFreeSpot.idl
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
#include "suii_msgs/srv/detail/get_free_spot__struct.h"
#include "suii_msgs/srv/detail/get_free_spot__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool suii_msgs__srv__get_free_spot__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("suii_msgs.srv._get_free_spot.GetFreeSpot_Request", full_classname_dest, 48) == 0);
  }
  suii_msgs__srv__GetFreeSpot_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * suii_msgs__srv__get_free_spot__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetFreeSpot_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("suii_msgs.srv._get_free_spot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetFreeSpot_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

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
// #include "suii_msgs/srv/detail/get_free_spot__struct.h"
// already included above
// #include "suii_msgs/srv/detail/get_free_spot__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool suii_msgs__srv__get_free_spot__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("suii_msgs.srv._get_free_spot.GetFreeSpot_Response", full_classname_dest, 49) == 0);
  }
  suii_msgs__srv__GetFreeSpot_Response * ros_message = _ros_message;
  {  // sucess
    PyObject * field = PyObject_GetAttrString(_pymsg, "sucess");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sucess = (Py_True == field);
    Py_DECREF(field);
  }
  {  // spot
    PyObject * field = PyObject_GetAttrString(_pymsg, "spot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spot = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * suii_msgs__srv__get_free_spot__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetFreeSpot_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("suii_msgs.srv._get_free_spot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetFreeSpot_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  suii_msgs__srv__GetFreeSpot_Response * ros_message = (suii_msgs__srv__GetFreeSpot_Response *)raw_ros_message;
  {  // sucess
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sucess ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sucess", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spot
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}