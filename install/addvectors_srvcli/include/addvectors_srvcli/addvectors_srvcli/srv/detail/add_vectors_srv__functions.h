// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from addvectors_srvcli:srv/AddVectorsSrv.idl
// generated code does not contain a copyright notice

#ifndef ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__FUNCTIONS_H_
#define ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "addvectors_srvcli/msg/rosidl_generator_c__visibility_control.h"

#include "addvectors_srvcli/srv/detail/add_vectors_srv__struct.h"

/// Initialize srv/AddVectorsSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * addvectors_srvcli__srv__AddVectorsSrv_Request
 * )) before or use
 * addvectors_srvcli__srv__AddVectorsSrv_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Request__init(addvectors_srvcli__srv__AddVectorsSrv_Request * msg);

/// Finalize srv/AddVectorsSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
void
addvectors_srvcli__srv__AddVectorsSrv_Request__fini(addvectors_srvcli__srv__AddVectorsSrv_Request * msg);

/// Create srv/AddVectorsSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * addvectors_srvcli__srv__AddVectorsSrv_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
addvectors_srvcli__srv__AddVectorsSrv_Request *
addvectors_srvcli__srv__AddVectorsSrv_Request__create();

/// Destroy srv/AddVectorsSrv message.
/**
 * It calls
 * addvectors_srvcli__srv__AddVectorsSrv_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
void
addvectors_srvcli__srv__AddVectorsSrv_Request__destroy(addvectors_srvcli__srv__AddVectorsSrv_Request * msg);

/// Check for srv/AddVectorsSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Request__are_equal(const addvectors_srvcli__srv__AddVectorsSrv_Request * lhs, const addvectors_srvcli__srv__AddVectorsSrv_Request * rhs);

/// Copy a srv/AddVectorsSrv message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Request__copy(
  const addvectors_srvcli__srv__AddVectorsSrv_Request * input,
  addvectors_srvcli__srv__AddVectorsSrv_Request * output);

/// Initialize array of srv/AddVectorsSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * addvectors_srvcli__srv__AddVectorsSrv_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__init(addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * array, size_t size);

/// Finalize array of srv/AddVectorsSrv messages.
/**
 * It calls
 * addvectors_srvcli__srv__AddVectorsSrv_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
void
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__fini(addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * array);

/// Create array of srv/AddVectorsSrv messages.
/**
 * It allocates the memory for the array and calls
 * addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence *
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__create(size_t size);

/// Destroy array of srv/AddVectorsSrv messages.
/**
 * It calls
 * addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
void
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__destroy(addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * array);

/// Check for srv/AddVectorsSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__are_equal(const addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * lhs, const addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * rhs);

/// Copy an array of srv/AddVectorsSrv messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__copy(
  const addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * input,
  addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * output);

/// Initialize srv/AddVectorsSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * addvectors_srvcli__srv__AddVectorsSrv_Response
 * )) before or use
 * addvectors_srvcli__srv__AddVectorsSrv_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Response__init(addvectors_srvcli__srv__AddVectorsSrv_Response * msg);

/// Finalize srv/AddVectorsSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
void
addvectors_srvcli__srv__AddVectorsSrv_Response__fini(addvectors_srvcli__srv__AddVectorsSrv_Response * msg);

/// Create srv/AddVectorsSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * addvectors_srvcli__srv__AddVectorsSrv_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
addvectors_srvcli__srv__AddVectorsSrv_Response *
addvectors_srvcli__srv__AddVectorsSrv_Response__create();

/// Destroy srv/AddVectorsSrv message.
/**
 * It calls
 * addvectors_srvcli__srv__AddVectorsSrv_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
void
addvectors_srvcli__srv__AddVectorsSrv_Response__destroy(addvectors_srvcli__srv__AddVectorsSrv_Response * msg);

/// Check for srv/AddVectorsSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Response__are_equal(const addvectors_srvcli__srv__AddVectorsSrv_Response * lhs, const addvectors_srvcli__srv__AddVectorsSrv_Response * rhs);

/// Copy a srv/AddVectorsSrv message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Response__copy(
  const addvectors_srvcli__srv__AddVectorsSrv_Response * input,
  addvectors_srvcli__srv__AddVectorsSrv_Response * output);

/// Initialize array of srv/AddVectorsSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * addvectors_srvcli__srv__AddVectorsSrv_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__init(addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * array, size_t size);

/// Finalize array of srv/AddVectorsSrv messages.
/**
 * It calls
 * addvectors_srvcli__srv__AddVectorsSrv_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
void
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__fini(addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * array);

/// Create array of srv/AddVectorsSrv messages.
/**
 * It allocates the memory for the array and calls
 * addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence *
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__create(size_t size);

/// Destroy array of srv/AddVectorsSrv messages.
/**
 * It calls
 * addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
void
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__destroy(addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * array);

/// Check for srv/AddVectorsSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__are_equal(const addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * lhs, const addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * rhs);

/// Copy an array of srv/AddVectorsSrv messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_addvectors_srvcli
bool
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__copy(
  const addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * input,
  addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__FUNCTIONS_H_
