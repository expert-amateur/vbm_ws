# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/expert_amateur/vbm_ws/src/addvectors_srvcli

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/expert_amateur/vbm_ws/build/addvectors_srvcli

# Utility rule file for addvectors_srvcli.

# Include any custom commands dependencies for this target.
include CMakeFiles/addvectors_srvcli.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/addvectors_srvcli.dir/progress.make

CMakeFiles/addvectors_srvcli: /home/expert_amateur/vbm_ws/src/addvectors_srvcli/srv/AddVectorsSrv.srv
CMakeFiles/addvectors_srvcli: rosidl_cmake/srv/AddVectorsSrv_Request.msg
CMakeFiles/addvectors_srvcli: rosidl_cmake/srv/AddVectorsSrv_Response.msg

addvectors_srvcli: CMakeFiles/addvectors_srvcli
addvectors_srvcli: CMakeFiles/addvectors_srvcli.dir/build.make
.PHONY : addvectors_srvcli

# Rule to build all files generated by this target.
CMakeFiles/addvectors_srvcli.dir/build: addvectors_srvcli
.PHONY : CMakeFiles/addvectors_srvcli.dir/build

CMakeFiles/addvectors_srvcli.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/addvectors_srvcli.dir/cmake_clean.cmake
.PHONY : CMakeFiles/addvectors_srvcli.dir/clean

CMakeFiles/addvectors_srvcli.dir/depend:
	cd /home/expert_amateur/vbm_ws/build/addvectors_srvcli && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/expert_amateur/vbm_ws/src/addvectors_srvcli /home/expert_amateur/vbm_ws/src/addvectors_srvcli /home/expert_amateur/vbm_ws/build/addvectors_srvcli /home/expert_amateur/vbm_ws/build/addvectors_srvcli /home/expert_amateur/vbm_ws/build/addvectors_srvcli/CMakeFiles/addvectors_srvcli.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/addvectors_srvcli.dir/depend
