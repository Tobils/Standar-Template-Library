# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/ade/.local/lib/python2.7/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/ade/.local/lib/python2.7/site-packages/cmake/data/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace/build

# Include any dependencies generated for this target.
include CMakeFiles/nameSpace.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nameSpace.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nameSpace.dir/flags.make

CMakeFiles/nameSpace.dir/src/test-example.cpp.o: CMakeFiles/nameSpace.dir/flags.make
CMakeFiles/nameSpace.dir/src/test-example.cpp.o: ../src/test-example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nameSpace.dir/src/test-example.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nameSpace.dir/src/test-example.cpp.o -c /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace/src/test-example.cpp

CMakeFiles/nameSpace.dir/src/test-example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nameSpace.dir/src/test-example.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace/src/test-example.cpp > CMakeFiles/nameSpace.dir/src/test-example.cpp.i

CMakeFiles/nameSpace.dir/src/test-example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nameSpace.dir/src/test-example.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace/src/test-example.cpp -o CMakeFiles/nameSpace.dir/src/test-example.cpp.s

# Object files for target nameSpace
nameSpace_OBJECTS = \
"CMakeFiles/nameSpace.dir/src/test-example.cpp.o"

# External object files for target nameSpace
nameSpace_EXTERNAL_OBJECTS =

../bin/nameSpace: CMakeFiles/nameSpace.dir/src/test-example.cpp.o
../bin/nameSpace: CMakeFiles/nameSpace.dir/build.make
../bin/nameSpace: CMakeFiles/nameSpace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/nameSpace"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nameSpace.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nameSpace.dir/build: ../bin/nameSpace

.PHONY : CMakeFiles/nameSpace.dir/build

CMakeFiles/nameSpace.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nameSpace.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nameSpace.dir/clean

CMakeFiles/nameSpace.dir/depend:
	cd /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace/build /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace/build /home/ade/Documents/develope-tobil/dev-tobil-c++/Standar-Template-Library/namespace/build/CMakeFiles/nameSpace.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nameSpace.dir/depend

