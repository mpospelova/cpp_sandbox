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
CMAKE_SOURCE_DIR = /home/masha/development/sandbox/cpp_sandbox/clouds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/masha/development/sandbox/cpp_sandbox/clouds

# Include any dependencies generated for this target.
include CMakeFiles/clouds.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/clouds.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/clouds.dir/flags.make

CMakeFiles/clouds.dir/clouds.cpp.o: CMakeFiles/clouds.dir/flags.make
CMakeFiles/clouds.dir/clouds.cpp.o: clouds.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/masha/development/sandbox/cpp_sandbox/clouds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/clouds.dir/clouds.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clouds.dir/clouds.cpp.o -c /home/masha/development/sandbox/cpp_sandbox/clouds/clouds.cpp

CMakeFiles/clouds.dir/clouds.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clouds.dir/clouds.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/masha/development/sandbox/cpp_sandbox/clouds/clouds.cpp > CMakeFiles/clouds.dir/clouds.cpp.i

CMakeFiles/clouds.dir/clouds.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clouds.dir/clouds.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/masha/development/sandbox/cpp_sandbox/clouds/clouds.cpp -o CMakeFiles/clouds.dir/clouds.cpp.s

# Object files for target clouds
clouds_OBJECTS = \
"CMakeFiles/clouds.dir/clouds.cpp.o"

# External object files for target clouds
clouds_EXTERNAL_OBJECTS =

clouds: CMakeFiles/clouds.dir/clouds.cpp.o
clouds: CMakeFiles/clouds.dir/build.make
clouds: CMakeFiles/clouds.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/masha/development/sandbox/cpp_sandbox/clouds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable clouds"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clouds.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/clouds.dir/build: clouds

.PHONY : CMakeFiles/clouds.dir/build

CMakeFiles/clouds.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clouds.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clouds.dir/clean

CMakeFiles/clouds.dir/depend:
	cd /home/masha/development/sandbox/cpp_sandbox/clouds && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/masha/development/sandbox/cpp_sandbox/clouds /home/masha/development/sandbox/cpp_sandbox/clouds /home/masha/development/sandbox/cpp_sandbox/clouds /home/masha/development/sandbox/cpp_sandbox/clouds /home/masha/development/sandbox/cpp_sandbox/clouds/CMakeFiles/clouds.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clouds.dir/depend
