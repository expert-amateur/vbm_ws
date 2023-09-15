// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addvectors_srvcli:srv/AddVectorsSrv.idl
// generated code does not contain a copyright notice

#ifndef ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__BUILDER_HPP_
#define ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addvectors_srvcli/srv/detail/add_vectors_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addvectors_srvcli
{

namespace srv
{

namespace builder
{

class Init_AddVectorsSrv_Request_v2
{
public:
  explicit Init_AddVectorsSrv_Request_v2(::addvectors_srvcli::srv::AddVectorsSrv_Request & msg)
  : msg_(msg)
  {}
  ::addvectors_srvcli::srv::AddVectorsSrv_Request v2(::addvectors_srvcli::srv::AddVectorsSrv_Request::_v2_type arg)
  {
    msg_.v2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addvectors_srvcli::srv::AddVectorsSrv_Request msg_;
};

class Init_AddVectorsSrv_Request_v1
{
public:
  Init_AddVectorsSrv_Request_v1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddVectorsSrv_Request_v2 v1(::addvectors_srvcli::srv::AddVectorsSrv_Request::_v1_type arg)
  {
    msg_.v1 = std::move(arg);
    return Init_AddVectorsSrv_Request_v2(msg_);
  }

private:
  ::addvectors_srvcli::srv::AddVectorsSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::addvectors_srvcli::srv::AddVectorsSrv_Request>()
{
  return addvectors_srvcli::srv::builder::Init_AddVectorsSrv_Request_v1();
}

}  // namespace addvectors_srvcli


namespace addvectors_srvcli
{

namespace srv
{

namespace builder
{

class Init_AddVectorsSrv_Response_sum
{
public:
  Init_AddVectorsSrv_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::addvectors_srvcli::srv::AddVectorsSrv_Response sum(::addvectors_srvcli::srv::AddVectorsSrv_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addvectors_srvcli::srv::AddVectorsSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::addvectors_srvcli::srv::AddVectorsSrv_Response>()
{
  return addvectors_srvcli::srv::builder::Init_AddVectorsSrv_Response_sum();
}

}  // namespace addvectors_srvcli

#endif  // ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__BUILDER_HPP_
