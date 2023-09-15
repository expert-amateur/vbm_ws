cmake_minimum_required(VERSION 3.8)
project(addvectors_srvcli)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
#find_package(example_interfaces REQUIRED)
#find_package(tutorial_interfaces REQUIRED)
# find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/AddVectorsSrv.srv"
  #DEPENDENCIES geometry_msgs # Add packages that above messages depend on, in this case geometry_msgs for Sphere.msg
)



ament_export_dependencies(rosidl_default_runtime)

rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} rosidl_typesupport_cpp)

add_executable(add_vec_server_exec src/add_vectors_server_src.cpp)
  ament_target_dependencies(add_vec_server_exec rclcpp)
  
add_executable(add_vec_client_exec src/add_vectors_client_src.cpp)
  ament_target_dependencies(add_vec_client_exec rclcpp)

target_link_libraries(add_vec_server_exec "${cpp_typesupport_target}")
target_link_libraries(add_vec_client_exec "${cpp_typesupport_target}")


install(TARGETS
add_vec_server_exec
add_vec_client_exec
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
