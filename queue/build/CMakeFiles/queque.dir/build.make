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
CMAKE_SOURCE_DIR = /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue/build

# Include any dependencies generated for this target.
include CMakeFiles/queque.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/queque.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/queque.dir/flags.make

CMakeFiles/queque.dir/src/queue.cpp.o: CMakeFiles/queque.dir/flags.make
CMakeFiles/queque.dir/src/queue.cpp.o: ../src/queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/queque.dir/src/queue.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/queque.dir/src/queue.cpp.o -c /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue/src/queue.cpp

CMakeFiles/queque.dir/src/queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/queque.dir/src/queue.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue/src/queue.cpp > CMakeFiles/queque.dir/src/queue.cpp.i

CMakeFiles/queque.dir/src/queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/queque.dir/src/queue.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue/src/queue.cpp -o CMakeFiles/queque.dir/src/queue.cpp.s

# Object files for target queque
queque_OBJECTS = \
"CMakeFiles/queque.dir/src/queue.cpp.o"

# External object files for target queque
queque_EXTERNAL_OBJECTS =

../bin/queque: CMakeFiles/queque.dir/src/queue.cpp.o
../bin/queque: CMakeFiles/queque.dir/build.make
../bin/queque: CMakeFiles/queque.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/queque"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/queque.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/queque.dir/build: ../bin/queque

.PHONY : CMakeFiles/queque.dir/build

CMakeFiles/queque.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/queque.dir/cmake_clean.cmake
.PHONY : CMakeFiles/queque.dir/clean

CMakeFiles/queque.dir/depend:
	cd /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue/build /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue/build /home/ade/Documents/develope-tobil/ALEXA/SMART-SPEAKER/STL/queue/build/CMakeFiles/queque.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/queque.dir/depend

