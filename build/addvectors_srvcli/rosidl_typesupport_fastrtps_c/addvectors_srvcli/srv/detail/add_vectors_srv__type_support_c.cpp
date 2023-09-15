// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from addvectors_srvcli:srv/AddVectorsSrv.idl
// generated code does not contain a copyright notice
#include "addvectors_srvcli/srv/detail/add_vectors_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "addvectors_srvcli/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "addvectors_srvcli/srv/detail/add_vectors_srv__struct.h"
#include "addvectors_srvcli/srv/detail/add_vectors_srv__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // v1, v2
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // v1, v2

// forward declare type support functions


using _AddVectorsSrv_Request__ros_msg_type = addvectors_srvcli__srv__AddVectorsSrv_Request;

static bool _AddVectorsSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddVectorsSrv_Request__ros_msg_type * ros_message = static_cast<const _AddVectorsSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: v1
  {
    size_t size = ros_message->v1.size;
    auto array_ptr = ros_message->v1.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: v2
  {
    size_t size = ros_message->v2.size;
    auto array_ptr = ros_message->v2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _AddVectorsSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddVectorsSrv_Request__ros_msg_type * ros_message = static_cast<_AddVectorsSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: v1
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->v1.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->v1);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->v1, size)) {
      fprintf(stderr, "failed to create array for field 'v1'");
      return false;
    }
    auto array_ptr = ros_message->v1.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: v2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->v2.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->v2);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->v2, size)) {
      fprintf(stderr, "failed to create array for field 'v2'");
      return false;
    }
    auto array_ptr = ros_message->v2.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_addvectors_srvcli
size_t get_serialized_size_addvectors_srvcli__srv__AddVectorsSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddVectorsSrv_Request__ros_msg_type * ros_message = static_cast<const _AddVectorsSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name v1
  {
    size_t array_size = ros_message->v1.size;
    auto array_ptr = ros_message->v1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v2
  {
    size_t array_size = ros_message->v2.size;
    auto array_ptr = ros_message->v2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddVectorsSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_addvectors_srvcli__srv__AddVectorsSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_addvectors_srvcli
size_t max_serialized_size_addvectors_srvcli__srv__AddVectorsSrv_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: v1
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AddVectorsSrv_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_addvectors_srvcli__srv__AddVectorsSrv_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AddVectorsSrv_Request = {
  "addvectors_srvcli::srv",
  "AddVectorsSrv_Request",
  _AddVectorsSrv_Request__cdr_serialize,
  _AddVectorsSrv_Request__cdr_deserialize,
  _AddVectorsSrv_Request__get_serialized_size,
  _AddVectorsSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddVectorsSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddVectorsSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, addvectors_srvcli, srv, AddVectorsSrv_Request)() {
  return &_AddVectorsSrv_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "addvectors_srvcli/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "addvectors_srvcli/srv/detail/add_vectors_srv__struct.h"
// already included above
// #include "addvectors_srvcli/srv/detail/add_vectors_srv__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // sum
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // sum

// forward declare type support functions


using _AddVectorsSrv_Response__ros_msg_type = addvectors_srvcli__srv__AddVectorsSrv_Response;

static bool _AddVectorsSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddVectorsSrv_Response__ros_msg_type * ros_message = static_cast<const _AddVectorsSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    size_t size = ros_message->sum.size;
    auto array_ptr = ros_message->sum.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _AddVectorsSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddVectorsSrv_Response__ros_msg_type * ros_message = static_cast<_AddVectorsSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sum.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->sum);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->sum, size)) {
      fprintf(stderr, "failed to create array for field 'sum'");
      return false;
    }
    auto array_ptr = ros_message->sum.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_addvectors_srvcli
size_t get_serialized_size_addvectors_srvcli__srv__AddVectorsSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddVectorsSrv_Response__ros_msg_type * ros_message = static_cast<const _AddVectorsSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sum
  {
    size_t array_size = ros_message->sum.size;
    auto array_ptr = ros_message->sum.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddVectorsSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_addvectors_srvcli__srv__AddVectorsSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_addvectors_srvcli
size_t max_serialized_size_addvectors_srvcli__srv__AddVectorsSrv_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sum
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AddVectorsSrv_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_addvectors_srvcli__srv__AddVectorsSrv_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AddVectorsSrv_Response = {
  "addvectors_srvcli::srv",
  "AddVectorsSrv_Response",
  _AddVectorsSrv_Response__cdr_serialize,
  _AddVectorsSrv_Response__cdr_deserialize,
  _AddVectorsSrv_Response__get_serialized_size,
  _AddVectorsSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddVectorsSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddVectorsSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, addvectors_srvcli, srv, AddVectorsSrv_Response)() {
  return &_AddVectorsSrv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "addvectors_srvcli/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "addvectors_srvcli/srv/add_vectors_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AddVectorsSrv__callbacks = {
  "addvectors_srvcli::srv",
  "AddVectorsSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, addvectors_srvcli, srv, AddVectorsSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, addvectors_srvcli, srv, AddVectorsSrv_Response)(),
};

static rosidl_service_type_support_t AddVectorsSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AddVectorsSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, addvectors_srvcli, srv, AddVectorsSrv)() {
  return &AddVectorsSrv__handle;
}

#if defined(__cplusplus)
}
#endif
