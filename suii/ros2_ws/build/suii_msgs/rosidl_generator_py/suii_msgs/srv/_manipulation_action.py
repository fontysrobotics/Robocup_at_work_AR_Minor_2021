# generated from rosidl_generator_py/resource/_idl.py.em
# with input from suii_msgs:srv/ManipulationAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ManipulationAction_Request(type):
    """Metaclass of message 'ManipulationAction_Request'."""

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
            module = import_type_support('suii_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'suii_msgs.srv.ManipulationAction_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__manipulation_action__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__manipulation_action__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__manipulation_action__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__manipulation_action__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__manipulation_action__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ManipulationAction_Request(metaclass=Metaclass_ManipulationAction_Request):
    """Message class 'ManipulationAction_Request'."""

    __slots__ = [
        '_link',
    ]

    _fields_and_field_types = {
        'link': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.link = kwargs.get('link', str())

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
        if self.link != other.link:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def link(self):
        """Message field 'link'."""
        return self._link

    @link.setter
    def link(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link' field must be of type 'str'"
        self._link = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ManipulationAction_Response(type):
    """Metaclass of message 'ManipulationAction_Response'."""

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
            module = import_type_support('suii_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'suii_msgs.srv.ManipulationAction_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__manipulation_action__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__manipulation_action__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__manipulation_action__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__manipulation_action__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__manipulation_action__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ManipulationAction_Response(metaclass=Metaclass_ManipulationAction_Response):
    """Message class 'ManipulationAction_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value


class Metaclass_ManipulationAction(type):
    """Metaclass of service 'ManipulationAction'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('suii_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'suii_msgs.srv.ManipulationAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__manipulation_action

            from suii_msgs.srv import _manipulation_action
            if _manipulation_action.Metaclass_ManipulationAction_Request._TYPE_SUPPORT is None:
                _manipulation_action.Metaclass_ManipulationAction_Request.__import_type_support__()
            if _manipulation_action.Metaclass_ManipulationAction_Response._TYPE_SUPPORT is None:
                _manipulation_action.Metaclass_ManipulationAction_Response.__import_type_support__()


class ManipulationAction(metaclass=Metaclass_ManipulationAction):
    from suii_msgs.srv._manipulation_action import ManipulationAction_Request as Request
    from suii_msgs.srv._manipulation_action import ManipulationAction_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
