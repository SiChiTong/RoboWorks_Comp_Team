# generated from rosidl_generator_py/resource/_idl.py.em
# with input from atwork_interfaces:msg/Object.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object(type):
    """Metaclass of message 'Object'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EMPTY': 0,
        'ATWORK_START': 11,
        'F20_20_B': 11,
        'F20_20_G': 12,
        'S40_40_B': 13,
        'S40_40_G': 14,
        'M20_100': 15,
        'M20': 16,
        'M30': 17,
        'R20': 18,
        'ATWORK_END': 18,
        'ADVANCED_START': 20,
        'AXIS2': 20,
        'BEARING2': 21,
        'HOUSING': 22,
        'MOTOR2': 23,
        'SPACER': 24,
        'SCREWDRIVER': 25,
        'WRENCH': 26,
        'DRILL': 27,
        'ALLENKEY': 28,
        'ADVANCED_END': 28,
        'ROCKIN_START': 30,
        'BEARING_BOX': 31,
        'BEARING': 32,
        'AXIS': 33,
        'DISTANCE_TUBE': 34,
        'MOTOR': 35,
        'ROCKIN_END': 35,
        'CONTAINER_START': 40,
        'CONTAINER_RED': 40,
        'CONTAINER_BLUE': 41,
        'CONTAINER_END': 41,
        'CAVITY_START': 50,
        'F20_20_H': 50,
        'F20_20_V': 51,
        'F20_20_F': 52,
        'S40_40_H': 53,
        'S40_40_V': 54,
        'S40_40_F': 55,
        'M20_H': 56,
        'M20_V': 57,
        'M20_F': 58,
        'M20_100_H': 59,
        'M20_100_V': 60,
        'M20_100_F': 61,
        'M30_H': 62,
        'M30_V': 63,
        'M30_F': 64,
        'R20_H': 65,
        'R20_V': 66,
        'R20_F': 67,
        'CAVITY_END': 67,
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
                'atwork_interfaces.msg.Object')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EMPTY': cls.__constants['EMPTY'],
            'ATWORK_START': cls.__constants['ATWORK_START'],
            'F20_20_B': cls.__constants['F20_20_B'],
            'F20_20_G': cls.__constants['F20_20_G'],
            'S40_40_B': cls.__constants['S40_40_B'],
            'S40_40_G': cls.__constants['S40_40_G'],
            'M20_100': cls.__constants['M20_100'],
            'M20': cls.__constants['M20'],
            'M30': cls.__constants['M30'],
            'R20': cls.__constants['R20'],
            'ATWORK_END': cls.__constants['ATWORK_END'],
            'ADVANCED_START': cls.__constants['ADVANCED_START'],
            'AXIS2': cls.__constants['AXIS2'],
            'BEARING2': cls.__constants['BEARING2'],
            'HOUSING': cls.__constants['HOUSING'],
            'MOTOR2': cls.__constants['MOTOR2'],
            'SPACER': cls.__constants['SPACER'],
            'SCREWDRIVER': cls.__constants['SCREWDRIVER'],
            'WRENCH': cls.__constants['WRENCH'],
            'DRILL': cls.__constants['DRILL'],
            'ALLENKEY': cls.__constants['ALLENKEY'],
            'ADVANCED_END': cls.__constants['ADVANCED_END'],
            'ROCKIN_START': cls.__constants['ROCKIN_START'],
            'BEARING_BOX': cls.__constants['BEARING_BOX'],
            'BEARING': cls.__constants['BEARING'],
            'AXIS': cls.__constants['AXIS'],
            'DISTANCE_TUBE': cls.__constants['DISTANCE_TUBE'],
            'MOTOR': cls.__constants['MOTOR'],
            'ROCKIN_END': cls.__constants['ROCKIN_END'],
            'CONTAINER_START': cls.__constants['CONTAINER_START'],
            'CONTAINER_RED': cls.__constants['CONTAINER_RED'],
            'CONTAINER_BLUE': cls.__constants['CONTAINER_BLUE'],
            'CONTAINER_END': cls.__constants['CONTAINER_END'],
            'CAVITY_START': cls.__constants['CAVITY_START'],
            'F20_20_H': cls.__constants['F20_20_H'],
            'F20_20_V': cls.__constants['F20_20_V'],
            'F20_20_F': cls.__constants['F20_20_F'],
            'S40_40_H': cls.__constants['S40_40_H'],
            'S40_40_V': cls.__constants['S40_40_V'],
            'S40_40_F': cls.__constants['S40_40_F'],
            'M20_H': cls.__constants['M20_H'],
            'M20_V': cls.__constants['M20_V'],
            'M20_F': cls.__constants['M20_F'],
            'M20_100_H': cls.__constants['M20_100_H'],
            'M20_100_V': cls.__constants['M20_100_V'],
            'M20_100_F': cls.__constants['M20_100_F'],
            'M30_H': cls.__constants['M30_H'],
            'M30_V': cls.__constants['M30_V'],
            'M30_F': cls.__constants['M30_F'],
            'R20_H': cls.__constants['R20_H'],
            'R20_V': cls.__constants['R20_V'],
            'R20_F': cls.__constants['R20_F'],
            'CAVITY_END': cls.__constants['CAVITY_END'],
        }

    @property
    def EMPTY(self):
        """Message constant 'EMPTY'."""
        return Metaclass_Object.__constants['EMPTY']

    @property
    def ATWORK_START(self):
        """Message constant 'ATWORK_START'."""
        return Metaclass_Object.__constants['ATWORK_START']

    @property
    def F20_20_B(self):
        """Message constant 'F20_20_B'."""
        return Metaclass_Object.__constants['F20_20_B']

    @property
    def F20_20_G(self):
        """Message constant 'F20_20_G'."""
        return Metaclass_Object.__constants['F20_20_G']

    @property
    def S40_40_B(self):
        """Message constant 'S40_40_B'."""
        return Metaclass_Object.__constants['S40_40_B']

    @property
    def S40_40_G(self):
        """Message constant 'S40_40_G'."""
        return Metaclass_Object.__constants['S40_40_G']

    @property
    def M20_100(self):
        """Message constant 'M20_100'."""
        return Metaclass_Object.__constants['M20_100']

    @property
    def M20(self):
        """Message constant 'M20'."""
        return Metaclass_Object.__constants['M20']

    @property
    def M30(self):
        """Message constant 'M30'."""
        return Metaclass_Object.__constants['M30']

    @property
    def R20(self):
        """Message constant 'R20'."""
        return Metaclass_Object.__constants['R20']

    @property
    def ATWORK_END(self):
        """Message constant 'ATWORK_END'."""
        return Metaclass_Object.__constants['ATWORK_END']

    @property
    def ADVANCED_START(self):
        """Message constant 'ADVANCED_START'."""
        return Metaclass_Object.__constants['ADVANCED_START']

    @property
    def AXIS2(self):
        """Message constant 'AXIS2'."""
        return Metaclass_Object.__constants['AXIS2']

    @property
    def BEARING2(self):
        """Message constant 'BEARING2'."""
        return Metaclass_Object.__constants['BEARING2']

    @property
    def HOUSING(self):
        """Message constant 'HOUSING'."""
        return Metaclass_Object.__constants['HOUSING']

    @property
    def MOTOR2(self):
        """Message constant 'MOTOR2'."""
        return Metaclass_Object.__constants['MOTOR2']

    @property
    def SPACER(self):
        """Message constant 'SPACER'."""
        return Metaclass_Object.__constants['SPACER']

    @property
    def SCREWDRIVER(self):
        """Message constant 'SCREWDRIVER'."""
        return Metaclass_Object.__constants['SCREWDRIVER']

    @property
    def WRENCH(self):
        """Message constant 'WRENCH'."""
        return Metaclass_Object.__constants['WRENCH']

    @property
    def DRILL(self):
        """Message constant 'DRILL'."""
        return Metaclass_Object.__constants['DRILL']

    @property
    def ALLENKEY(self):
        """Message constant 'ALLENKEY'."""
        return Metaclass_Object.__constants['ALLENKEY']

    @property
    def ADVANCED_END(self):
        """Message constant 'ADVANCED_END'."""
        return Metaclass_Object.__constants['ADVANCED_END']

    @property
    def ROCKIN_START(self):
        """Message constant 'ROCKIN_START'."""
        return Metaclass_Object.__constants['ROCKIN_START']

    @property
    def BEARING_BOX(self):
        """Message constant 'BEARING_BOX'."""
        return Metaclass_Object.__constants['BEARING_BOX']

    @property
    def BEARING(self):
        """Message constant 'BEARING'."""
        return Metaclass_Object.__constants['BEARING']

    @property
    def AXIS(self):
        """Message constant 'AXIS'."""
        return Metaclass_Object.__constants['AXIS']

    @property
    def DISTANCE_TUBE(self):
        """Message constant 'DISTANCE_TUBE'."""
        return Metaclass_Object.__constants['DISTANCE_TUBE']

    @property
    def MOTOR(self):
        """Message constant 'MOTOR'."""
        return Metaclass_Object.__constants['MOTOR']

    @property
    def ROCKIN_END(self):
        """Message constant 'ROCKIN_END'."""
        return Metaclass_Object.__constants['ROCKIN_END']

    @property
    def CONTAINER_START(self):
        """Message constant 'CONTAINER_START'."""
        return Metaclass_Object.__constants['CONTAINER_START']

    @property
    def CONTAINER_RED(self):
        """Message constant 'CONTAINER_RED'."""
        return Metaclass_Object.__constants['CONTAINER_RED']

    @property
    def CONTAINER_BLUE(self):
        """Message constant 'CONTAINER_BLUE'."""
        return Metaclass_Object.__constants['CONTAINER_BLUE']

    @property
    def CONTAINER_END(self):
        """Message constant 'CONTAINER_END'."""
        return Metaclass_Object.__constants['CONTAINER_END']

    @property
    def CAVITY_START(self):
        """Message constant 'CAVITY_START'."""
        return Metaclass_Object.__constants['CAVITY_START']

    @property
    def F20_20_H(self):
        """Message constant 'F20_20_H'."""
        return Metaclass_Object.__constants['F20_20_H']

    @property
    def F20_20_V(self):
        """Message constant 'F20_20_V'."""
        return Metaclass_Object.__constants['F20_20_V']

    @property
    def F20_20_F(self):
        """Message constant 'F20_20_F'."""
        return Metaclass_Object.__constants['F20_20_F']

    @property
    def S40_40_H(self):
        """Message constant 'S40_40_H'."""
        return Metaclass_Object.__constants['S40_40_H']

    @property
    def S40_40_V(self):
        """Message constant 'S40_40_V'."""
        return Metaclass_Object.__constants['S40_40_V']

    @property
    def S40_40_F(self):
        """Message constant 'S40_40_F'."""
        return Metaclass_Object.__constants['S40_40_F']

    @property
    def M20_H(self):
        """Message constant 'M20_H'."""
        return Metaclass_Object.__constants['M20_H']

    @property
    def M20_V(self):
        """Message constant 'M20_V'."""
        return Metaclass_Object.__constants['M20_V']

    @property
    def M20_F(self):
        """Message constant 'M20_F'."""
        return Metaclass_Object.__constants['M20_F']

    @property
    def M20_100_H(self):
        """Message constant 'M20_100_H'."""
        return Metaclass_Object.__constants['M20_100_H']

    @property
    def M20_100_V(self):
        """Message constant 'M20_100_V'."""
        return Metaclass_Object.__constants['M20_100_V']

    @property
    def M20_100_F(self):
        """Message constant 'M20_100_F'."""
        return Metaclass_Object.__constants['M20_100_F']

    @property
    def M30_H(self):
        """Message constant 'M30_H'."""
        return Metaclass_Object.__constants['M30_H']

    @property
    def M30_V(self):
        """Message constant 'M30_V'."""
        return Metaclass_Object.__constants['M30_V']

    @property
    def M30_F(self):
        """Message constant 'M30_F'."""
        return Metaclass_Object.__constants['M30_F']

    @property
    def R20_H(self):
        """Message constant 'R20_H'."""
        return Metaclass_Object.__constants['R20_H']

    @property
    def R20_V(self):
        """Message constant 'R20_V'."""
        return Metaclass_Object.__constants['R20_V']

    @property
    def R20_F(self):
        """Message constant 'R20_F'."""
        return Metaclass_Object.__constants['R20_F']

    @property
    def CAVITY_END(self):
        """Message constant 'CAVITY_END'."""
        return Metaclass_Object.__constants['CAVITY_END']


class Object(metaclass=Metaclass_Object):
    """
    Message class 'Object'.

    Constants:
      EMPTY
      ATWORK_START
      F20_20_B
      F20_20_G
      S40_40_B
      S40_40_G
      M20_100
      M20
      M30
      R20
      ATWORK_END
      ADVANCED_START
      AXIS2
      BEARING2
      HOUSING
      MOTOR2
      SPACER
      SCREWDRIVER
      WRENCH
      DRILL
      ALLENKEY
      ADVANCED_END
      ROCKIN_START
      BEARING_BOX
      BEARING
      AXIS
      DISTANCE_TUBE
      MOTOR
      ROCKIN_END
      CONTAINER_START
      CONTAINER_RED
      CONTAINER_BLUE
      CONTAINER_END
      CAVITY_START
      F20_20_H
      F20_20_V
      F20_20_F
      S40_40_H
      S40_40_V
      S40_40_F
      M20_H
      M20_V
      M20_F
      M20_100_H
      M20_100_V
      M20_100_F
      M30_H
      M30_V
      M30_F
      R20_H
      R20_V
      R20_F
      CAVITY_END
    """

    __slots__ = [
        '_object',
        '_target',
        '_decoy',
        '_pose',
    ]

    _fields_and_field_types = {
        'object': 'uint16',
        'target': 'uint16',
        'decoy': 'boolean',
        'pose': 'geometry_msgs/PoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.object = kwargs.get('object', int())
        self.target = kwargs.get('target', int())
        self.decoy = kwargs.get('decoy', bool())
        from geometry_msgs.msg import PoseStamped
        self.pose = kwargs.get('pose', PoseStamped())

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
        if self.object != other.object:
            return False
        if self.target != other.target:
            return False
        if self.decoy != other.decoy:
            return False
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def object(self):  # noqa: A003
        """Message field 'object'."""
        return self._object

    @object.setter  # noqa: A003
    def object(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'object' field must be an unsigned integer in [0, 65535]"
        self._object = value

    @builtins.property
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'target' field must be an unsigned integer in [0, 65535]"
        self._target = value

    @builtins.property
    def decoy(self):
        """Message field 'decoy'."""
        return self._decoy

    @decoy.setter
    def decoy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'decoy' field must be of type 'bool'"
        self._decoy = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'pose' field must be a sub message of type 'PoseStamped'"
        self._pose = value
