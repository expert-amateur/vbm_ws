# generated from rosidl_generator_py/resource/_idl.py.em
# with input from addvectors_srvcli:srv/AddVectorsSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'v1'
# Member 'v2'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AddVectorsSrv_Request(type):
    """Metaclass of message 'AddVectorsSrv_Request'."""

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
            module = import_type_support('addvectors_srvcli')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'addvectors_srvcli.srv.AddVectorsSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_vectors_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_vectors_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_vectors_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_vectors_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_vectors_srv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddVectorsSrv_Request(metaclass=Metaclass_AddVectorsSrv_Request):
    """Message class 'AddVectorsSrv_Request'."""

    __slots__ = [
        '_v1',
        '_v2',
    ]

    _fields_and_field_types = {
        'v1': 'sequence<float>',
        'v2': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.v1 = array.array('f', kwargs.get('v1', []))
        self.v2 = array.array('f', kwargs.get('v2', []))

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
        if self.v1 != other.v1:
            return False
        if self.v2 != other.v2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def v1(self):
        """Message field 'v1'."""
        return self._v1

    @v1.setter
    def v1(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'v1' array.array() must have the type code of 'f'"
            self._v1 = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'v1' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._v1 = array.array('f', value)

    @builtins.property
    def v2(self):
        """Message field 'v2'."""
        return self._v2

    @v2.setter
    def v2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'v2' array.array() must have the type code of 'f'"
            self._v2 = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'v2' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._v2 = array.array('f', value)


# Import statements for member types

# Member 'sum'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_AddVectorsSrv_Response(type):
    """Metaclass of message 'AddVectorsSrv_Response'."""

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
            module = import_type_support('addvectors_srvcli')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'addvectors_srvcli.srv.AddVectorsSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_vectors_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_vectors_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_vectors_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_vectors_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_vectors_srv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddVectorsSrv_Response(metaclass=Metaclass_AddVectorsSrv_Response):
    """Message class 'AddVectorsSrv_Response'."""

    __slots__ = [
        '_sum',
    ]

    _fields_and_field_types = {
        'sum': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sum = array.array('f', kwargs.get('sum', []))

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
        if self.sum != other.sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def sum(self):  # noqa: A003
        """Message field 'sum'."""
        return self._sum

    @sum.setter  # noqa: A003
    def sum(self, value):  # noqa: A003
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'sum' array.array() must have the type code of 'f'"
            self._sum = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'sum' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._sum = array.array('f', value)


class Metaclass_AddVectorsSrv(type):
    """Metaclass of service 'AddVectorsSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('addvectors_srvcli')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'addvectors_srvcli.srv.AddVectorsSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__add_vectors_srv

            from addvectors_srvcli.srv import _add_vectors_srv
            if _add_vectors_srv.Metaclass_AddVectorsSrv_Request._TYPE_SUPPORT is None:
                _add_vectors_srv.Metaclass_AddVectorsSrv_Request.__import_type_support__()
            if _add_vectors_srv.Metaclass_AddVectorsSrv_Response._TYPE_SUPPORT is None:
                _add_vectors_srv.Metaclass_AddVectorsSrv_Response.__import_type_support__()


class AddVectorsSrv(metaclass=Metaclass_AddVectorsSrv):
    from addvectors_srvcli.srv._add_vectors_srv import AddVectorsSrv_Request as Request
    from addvectors_srvcli.srv._add_vectors_srv import AddVectorsSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
