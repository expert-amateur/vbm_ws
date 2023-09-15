// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from addvectors_srvcli:srv/AddVectorsSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "addvectors_srvcli/srv/detail/add_vectors_srv__rosidl_typesupport_introspection_c.h"
#include "addvectors_srvcli/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "addvectors_srvcli/srv/detail/add_vectors_srv__functions.h"
#include "addvectors_srvcli/srv/detail/add_vectors_srv__struct.h"


// Include directives for member types
// Member `v1`
// Member `v2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  addvectors_srvcli__srv__AddVectorsSrv_Request__init(message_memory);
}

void addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_fini_function(void * message_memory)
{
  addvectors_srvcli__srv__AddVectorsSrv_Request__fini(message_memory);
}

size_t addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__size_function__AddVectorsSrv_Request__v1(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_const_function__AddVectorsSrv_Request__v1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_function__AddVectorsSrv_Request__v1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__fetch_function__AddVectorsSrv_Request__v1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_const_function__AddVectorsSrv_Request__v1(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__assign_function__AddVectorsSrv_Request__v1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_function__AddVectorsSrv_Request__v1(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__resize_function__AddVectorsSrv_Request__v1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__size_function__AddVectorsSrv_Request__v2(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_const_function__AddVectorsSrv_Request__v2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_function__AddVectorsSrv_Request__v2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__fetch_function__AddVectorsSrv_Request__v2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_const_function__AddVectorsSrv_Request__v2(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__assign_function__AddVectorsSrv_Request__v2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_function__AddVectorsSrv_Request__v2(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__resize_function__AddVectorsSrv_Request__v2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_message_member_array[2] = {
  {
    "v1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(addvectors_srvcli__srv__AddVectorsSrv_Request, v1),  // bytes offset in struct
    NULL,  // default value
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__size_function__AddVectorsSrv_Request__v1,  // size() function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_const_function__AddVectorsSrv_Request__v1,  // get_const(index) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_function__AddVectorsSrv_Request__v1,  // get(index) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__fetch_function__AddVectorsSrv_Request__v1,  // fetch(index, &value) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__assign_function__AddVectorsSrv_Request__v1,  // assign(index, value) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__resize_function__AddVectorsSrv_Request__v1  // resize(index) function pointer
  },
  {
    "v2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(addvectors_srvcli__srv__AddVectorsSrv_Request, v2),  // bytes offset in struct
    NULL,  // default value
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__size_function__AddVectorsSrv_Request__v2,  // size() function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_const_function__AddVectorsSrv_Request__v2,  // get_const(index) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__get_function__AddVectorsSrv_Request__v2,  // get(index) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__fetch_function__AddVectorsSrv_Request__v2,  // fetch(index, &value) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__assign_function__AddVectorsSrv_Request__v2,  // assign(index, value) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__resize_function__AddVectorsSrv_Request__v2  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_message_members = {
  "addvectors_srvcli__srv",  // message namespace
  "AddVectorsSrv_Request",  // message name
  2,  // number of fields
  sizeof(addvectors_srvcli__srv__AddVectorsSrv_Request),
  addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_message_member_array,  // message members
  addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_message_type_support_handle = {
  0,
  &addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_addvectors_srvcli
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, addvectors_srvcli, srv, AddVectorsSrv_Request)() {
  if (!addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_message_type_support_handle.typesupport_identifier) {
    addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &addvectors_srvcli__srv__AddVectorsSrv_Request__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "addvectors_srvcli/srv/detail/add_vectors_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "addvectors_srvcli/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "addvectors_srvcli/srv/detail/add_vectors_srv__functions.h"
// already included above
// #include "addvectors_srvcli/srv/detail/add_vectors_srv__struct.h"


// Include directives for member types
// Member `sum`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  addvectors_srvcli__srv__AddVectorsSrv_Response__init(message_memory);
}

void addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_fini_function(void * message_memory)
{
  addvectors_srvcli__srv__AddVectorsSrv_Response__fini(message_memory);
}

size_t addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__size_function__AddVectorsSrv_Response__sum(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__get_const_function__AddVectorsSrv_Response__sum(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__get_function__AddVectorsSrv_Response__sum(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__fetch_function__AddVectorsSrv_Response__sum(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__get_const_function__AddVectorsSrv_Response__sum(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__assign_function__AddVectorsSrv_Response__sum(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__get_function__AddVectorsSrv_Response__sum(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__resize_function__AddVectorsSrv_Response__sum(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(addvectors_srvcli__srv__AddVectorsSrv_Response, sum),  // bytes offset in struct
    NULL,  // default value
    addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__size_function__AddVectorsSrv_Response__sum,  // size() function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__get_const_function__AddVectorsSrv_Response__sum,  // get_const(index) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__get_function__AddVectorsSrv_Response__sum,  // get(index) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__fetch_function__AddVectorsSrv_Response__sum,  // fetch(index, &value) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__assign_function__AddVectorsSrv_Response__sum,  // assign(index, value) function pointer
    addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__resize_function__AddVectorsSrv_Response__sum  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_message_members = {
  "addvectors_srvcli__srv",  // message namespace
  "AddVectorsSrv_Response",  // message name
  1,  // number of fields
  sizeof(addvectors_srvcli__srv__AddVectorsSrv_Response),
  addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_message_member_array,  // message members
  addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_message_type_support_handle = {
  0,
  &addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_addvectors_srvcli
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, addvectors_srvcli, srv, AddVectorsSrv_Response)() {
  if (!addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_message_type_support_handle.typesupport_identifier) {
    addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &addvectors_srvcli__srv__AddVectorsSrv_Response__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "addvectors_srvcli/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "addvectors_srvcli/srv/detail/add_vectors_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers addvectors_srvcli__srv__detail__add_vectors_srv__rosidl_typesupport_introspection_c__AddVectorsSrv_service_members = {
  "addvectors_srvcli__srv",  // service namespace
  "AddVectorsSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // addvectors_srvcli__srv__detail__add_vectors_srv__rosidl_typesupport_introspection_c__AddVectorsSrv_Request_message_type_support_handle,
  NULL  // response message
  // addvectors_srvcli__srv__detail__add_vectors_srv__rosidl_typesupport_introspection_c__AddVectorsSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t addvectors_srvcli__srv__detail__add_vectors_srv__rosidl_typesupport_introspection_c__AddVectorsSrv_service_type_support_handle = {
  0,
  &addvectors_srvcli__srv__detail__add_vectors_srv__rosidl_typesupport_introspection_c__AddVectorsSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, addvectors_srvcli, srv, AddVectorsSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, addvectors_srvcli, srv, AddVectorsSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_addvectors_srvcli
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, addvectors_srvcli, srv, AddVectorsSrv)() {
  if (!addvectors_srvcli__srv__detail__add_vectors_srv__rosidl_typesupport_introspection_c__AddVectorsSrv_service_type_support_handle.typesupport_identifier) {
    addvectors_srvcli__srv__detail__add_vectors_srv__rosidl_typesupport_introspection_c__AddVectorsSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)addvectors_srvcli__srv__detail__add_vectors_srv__rosidl_typesupport_introspection_c__AddVectorsSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, addvectors_srvcli, srv, AddVectorsSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, addvectors_srvcli, srv, AddVectorsSrv_Response)()->data;
  }

  return &addvectors_srvcli__srv__detail__add_vectors_srv__rosidl_typesupport_introspection_c__AddVectorsSrv_service_type_support_handle;
}
