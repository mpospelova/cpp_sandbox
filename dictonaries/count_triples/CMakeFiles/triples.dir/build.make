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
CMAKE_SOURCE_DIR = /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples

# Include any dependencies generated for this target.
include CMakeFiles/triples.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/triples.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/triples.dir/flags.make

CMakeFiles/triples.dir/triples.cpp.o: CMakeFiles/triples.dir/flags.make
CMakeFiles/triples.dir/triples.cpp.o: triples.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/triples.dir/triples.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/triples.dir/triples.cpp.o -c /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples/triples.cpp

CMakeFiles/triples.dir/triples.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/triples.dir/triples.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples/triples.cpp > CMakeFiles/triples.dir/triples.cpp.i

CMakeFiles/triples.dir/triples.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/triples.dir/triples.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples/triples.cpp -o CMakeFiles/triples.dir/triples.cpp.s

# Object files for target triples
triples_OBJECTS = \
"CMakeFiles/triples.dir/triples.cpp.o"

# External object files for target triples
triples_EXTERNAL_OBJECTS =

triples: CMakeFiles/triples.dir/triples.cpp.o
triples: CMakeFiles/triples.dir/build.make
triples: CMakeFiles/triples.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable triples"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/triples.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/triples.dir/build: triples

.PHONY : CMakeFiles/triples.dir/build

CMakeFiles/triples.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/triples.dir/cmake_clean.cmake
.PHONY : CMakeFiles/triples.dir/clean

CMakeFiles/triples.dir/depend:
	cd /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples /home/masha/development/sandbox/cpp_sandbox/dictonaries/count_triples/CMakeFiles/triples.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/triples.dir/depend
