# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/masha/development/sandbox/cpp_sandbox/graphs/prim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/masha/development/sandbox/cpp_sandbox/graphs/prim

# Include any dependencies generated for this target.
include CMakeFiles/prim.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prim.dir/flags.make

CMakeFiles/prim.dir/prim.cpp.o: CMakeFiles/prim.dir/flags.make
CMakeFiles/prim.dir/prim.cpp.o: prim.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/masha/development/sandbox/cpp_sandbox/graphs/prim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prim.dir/prim.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prim.dir/prim.cpp.o -c /home/masha/development/sandbox/cpp_sandbox/graphs/prim/prim.cpp

CMakeFiles/prim.dir/prim.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prim.dir/prim.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/masha/development/sandbox/cpp_sandbox/graphs/prim/prim.cpp > CMakeFiles/prim.dir/prim.cpp.i

CMakeFiles/prim.dir/prim.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prim.dir/prim.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/masha/development/sandbox/cpp_sandbox/graphs/prim/prim.cpp -o CMakeFiles/prim.dir/prim.cpp.s

# Object files for target prim
prim_OBJECTS = \
"CMakeFiles/prim.dir/prim.cpp.o"

# External object files for target prim
prim_EXTERNAL_OBJECTS =

prim: CMakeFiles/prim.dir/prim.cpp.o
prim: CMakeFiles/prim.dir/build.make
prim: CMakeFiles/prim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/masha/development/sandbox/cpp_sandbox/graphs/prim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable prim"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prim.dir/build: prim

.PHONY : CMakeFiles/prim.dir/build

CMakeFiles/prim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prim.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prim.dir/clean

CMakeFiles/prim.dir/depend:
	cd /home/masha/development/sandbox/cpp_sandbox/graphs/prim && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/masha/development/sandbox/cpp_sandbox/graphs/prim /home/masha/development/sandbox/cpp_sandbox/graphs/prim /home/masha/development/sandbox/cpp_sandbox/graphs/prim /home/masha/development/sandbox/cpp_sandbox/graphs/prim /home/masha/development/sandbox/cpp_sandbox/graphs/prim/CMakeFiles/prim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prim.dir/depend

