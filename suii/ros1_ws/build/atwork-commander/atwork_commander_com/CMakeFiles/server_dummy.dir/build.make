# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robohub/suii/ros1_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robohub/suii/ros1_ws/build

# Include any dependencies generated for this target.
include atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/depend.make

# Include the progress variables for this target.
include atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/progress.make

# Include the compile flags for this target's objects.
include atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/flags.make

atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/src/server_dummy.cpp.o: atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/flags.make
atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/src/server_dummy.cpp.o: /home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_com/src/server_dummy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robohub/suii/ros1_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/src/server_dummy.cpp.o"
	cd /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_com && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_dummy.dir/src/server_dummy.cpp.o -c /home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_com/src/server_dummy.cpp

atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/src/server_dummy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_dummy.dir/src/server_dummy.cpp.i"
	cd /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_com && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_com/src/server_dummy.cpp > CMakeFiles/server_dummy.dir/src/server_dummy.cpp.i

atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/src/server_dummy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_dummy.dir/src/server_dummy.cpp.s"
	cd /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_com && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_com/src/server_dummy.cpp -o CMakeFiles/server_dummy.dir/src/server_dummy.cpp.s

# Object files for target server_dummy
server_dummy_OBJECTS = \
"CMakeFiles/server_dummy.dir/src/server_dummy.cpp.o"

# External object files for target server_dummy
server_dummy_EXTERNAL_OBJECTS =

/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/src/server_dummy.cpp.o
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/build.make
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/libroscpp.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/libclass_loader.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libPocoFoundation.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libdl.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/librosconsole.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/libroslib.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/librospack.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libpython3.8.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libboost_program_options.so.1.71.0
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/librostime.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /opt/ros/noetic/lib/libcpp_common.so
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy: atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robohub/suii/ros1_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy"
	cd /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_com && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server_dummy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/build: /home/robohub/suii/ros1_ws/devel/lib/atwork_commander_com/server_dummy

.PHONY : atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/build

atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/clean:
	cd /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_com && $(CMAKE_COMMAND) -P CMakeFiles/server_dummy.dir/cmake_clean.cmake
.PHONY : atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/clean

atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/depend:
	cd /home/robohub/suii/ros1_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robohub/suii/ros1_ws/src /home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_com /home/robohub/suii/ros1_ws/build /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_com /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : atwork-commander/atwork_commander_com/CMakeFiles/server_dummy.dir/depend
