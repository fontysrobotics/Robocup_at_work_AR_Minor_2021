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

# Utility rule file for run_tests_atwork_commander_core_rostest_tests_control.test.

# Include the progress variables for this target.
include atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test.dir/progress.make

atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test:
	cd /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_core && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/catkin/cmake/test/run_tests.py /home/robohub/suii/ros1_ws/build/test_results/atwork_commander_core/rostest-tests_control.xml "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_core --package=atwork_commander_core --results-filename tests_control.xml --results-base-dir \"/home/robohub/suii/ros1_ws/build/test_results\" /home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_core/tests/control.test "

run_tests_atwork_commander_core_rostest_tests_control.test: atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test
run_tests_atwork_commander_core_rostest_tests_control.test: atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test.dir/build.make

.PHONY : run_tests_atwork_commander_core_rostest_tests_control.test

# Rule to build all files generated by this target.
atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test.dir/build: run_tests_atwork_commander_core_rostest_tests_control.test

.PHONY : atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test.dir/build

atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test.dir/clean:
	cd /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_core && $(CMAKE_COMMAND) -P CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test.dir/cmake_clean.cmake
.PHONY : atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test.dir/clean

atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test.dir/depend:
	cd /home/robohub/suii/ros1_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robohub/suii/ros1_ws/src /home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_core /home/robohub/suii/ros1_ws/build /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_core /home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : atwork-commander/atwork_commander_core/CMakeFiles/run_tests_atwork_commander_core_rostest_tests_control.test.dir/depend

