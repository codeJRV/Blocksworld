# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/jrv/Downloads/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/jrv/Downloads/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Blocksworld.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Blocksworld.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Blocksworld.dir/flags.make

CMakeFiles/Blocksworld.dir/main.cpp.o: CMakeFiles/Blocksworld.dir/flags.make
CMakeFiles/Blocksworld.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Blocksworld.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Blocksworld.dir/main.cpp.o -c "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/main.cpp"

CMakeFiles/Blocksworld.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Blocksworld.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/main.cpp" > CMakeFiles/Blocksworld.dir/main.cpp.i

CMakeFiles/Blocksworld.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Blocksworld.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/main.cpp" -o CMakeFiles/Blocksworld.dir/main.cpp.s

CMakeFiles/Blocksworld.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Blocksworld.dir/main.cpp.o.requires

CMakeFiles/Blocksworld.dir/main.cpp.o.provides: CMakeFiles/Blocksworld.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Blocksworld.dir/build.make CMakeFiles/Blocksworld.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Blocksworld.dir/main.cpp.o.provides

CMakeFiles/Blocksworld.dir/main.cpp.o.provides.build: CMakeFiles/Blocksworld.dir/main.cpp.o


CMakeFiles/Blocksworld.dir/Node.cpp.o: CMakeFiles/Blocksworld.dir/flags.make
CMakeFiles/Blocksworld.dir/Node.cpp.o: ../Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Blocksworld.dir/Node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Blocksworld.dir/Node.cpp.o -c "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/Node.cpp"

CMakeFiles/Blocksworld.dir/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Blocksworld.dir/Node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/Node.cpp" > CMakeFiles/Blocksworld.dir/Node.cpp.i

CMakeFiles/Blocksworld.dir/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Blocksworld.dir/Node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/Node.cpp" -o CMakeFiles/Blocksworld.dir/Node.cpp.s

CMakeFiles/Blocksworld.dir/Node.cpp.o.requires:

.PHONY : CMakeFiles/Blocksworld.dir/Node.cpp.o.requires

CMakeFiles/Blocksworld.dir/Node.cpp.o.provides: CMakeFiles/Blocksworld.dir/Node.cpp.o.requires
	$(MAKE) -f CMakeFiles/Blocksworld.dir/build.make CMakeFiles/Blocksworld.dir/Node.cpp.o.provides.build
.PHONY : CMakeFiles/Blocksworld.dir/Node.cpp.o.provides

CMakeFiles/Blocksworld.dir/Node.cpp.o.provides.build: CMakeFiles/Blocksworld.dir/Node.cpp.o


CMakeFiles/Blocksworld.dir/Tree.cpp.o: CMakeFiles/Blocksworld.dir/flags.make
CMakeFiles/Blocksworld.dir/Tree.cpp.o: ../Tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Blocksworld.dir/Tree.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Blocksworld.dir/Tree.cpp.o -c "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/Tree.cpp"

CMakeFiles/Blocksworld.dir/Tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Blocksworld.dir/Tree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/Tree.cpp" > CMakeFiles/Blocksworld.dir/Tree.cpp.i

CMakeFiles/Blocksworld.dir/Tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Blocksworld.dir/Tree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/Tree.cpp" -o CMakeFiles/Blocksworld.dir/Tree.cpp.s

CMakeFiles/Blocksworld.dir/Tree.cpp.o.requires:

.PHONY : CMakeFiles/Blocksworld.dir/Tree.cpp.o.requires

CMakeFiles/Blocksworld.dir/Tree.cpp.o.provides: CMakeFiles/Blocksworld.dir/Tree.cpp.o.requires
	$(MAKE) -f CMakeFiles/Blocksworld.dir/build.make CMakeFiles/Blocksworld.dir/Tree.cpp.o.provides.build
.PHONY : CMakeFiles/Blocksworld.dir/Tree.cpp.o.provides

CMakeFiles/Blocksworld.dir/Tree.cpp.o.provides.build: CMakeFiles/Blocksworld.dir/Tree.cpp.o


CMakeFiles/Blocksworld.dir/AStar.cpp.o: CMakeFiles/Blocksworld.dir/flags.make
CMakeFiles/Blocksworld.dir/AStar.cpp.o: ../AStar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Blocksworld.dir/AStar.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Blocksworld.dir/AStar.cpp.o -c "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/AStar.cpp"

CMakeFiles/Blocksworld.dir/AStar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Blocksworld.dir/AStar.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/AStar.cpp" > CMakeFiles/Blocksworld.dir/AStar.cpp.i

CMakeFiles/Blocksworld.dir/AStar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Blocksworld.dir/AStar.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/AStar.cpp" -o CMakeFiles/Blocksworld.dir/AStar.cpp.s

CMakeFiles/Blocksworld.dir/AStar.cpp.o.requires:

.PHONY : CMakeFiles/Blocksworld.dir/AStar.cpp.o.requires

CMakeFiles/Blocksworld.dir/AStar.cpp.o.provides: CMakeFiles/Blocksworld.dir/AStar.cpp.o.requires
	$(MAKE) -f CMakeFiles/Blocksworld.dir/build.make CMakeFiles/Blocksworld.dir/AStar.cpp.o.provides.build
.PHONY : CMakeFiles/Blocksworld.dir/AStar.cpp.o.provides

CMakeFiles/Blocksworld.dir/AStar.cpp.o.provides.build: CMakeFiles/Blocksworld.dir/AStar.cpp.o


CMakeFiles/Blocksworld.dir/Heirustic.cpp.o: CMakeFiles/Blocksworld.dir/flags.make
CMakeFiles/Blocksworld.dir/Heirustic.cpp.o: ../Heirustic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Blocksworld.dir/Heirustic.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Blocksworld.dir/Heirustic.cpp.o -c "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/Heirustic.cpp"

CMakeFiles/Blocksworld.dir/Heirustic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Blocksworld.dir/Heirustic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/Heirustic.cpp" > CMakeFiles/Blocksworld.dir/Heirustic.cpp.i

CMakeFiles/Blocksworld.dir/Heirustic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Blocksworld.dir/Heirustic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/Heirustic.cpp" -o CMakeFiles/Blocksworld.dir/Heirustic.cpp.s

CMakeFiles/Blocksworld.dir/Heirustic.cpp.o.requires:

.PHONY : CMakeFiles/Blocksworld.dir/Heirustic.cpp.o.requires

CMakeFiles/Blocksworld.dir/Heirustic.cpp.o.provides: CMakeFiles/Blocksworld.dir/Heirustic.cpp.o.requires
	$(MAKE) -f CMakeFiles/Blocksworld.dir/build.make CMakeFiles/Blocksworld.dir/Heirustic.cpp.o.provides.build
.PHONY : CMakeFiles/Blocksworld.dir/Heirustic.cpp.o.provides

CMakeFiles/Blocksworld.dir/Heirustic.cpp.o.provides.build: CMakeFiles/Blocksworld.dir/Heirustic.cpp.o


# Object files for target Blocksworld
Blocksworld_OBJECTS = \
"CMakeFiles/Blocksworld.dir/main.cpp.o" \
"CMakeFiles/Blocksworld.dir/Node.cpp.o" \
"CMakeFiles/Blocksworld.dir/Tree.cpp.o" \
"CMakeFiles/Blocksworld.dir/AStar.cpp.o" \
"CMakeFiles/Blocksworld.dir/Heirustic.cpp.o"

# External object files for target Blocksworld
Blocksworld_EXTERNAL_OBJECTS =

Blocksworld: CMakeFiles/Blocksworld.dir/main.cpp.o
Blocksworld: CMakeFiles/Blocksworld.dir/Node.cpp.o
Blocksworld: CMakeFiles/Blocksworld.dir/Tree.cpp.o
Blocksworld: CMakeFiles/Blocksworld.dir/AStar.cpp.o
Blocksworld: CMakeFiles/Blocksworld.dir/Heirustic.cpp.o
Blocksworld: CMakeFiles/Blocksworld.dir/build.make
Blocksworld: CMakeFiles/Blocksworld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Blocksworld"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Blocksworld.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Blocksworld.dir/build: Blocksworld

.PHONY : CMakeFiles/Blocksworld.dir/build

CMakeFiles/Blocksworld.dir/requires: CMakeFiles/Blocksworld.dir/main.cpp.o.requires
CMakeFiles/Blocksworld.dir/requires: CMakeFiles/Blocksworld.dir/Node.cpp.o.requires
CMakeFiles/Blocksworld.dir/requires: CMakeFiles/Blocksworld.dir/Tree.cpp.o.requires
CMakeFiles/Blocksworld.dir/requires: CMakeFiles/Blocksworld.dir/AStar.cpp.o.requires
CMakeFiles/Blocksworld.dir/requires: CMakeFiles/Blocksworld.dir/Heirustic.cpp.o.requires

.PHONY : CMakeFiles/Blocksworld.dir/requires

CMakeFiles/Blocksworld.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Blocksworld.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Blocksworld.dir/clean

CMakeFiles/Blocksworld.dir/depend:
	cd "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld" "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld" "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug" "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug" "/home/jrv/MyStuff/Artificial Intelligence/Pristine/Blocksworld/cmake-build-debug/CMakeFiles/Blocksworld.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Blocksworld.dir/depend

