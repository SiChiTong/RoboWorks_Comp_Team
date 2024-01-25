# generated from rosidl_generator_py/resource/_idl.py.em
# with input from atwork_interfaces:srv/GenerateTask.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenerateTask_Request(type):
    """Metaclass of message 'GenerateTask_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('atwork_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'atwork_interfaces.srv.GenerateTask_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_task__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_task__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_task__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_task__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_task__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateTask_Request(metaclass=Metaclass_GenerateTask_Request):
    """Message class 'GenerateTask_Request'."""

    __slots__ = [
        '_task_name',
    ]

    _fields_and_field_types = {
        'task_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_name = kwargs.get('task_name', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.task_name != other.task_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def task_name(self):
        """Message field 'task_name'."""
        return self._task_name

    @task_name.setter
    def task_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_name' field must be of type 'str'"
        self._task_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GenerateTask_Response(type):
    """Metaclass of message 'GenerateTask_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('atwork_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'atwork_interfaces.srv.GenerateTask_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_task__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_task__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_task__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_task__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_task__response

            from atwork_interfaces.msg import Task
            if Task.__class__._TYPE_SUPPORT is None:
                Task.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateTask_Response(metaclass=Metaclass_GenerateTask_Response):
    """Message class 'GenerateTask_Response'."""

    __slots__ = [
        '_task',
        '_error',
    ]

    _fields_and_field_types = {
        'task': 'atwork_interfaces/Task',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['atwork_interfaces', 'msg'], 'Task'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from atwork_interfaces.msg import Task
        self.task = kwargs.get('task', Task())
        self.error = kwargs.get('error', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.task != other.task:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def task(self):
        """Message field 'task'."""
        return self._task

    @task.setter
    def task(self, value):
        if __debug__:
            from atwork_interfaces.msg import Task
            assert \
                isinstance(value, Task), \
                "The 'task' field must be a sub message of type 'Task'"
        self._task = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error' field must be of type 'str'"
        self._error = value


class Metaclass_GenerateTask(type):
    """Metaclass of service 'GenerateTask'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('atwork_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'atwork_interfaces.srv.GenerateTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__generate_task

            from atwork_interfaces.srv import _generate_task
            if _generate_task.Metaclass_GenerateTask_Request._TYPE_SUPPORT is None:
                _generate_task.Metaclass_GenerateTask_Request.__import_type_support__()
            if _generate_task.Metaclass_GenerateTask_Response._TYPE_SUPPORT is None:
                _generate_task.Metaclass_GenerateTask_Response.__import_type_support__()


class GenerateTask(metaclass=Metaclass_GenerateTask):
    from atwork_interfaces.srv._generate_task import GenerateTask_Request as Request
    from atwork_interfaces.srv._generate_task import GenerateTask_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
