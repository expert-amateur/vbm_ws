// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from addvectors_srvcli:srv/AddVectorsSrv.idl
// generated code does not contain a copyright notice

#ifndef ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__STRUCT_H_
#define ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'v1'
// Member 'v2'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/AddVectorsSrv in the package addvectors_srvcli.
typedef struct addvectors_srvcli__srv__AddVectorsSrv_Request
{
  rosidl_runtime_c__float__Sequence v1;
  rosidl_runtime_c__float__Sequence v2;
} addvectors_srvcli__srv__AddVectorsSrv_Request;

// Struct for a sequence of addvectors_srvcli__srv__AddVectorsSrv_Request.
typedef struct addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence
{
  addvectors_srvcli__srv__AddVectorsSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sum'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/AddVectorsSrv in the package addvectors_srvcli.
typedef struct addvectors_srvcli__srv__AddVectorsSrv_Response
{
  rosidl_runtime_c__float__Sequence sum;
} addvectors_srvcli__srv__AddVectorsSrv_Response;

// Struct for a sequence of addvectors_srvcli__srv__AddVectorsSrv_Response.
typedef struct addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence
{
  addvectors_srvcli__srv__AddVectorsSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__STRUCT_H_
