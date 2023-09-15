// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from addvectors_srvcli:srv/AddVectorsSrv.idl
// generated code does not contain a copyright notice

#ifndef ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__TRAITS_HPP_
#define ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "addvectors_srvcli/srv/detail/add_vectors_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace addvectors_srvcli
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddVectorsSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: v1
  {
    if (msg.v1.size() == 0) {
      out << "v1: []";
    } else {
      out << "v1: [";
      size_t pending_items = msg.v1.size();
      for (auto item : msg.v1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: v2
  {
    if (msg.v2.size() == 0) {
      out << "v2: []";
    } else {
      out << "v2: [";
      size_t pending_items = msg.v2.size();
      for (auto item : msg.v2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddVectorsSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: v1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.v1.size() == 0) {
      out << "v1: []\n";
    } else {
      out << "v1:\n";
      for (auto item : msg.v1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: v2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.v2.size() == 0) {
      out << "v2: []\n";
    } else {
      out << "v2:\n";
      for (auto item : msg.v2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddVectorsSrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace addvectors_srvcli

namespace rosidl_generator_traits
{

[[deprecated("use addvectors_srvcli::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const addvectors_srvcli::srv::AddVectorsSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  addvectors_srvcli::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use addvectors_srvcli::srv::to_yaml() instead")]]
inline std::string to_yaml(const addvectors_srvcli::srv::AddVectorsSrv_Request & msg)
{
  return addvectors_srvcli::srv::to_yaml(msg);
}

template<>
inline const char * data_type<addvectors_srvcli::srv::AddVectorsSrv_Request>()
{
  return "addvectors_srvcli::srv::AddVectorsSrv_Request";
}

template<>
inline const char * name<addvectors_srvcli::srv::AddVectorsSrv_Request>()
{
  return "addvectors_srvcli/srv/AddVectorsSrv_Request";
}

template<>
struct has_fixed_size<addvectors_srvcli::srv::AddVectorsSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<addvectors_srvcli::srv::AddVectorsSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<addvectors_srvcli::srv::AddVectorsSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace addvectors_srvcli
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddVectorsSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    if (msg.sum.size() == 0) {
      out << "sum: []";
    } else {
      out << "sum: [";
      size_t pending_items = msg.sum.size();
      for (auto item : msg.sum) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddVectorsSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sum.size() == 0) {
      out << "sum: []\n";
    } else {
      out << "sum:\n";
      for (auto item : msg.sum) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddVectorsSrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace addvectors_srvcli

namespace rosidl_generator_traits
{

[[deprecated("use addvectors_srvcli::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const addvectors_srvcli::srv::AddVectorsSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  addvectors_srvcli::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use addvectors_srvcli::srv::to_yaml() instead")]]
inline std::string to_yaml(const addvectors_srvcli::srv::AddVectorsSrv_Response & msg)
{
  return addvectors_srvcli::srv::to_yaml(msg);
}

template<>
inline const char * data_type<addvectors_srvcli::srv::AddVectorsSrv_Response>()
{
  return "addvectors_srvcli::srv::AddVectorsSrv_Response";
}

template<>
inline const char * name<addvectors_srvcli::srv::AddVectorsSrv_Response>()
{
  return "addvectors_srvcli/srv/AddVectorsSrv_Response";
}

template<>
struct has_fixed_size<addvectors_srvcli::srv::AddVectorsSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<addvectors_srvcli::srv::AddVectorsSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<addvectors_srvcli::srv::AddVectorsSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<addvectors_srvcli::srv::AddVectorsSrv>()
{
  return "addvectors_srvcli::srv::AddVectorsSrv";
}

template<>
inline const char * name<addvectors_srvcli::srv::AddVectorsSrv>()
{
  return "addvectors_srvcli/srv/AddVectorsSrv";
}

template<>
struct has_fixed_size<addvectors_srvcli::srv::AddVectorsSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<addvectors_srvcli::srv::AddVectorsSrv_Request>::value &&
    has_fixed_size<addvectors_srvcli::srv::AddVectorsSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<addvectors_srvcli::srv::AddVectorsSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<addvectors_srvcli::srv::AddVectorsSrv_Request>::value &&
    has_bounded_size<addvectors_srvcli::srv::AddVectorsSrv_Response>::value
  >
{
};

template<>
struct is_service<addvectors_srvcli::srv::AddVectorsSrv>
  : std::true_type
{
};

template<>
struct is_service_request<addvectors_srvcli::srv::AddVectorsSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<addvectors_srvcli::srv::AddVectorsSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ADDVECTORS_SRVCLI__SRV__DETAIL__ADD_VECTORS_SRV__TRAITS_HPP_
