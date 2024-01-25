# generated from rosidl_generator_py/resource/_idl.py.em
# with input from atwork_interfaces:msg/Task.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Task(type):
    """Metaclass of message 'Task'."""

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
                'atwork_interfaces.msg.Task')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task

            from atwork_interfaces.msg import RobotHeader
            if RobotHeader.__class__._TYPE_SUPPORT is None:
                RobotHeader.__class__.__import_type_support__()

            from atwork_interfaces.msg import Workstation
            if Workstation.__class__._TYPE_SUPPORT is None:
                Workstation.__class__.__import_type_support__()

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Task(metaclass=Metaclass_Task):
    """Message class 'Task'."""

    __slots__ = [
        '_header',
        '_execute_on',
        '_arena_start_state',
        '_arena_target_state',
        '_prep_time',
        '_exec_time',
        '_type',
        '_id',
        '_config',
        '_commit',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'execute_on': 'sequence<atwork_interfaces/RobotHeader>',
        'arena_start_state': 'sequence<atwork_interfaces/Workstation>',
        'arena_target_state': 'sequence<atwork_interfaces/Workstation>',
        'prep_time': 'builtin_interfaces/Duration',
        'exec_time': 'builtin_interfaces/Duration',
        'type': 'string',
        'id': 'uint64',
        'config': 'string',
        'commit': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['atwork_interfaces', 'msg'], 'RobotHeader')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['atwork_interfaces', 'msg'], 'Workstation')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['atwork_interfaces', 'msg'], 'Workstation')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.execute_on = kwargs.get('execute_on', [])
        self.arena_start_state = kwargs.get('arena_start_state', [])
        self.arena_target_state = kwargs.get('arena_target_state', [])
        from builtin_interfaces.msg import Duration
        self.prep_time = kwargs.get('prep_time', Duration())
        from builtin_interfaces.msg import Duration
        self.exec_time = kwargs.get('exec_time', Duration())
        self.type = kwargs.get('type', str())
        self.id = kwargs.get('id', int())
        self.config = kwargs.get('config', str())
        self.commit = kwargs.get('commit', int())

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
        if self.header != other.header:
            return False
        if self.execute_on != other.execute_on:
            return False
        if self.arena_start_state != other.arena_start_state:
            return False
        if self.arena_target_state != other.arena_target_state:
            return False
        if self.prep_time != other.prep_time:
            return False
        if self.exec_time != other.exec_time:
            return False
        if self.type != other.type:
            return False
        if self.id != other.id:
            return False
        if self.config != other.config:
            return False
        if self.commit != other.commit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def execute_on(self):
        """Message field 'execute_on'."""
        return self._execute_on

    @execute_on.setter
    def execute_on(self, value):
        if __debug__:
            from atwork_interfaces.msg import RobotHeader
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
                 all(isinstance(v, RobotHeader) for v in value) and
                 True), \
                "The 'execute_on' field must be a set or sequence and each value of type 'RobotHeader'"
        self._execute_on = value

    @builtins.property
    def arena_start_state(self):
        """Message field 'arena_start_state'."""
        return self._arena_start_state

    @arena_start_state.setter
    def arena_start_state(self, value):
        if __debug__:
            from atwork_interfaces.msg import Workstation
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
                 all(isinstance(v, Workstation) for v in value) and
                 True), \
                "The 'arena_start_state' field must be a set or sequence and each value of type 'Workstation'"
        self._arena_start_state = value

    @builtins.property
    def arena_target_state(self):
        """Message field 'arena_target_state'."""
        return self._arena_target_state

    @arena_target_state.setter
    def arena_target_state(self, value):
        if __debug__:
            from atwork_interfaces.msg import Workstation
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
                 all(isinstance(v, Workstation) for v in value) and
                 True), \
                "The 'arena_target_state' field must be a set or sequence and each value of type 'Workstation'"
        self._arena_target_state = value

    @builtins.property
    def prep_time(self):
        """Message field 'prep_time'."""
        return self._prep_time

    @prep_time.setter
    def prep_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'prep_time' field must be a sub message of type 'Duration'"
        self._prep_time = value

    @builtins.property
    def exec_time(self):
        """Message field 'exec_time'."""
        return self._exec_time

    @exec_time.setter
    def exec_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'exec_time' field must be a sub message of type 'Duration'"
        self._exec_time = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

    @builtins.property
    def config(self):
        """Message field 'config'."""
        return self._config

    @config.setter
    def config(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'config' field must be of type 'str'"
        self._config = value

    @builtins.property
    def commit(self):
        """Message field 'commit'."""
        return self._commit

    @commit.setter
    def commit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'commit' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'commit' field must be an unsigned integer in [0, 18446744073709551615]"
        self._commit = value
