// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roboworks_brain_interfaces:srv/Navigation.idl
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
#include "roboworks_brain_interfaces/srv/detail/navigation__struct.h"
#include "roboworks_brain_interfaces/srv/detail/navigation__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool roboworks_brain_interfaces__srv__navigation__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("roboworks_brain_interfaces.srv._navigation.Navigation_Request", full_classname_dest, 61) == 0);
  }
  roboworks_brain_interfaces__srv__Navigation_Request * ros_message = _ros_message;
  {  // goal_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_point");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->goal_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roboworks_brain_interfaces__srv__navigation__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Navigation_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roboworks_brain_interfaces.srv._navigation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Navigation_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roboworks_brain_interfaces__srv__Navigation_Request * ros_message = (roboworks_brain_interfaces__srv__Navigation_Request *)raw_ros_message;
  {  // goal_point
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->goal_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_point", field);
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
// #include "roboworks_brain_interfaces/srv/detail/navigation__struct.h"
// already included above
// #include "roboworks_brain_interfaces/srv/detail/navigation__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roboworks_brain_interfaces__srv__navigation__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("roboworks_brain_interfaces.srv._navigation.Navigation_Response", full_classname_dest, 62) == 0);
  }
  roboworks_brain_interfaces__srv__Navigation_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->success = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // instruction
    PyObject * field = PyObject_GetAttrString(_pymsg, "instruction");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->instruction, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roboworks_brain_interfaces__srv__navigation__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Navigation_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roboworks_brain_interfaces.srv._navigation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Navigation_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roboworks_brain_interfaces__srv__Navigation_Response * ros_message = (roboworks_brain_interfaces__srv__Navigation_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->success);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // instruction
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->instruction.data,
      strlen(ros_message->instruction.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "instruction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
