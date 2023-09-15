// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from addvectors_srvcli:srv/AddVectorsSrv.idl
// generated code does not contain a copyright notice
#include "addvectors_srvcli/srv/detail/add_vectors_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `v1`
// Member `v2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
addvectors_srvcli__srv__AddVectorsSrv_Request__init(addvectors_srvcli__srv__AddVectorsSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // v1
  if (!rosidl_runtime_c__float__Sequence__init(&msg->v1, 0)) {
    addvectors_srvcli__srv__AddVectorsSrv_Request__fini(msg);
    return false;
  }
  // v2
  if (!rosidl_runtime_c__float__Sequence__init(&msg->v2, 0)) {
    addvectors_srvcli__srv__AddVectorsSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
addvectors_srvcli__srv__AddVectorsSrv_Request__fini(addvectors_srvcli__srv__AddVectorsSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // v1
  rosidl_runtime_c__float__Sequence__fini(&msg->v1);
  // v2
  rosidl_runtime_c__float__Sequence__fini(&msg->v2);
}

bool
addvectors_srvcli__srv__AddVectorsSrv_Request__are_equal(const addvectors_srvcli__srv__AddVectorsSrv_Request * lhs, const addvectors_srvcli__srv__AddVectorsSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // v1
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->v1), &(rhs->v1)))
  {
    return false;
  }
  // v2
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->v2), &(rhs->v2)))
  {
    return false;
  }
  return true;
}

bool
addvectors_srvcli__srv__AddVectorsSrv_Request__copy(
  const addvectors_srvcli__srv__AddVectorsSrv_Request * input,
  addvectors_srvcli__srv__AddVectorsSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // v1
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->v1), &(output->v1)))
  {
    return false;
  }
  // v2
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->v2), &(output->v2)))
  {
    return false;
  }
  return true;
}

addvectors_srvcli__srv__AddVectorsSrv_Request *
addvectors_srvcli__srv__AddVectorsSrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addvectors_srvcli__srv__AddVectorsSrv_Request * msg = (addvectors_srvcli__srv__AddVectorsSrv_Request *)allocator.allocate(sizeof(addvectors_srvcli__srv__AddVectorsSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addvectors_srvcli__srv__AddVectorsSrv_Request));
  bool success = addvectors_srvcli__srv__AddVectorsSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addvectors_srvcli__srv__AddVectorsSrv_Request__destroy(addvectors_srvcli__srv__AddVectorsSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addvectors_srvcli__srv__AddVectorsSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__init(addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addvectors_srvcli__srv__AddVectorsSrv_Request * data = NULL;

  if (size) {
    data = (addvectors_srvcli__srv__AddVectorsSrv_Request *)allocator.zero_allocate(size, sizeof(addvectors_srvcli__srv__AddVectorsSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addvectors_srvcli__srv__AddVectorsSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addvectors_srvcli__srv__AddVectorsSrv_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__fini(addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      addvectors_srvcli__srv__AddVectorsSrv_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence *
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * array = (addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence *)allocator.allocate(sizeof(addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__destroy(addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__are_equal(const addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * lhs, const addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addvectors_srvcli__srv__AddVectorsSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence__copy(
  const addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * input,
  addvectors_srvcli__srv__AddVectorsSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addvectors_srvcli__srv__AddVectorsSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addvectors_srvcli__srv__AddVectorsSrv_Request * data =
      (addvectors_srvcli__srv__AddVectorsSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addvectors_srvcli__srv__AddVectorsSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addvectors_srvcli__srv__AddVectorsSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addvectors_srvcli__srv__AddVectorsSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `sum`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
addvectors_srvcli__srv__AddVectorsSrv_Response__init(addvectors_srvcli__srv__AddVectorsSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  if (!rosidl_runtime_c__float__Sequence__init(&msg->sum, 0)) {
    addvectors_srvcli__srv__AddVectorsSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
addvectors_srvcli__srv__AddVectorsSrv_Response__fini(addvectors_srvcli__srv__AddVectorsSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
  rosidl_runtime_c__float__Sequence__fini(&msg->sum);
}

bool
addvectors_srvcli__srv__AddVectorsSrv_Response__are_equal(const addvectors_srvcli__srv__AddVectorsSrv_Response * lhs, const addvectors_srvcli__srv__AddVectorsSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->sum), &(rhs->sum)))
  {
    return false;
  }
  return true;
}

bool
addvectors_srvcli__srv__AddVectorsSrv_Response__copy(
  const addvectors_srvcli__srv__AddVectorsSrv_Response * input,
  addvectors_srvcli__srv__AddVectorsSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->sum), &(output->sum)))
  {
    return false;
  }
  return true;
}

addvectors_srvcli__srv__AddVectorsSrv_Response *
addvectors_srvcli__srv__AddVectorsSrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addvectors_srvcli__srv__AddVectorsSrv_Response * msg = (addvectors_srvcli__srv__AddVectorsSrv_Response *)allocator.allocate(sizeof(addvectors_srvcli__srv__AddVectorsSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addvectors_srvcli__srv__AddVectorsSrv_Response));
  bool success = addvectors_srvcli__srv__AddVectorsSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addvectors_srvcli__srv__AddVectorsSrv_Response__destroy(addvectors_srvcli__srv__AddVectorsSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addvectors_srvcli__srv__AddVectorsSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__init(addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addvectors_srvcli__srv__AddVectorsSrv_Response * data = NULL;

  if (size) {
    data = (addvectors_srvcli__srv__AddVectorsSrv_Response *)allocator.zero_allocate(size, sizeof(addvectors_srvcli__srv__AddVectorsSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addvectors_srvcli__srv__AddVectorsSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addvectors_srvcli__srv__AddVectorsSrv_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__fini(addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      addvectors_srvcli__srv__AddVectorsSrv_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence *
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * array = (addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence *)allocator.allocate(sizeof(addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__destroy(addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__are_equal(const addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * lhs, const addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addvectors_srvcli__srv__AddVectorsSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence__copy(
  const addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * input,
  addvectors_srvcli__srv__AddVectorsSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addvectors_srvcli__srv__AddVectorsSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addvectors_srvcli__srv__AddVectorsSrv_Response * data =
      (addvectors_srvcli__srv__AddVectorsSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addvectors_srvcli__srv__AddVectorsSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addvectors_srvcli__srv__AddVectorsSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addvectors_srvcli__srv__AddVectorsSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
