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
CMAKE_SOURCE_DIR = /home/masha/development/sandbox/cpp_sandbox/graphs/floyd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/masha/development/sandbox/cpp_sandbox/graphs/floyd/build

# Include any dependencies generated for this target.
include CMakeFiles/floyd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/floyd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/floyd.dir/flags.make

CMakeFiles/floyd.dir/floyd.cpp.o: CMakeFiles/floyd.dir/flags.make
CMakeFiles/floyd.dir/floyd.cpp.o: ../floyd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/masha/development/sandbox/cpp_sandbox/graphs/floyd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/floyd.dir/floyd.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/floyd.dir/floyd.cpp.o -c /home/masha/development/sandbox/cpp_sandbox/graphs/floyd/floyd.cpp

CMakeFiles/floyd.dir/floyd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/floyd.dir/floyd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/masha/development/sandbox/cpp_sandbox/graphs/floyd/floyd.cpp > CMakeFiles/floyd.dir/floyd.cpp.i

CMakeFiles/floyd.dir/floyd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/floyd.dir/floyd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/masha/development/sandbox/cpp_sandbox/graphs/floyd/floyd.cpp -o CMakeFiles/floyd.dir/floyd.cpp.s

# Object files for target floyd
floyd_OBJECTS = \
"CMakeFiles/floyd.dir/floyd.cpp.o"

# External object files for target floyd
floyd_EXTERNAL_OBJECTS =

floyd: CMakeFiles/floyd.dir/floyd.cpp.o
floyd: CMakeFiles/floyd.dir/build.make
floyd: CMakeFiles/floyd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/masha/development/sandbox/cpp_sandbox/graphs/floyd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable floyd"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/floyd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/floyd.dir/build: floyd

.PHONY : CMakeFiles/floyd.dir/build

CMakeFiles/floyd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/floyd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/floyd.dir/clean

CMakeFiles/floyd.dir/depend:
	cd /home/masha/development/sandbox/cpp_sandbox/graphs/floyd/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/masha/development/sandbox/cpp_sandbox/graphs/floyd /home/masha/development/sandbox/cpp_sandbox/graphs/floyd /home/masha/development/sandbox/cpp_sandbox/graphs/floyd/build /home/masha/development/sandbox/cpp_sandbox/graphs/floyd/build /home/masha/development/sandbox/cpp_sandbox/graphs/floyd/build/CMakeFiles/floyd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/floyd.dir/depend
