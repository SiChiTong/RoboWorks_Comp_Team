# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roboworks_brain_interfaces:srv/TaskOpt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskOpt_Request(type):
    """Metaclass of message 'TaskOpt_Request'."""

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
            module = import_type_support('roboworks_brain_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roboworks_brain_interfaces.srv.TaskOpt_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__task_opt__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__task_opt__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__task_opt__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__task_opt__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__task_opt__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskOpt_Request(metaclass=Metaclass_TaskOpt_Request):
    """Message class 'TaskOpt_Request'."""

    __slots__ = [
        '_task_list',
        '_game_state',
    ]

    _fields_and_field_types = {
        'task_list': 'string',
        'game_state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_list = kwargs.get('task_list', str())
        self.game_state = kwargs.get('game_state', str())

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
        if self.task_list != other.task_list:
            return False
        if self.game_state != other.game_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def task_list(self):
        """Message field 'task_list'."""
        return self._task_list

    @task_list.setter
    def task_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_list' field must be of type 'str'"
        self._task_list = value

    @builtins.property
    def game_state(self):
        """Message field 'game_state'."""
        return self._game_state

    @game_state.setter
    def game_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'game_state' field must be of type 'str'"
        self._game_state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TaskOpt_Response(type):
    """Metaclass of message 'TaskOpt_Response'."""

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
            module = import_type_support('roboworks_brain_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roboworks_brain_interfaces.srv.TaskOpt_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__task_opt__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__task_opt__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__task_opt__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__task_opt__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__task_opt__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskOpt_Response(metaclass=Metaclass_TaskOpt_Response):
    """Message class 'TaskOpt_Response'."""

    __slots__ = [
        '_masterlist',
    ]

    _fields_and_field_types = {
        'masterlist': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.masterlist = kwargs.get('masterlist', [])

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
        if self.masterlist != other.masterlist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def masterlist(self):
        """Message field 'masterlist'."""
        return self._masterlist

    @masterlist.setter
    def masterlist(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'masterlist' field must be a set or sequence and each value of type 'str'"
        self._masterlist = value


class Metaclass_TaskOpt(type):
    """Metaclass of service 'TaskOpt'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('roboworks_brain_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roboworks_brain_interfaces.srv.TaskOpt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__task_opt

            from roboworks_brain_interfaces.srv import _task_opt
            if _task_opt.Metaclass_TaskOpt_Request._TYPE_SUPPORT is None:
                _task_opt.Metaclass_TaskOpt_Request.__import_type_support__()
            if _task_opt.Metaclass_TaskOpt_Response._TYPE_SUPPORT is None:
                _task_opt.Metaclass_TaskOpt_Response.__import_type_support__()


class TaskOpt(metaclass=Metaclass_TaskOpt):
    from roboworks_brain_interfaces.srv._task_opt import TaskOpt_Request as Request
    from roboworks_brain_interfaces.srv._task_opt import TaskOpt_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
