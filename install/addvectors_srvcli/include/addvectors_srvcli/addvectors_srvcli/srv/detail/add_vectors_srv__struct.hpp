// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from addvectors_srvcli:srv/AddVectorsSrv.idl
// generated code does not contain a copyright notice

#ifndef ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__STRUCT_HPP_
#define ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__addvectors_srvcli__srv__AddVectorsSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__addvectors_srvcli__srv__AddVectorsSrv_Request __declspec(deprecated)
#endif

namespace addvectors_srvcli
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddVectorsSrv_Request_
{
  using Type = AddVectorsSrv_Request_<ContainerAllocator>;

  explicit AddVectorsSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AddVectorsSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _v1_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _v1_type v1;
  using _v2_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _v2_type v2;

  // setters for named parameter idiom
  Type & set__v1(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->v1 = _arg;
    return *this;
  }
  Type & set__v2(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->v2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__addvectors_srvcli__srv__AddVectorsSrv_Request
    std::shared_ptr<addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__addvectors_srvcli__srv__AddVectorsSrv_Request
    std::shared_ptr<addvectors_srvcli::srv::AddVectorsSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddVectorsSrv_Request_ & other) const
  {
    if (this->v1 != other.v1) {
      return false;
    }
    if (this->v2 != other.v2) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddVectorsSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddVectorsSrv_Request_

// alias to use template instance with default allocator
using AddVectorsSrv_Request =
  addvectors_srvcli::srv::AddVectorsSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace addvectors_srvcli


#ifndef _WIN32
# define DEPRECATED__addvectors_srvcli__srv__AddVectorsSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__addvectors_srvcli__srv__AddVectorsSrv_Response __declspec(deprecated)
#endif

namespace addvectors_srvcli
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddVectorsSrv_Response_
{
  using Type = AddVectorsSrv_Response_<ContainerAllocator>;

  explicit AddVectorsSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AddVectorsSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _sum_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__addvectors_srvcli__srv__AddVectorsSrv_Response
    std::shared_ptr<addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__addvectors_srvcli__srv__AddVectorsSrv_Response
    std::shared_ptr<addvectors_srvcli::srv::AddVectorsSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddVectorsSrv_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddVectorsSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddVectorsSrv_Response_

// alias to use template instance with default allocator
using AddVectorsSrv_Response =
  addvectors_srvcli::srv::AddVectorsSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace addvectors_srvcli

namespace addvectors_srvcli
{

namespace srv
{

struct AddVectorsSrv
{
  using Request = addvectors_srvcli::srv::AddVectorsSrv_Request;
  using Response = addvectors_srvcli::srv::AddVectorsSrv_Response;
};

}  // namespace srv

}  // namespace addvectors_srvcli

#endif  // ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__STRUCT_HPP_
