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
CMAKE_SOURCE_DIR = /home/masha/development/sandbox/cpp_sandbox/arrays/chaos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/masha/development/sandbox/cpp_sandbox/arrays/chaos

# Include any dependencies generated for this target.
include CMakeFiles/chaos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chaos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chaos.dir/flags.make

CMakeFiles/chaos.dir/chaos.cpp.o: CMakeFiles/chaos.dir/flags.make
CMakeFiles/chaos.dir/chaos.cpp.o: chaos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/masha/development/sandbox/cpp_sandbox/arrays/chaos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chaos.dir/chaos.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chaos.dir/chaos.cpp.o -c /home/masha/development/sandbox/cpp_sandbox/arrays/chaos/chaos.cpp

CMakeFiles/chaos.dir/chaos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chaos.dir/chaos.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/masha/development/sandbox/cpp_sandbox/arrays/chaos/chaos.cpp > CMakeFiles/chaos.dir/chaos.cpp.i

CMakeFiles/chaos.dir/chaos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chaos.dir/chaos.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/masha/development/sandbox/cpp_sandbox/arrays/chaos/chaos.cpp -o CMakeFiles/chaos.dir/chaos.cpp.s

# Object files for target chaos
chaos_OBJECTS = \
"CMakeFiles/chaos.dir/chaos.cpp.o"

# External object files for target chaos
chaos_EXTERNAL_OBJECTS =

chaos: CMakeFiles/chaos.dir/chaos.cpp.o
chaos: CMakeFiles/chaos.dir/build.make
chaos: CMakeFiles/chaos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/masha/development/sandbox/cpp_sandbox/arrays/chaos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chaos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chaos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chaos.dir/build: chaos

.PHONY : CMakeFiles/chaos.dir/build

CMakeFiles/chaos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chaos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chaos.dir/clean

CMakeFiles/chaos.dir/depend:
	cd /home/masha/development/sandbox/cpp_sandbox/arrays/chaos && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/masha/development/sandbox/cpp_sandbox/arrays/chaos /home/masha/development/sandbox/cpp_sandbox/arrays/chaos /home/masha/development/sandbox/cpp_sandbox/arrays/chaos /home/masha/development/sandbox/cpp_sandbox/arrays/chaos /home/masha/development/sandbox/cpp_sandbox/arrays/chaos/CMakeFiles/chaos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chaos.dir/depend

