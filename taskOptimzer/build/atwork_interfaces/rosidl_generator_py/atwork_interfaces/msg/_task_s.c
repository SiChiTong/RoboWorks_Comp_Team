// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from atwork_interfaces:msg/Task.idl
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
#include "atwork_interfaces/msg/detail/task__struct.h"
#include "atwork_interfaces/msg/detail/task__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "atwork_interfaces/msg/detail/robot_header__functions.h"
#include "atwork_interfaces/msg/detail/workstation__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool atwork_interfaces__msg__robot_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * atwork_interfaces__msg__robot_header__convert_to_py(void * raw_ros_message);
bool atwork_interfaces__msg__workstation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * atwork_interfaces__msg__workstation__convert_to_py(void * raw_ros_message);
bool atwork_interfaces__msg__workstation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * atwork_interfaces__msg__workstation__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__duration__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__duration__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__duration__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__duration__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool atwork_interfaces__msg__task__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("atwork_interfaces.msg._task.Task", full_classname_dest, 32) == 0);
  }
  atwork_interfaces__msg__Task * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // execute_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "execute_on");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'execute_on'");
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
    if (!atwork_interfaces__msg__RobotHeader__Sequence__init(&(ros_message->execute_on), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create atwork_interfaces__msg__RobotHeader__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    atwork_interfaces__msg__RobotHeader * dest = ros_message->execute_on.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!atwork_interfaces__msg__robot_header__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // arena_start_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "arena_start_state");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'arena_start_state'");
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
    if (!atwork_interfaces__msg__Workstation__Sequence__init(&(ros_message->arena_start_state), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create atwork_interfaces__msg__Workstation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    atwork_interfaces__msg__Workstation * dest = ros_message->arena_start_state.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!atwork_interfaces__msg__workstation__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // arena_target_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "arena_target_state");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'arena_target_state'");
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
    if (!atwork_interfaces__msg__Workstation__Sequence__init(&(ros_message->arena_target_state), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create atwork_interfaces__msg__Workstation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    atwork_interfaces__msg__Workstation * dest = ros_message->arena_target_state.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!atwork_interfaces__msg__workstation__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // prep_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "prep_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__duration__convert_from_py(field, &ros_message->prep_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // exec_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "exec_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__duration__convert_from_py(field, &ros_message->exec_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // config
    PyObject * field = PyObject_GetAttrString(_pymsg, "config");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->config, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // commit
    PyObject * field = PyObject_GetAttrString(_pymsg, "commit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->commit = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * atwork_interfaces__msg__task__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Task */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("atwork_interfaces.msg._task");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Task");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  atwork_interfaces__msg__Task * ros_message = (atwork_interfaces__msg__Task *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // execute_on
    PyObject * field = NULL;
    size_t size = ros_message->execute_on.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    atwork_interfaces__msg__RobotHeader * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->execute_on.data[i]);
      PyObject * pyitem = atwork_interfaces__msg__robot_header__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "execute_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arena_start_state
    PyObject * field = NULL;
    size_t size = ros_message->arena_start_state.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    atwork_interfaces__msg__Workstation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->arena_start_state.data[i]);
      PyObject * pyitem = atwork_interfaces__msg__workstation__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "arena_start_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arena_target_state
    PyObject * field = NULL;
    size_t size = ros_message->arena_target_state.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    atwork_interfaces__msg__Workstation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->arena_target_state.data[i]);
      PyObject * pyitem = atwork_interfaces__msg__workstation__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "arena_target_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prep_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__duration__convert_to_py(&ros_message->prep_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "prep_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exec_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__duration__convert_to_py(&ros_message->exec_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "exec_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->type.data,
      strlen(ros_message->type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // config
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->config.data,
      strlen(ros_message->config.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "config", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // commit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->commit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "commit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
