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
CMAKE_SOURCE_DIR = /home/masha/development/sandbox/cpp_sandbox/sorting/comparator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/masha/development/sandbox/cpp_sandbox/sorting/comparator

# Include any dependencies generated for this target.
include CMakeFiles/comparator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/comparator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/comparator.dir/flags.make

CMakeFiles/comparator.dir/comparator.cpp.o: CMakeFiles/comparator.dir/flags.make
CMakeFiles/comparator.dir/comparator.cpp.o: comparator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/masha/development/sandbox/cpp_sandbox/sorting/comparator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/comparator.dir/comparator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/comparator.dir/comparator.cpp.o -c /home/masha/development/sandbox/cpp_sandbox/sorting/comparator/comparator.cpp

CMakeFiles/comparator.dir/comparator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/comparator.dir/comparator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/masha/development/sandbox/cpp_sandbox/sorting/comparator/comparator.cpp > CMakeFiles/comparator.dir/comparator.cpp.i

CMakeFiles/comparator.dir/comparator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/comparator.dir/comparator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/masha/development/sandbox/cpp_sandbox/sorting/comparator/comparator.cpp -o CMakeFiles/comparator.dir/comparator.cpp.s

# Object files for target comparator
comparator_OBJECTS = \
"CMakeFiles/comparator.dir/comparator.cpp.o"

# External object files for target comparator
comparator_EXTERNAL_OBJECTS =

comparator: CMakeFiles/comparator.dir/comparator.cpp.o
comparator: CMakeFiles/comparator.dir/build.make
comparator: CMakeFiles/comparator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/masha/development/sandbox/cpp_sandbox/sorting/comparator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable comparator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/comparator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/comparator.dir/build: comparator

.PHONY : CMakeFiles/comparator.dir/build

CMakeFiles/comparator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/comparator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/comparator.dir/clean

CMakeFiles/comparator.dir/depend:
	cd /home/masha/development/sandbox/cpp_sandbox/sorting/comparator && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/masha/development/sandbox/cpp_sandbox/sorting/comparator /home/masha/development/sandbox/cpp_sandbox/sorting/comparator /home/masha/development/sandbox/cpp_sandbox/sorting/comparator /home/masha/development/sandbox/cpp_sandbox/sorting/comparator /home/masha/development/sandbox/cpp_sandbox/sorting/comparator/CMakeFiles/comparator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/comparator.dir/depend

