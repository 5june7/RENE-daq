# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /home/frontend/DAQ/DAQ_cup/CUPDAQ

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/frontend/DAQ/DAQ_cup/build

# Include any dependencies generated for this target.
include DAQTrigger/CMakeFiles/DAQTrigger.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include DAQTrigger/CMakeFiles/DAQTrigger.dir/compiler_depend.make

# Include the progress variables for this target.
include DAQTrigger/CMakeFiles/DAQTrigger.dir/progress.make

# Include the compile flags for this target's objects.
include DAQTrigger/CMakeFiles/DAQTrigger.dir/flags.make

DAQTrigger/CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.o: DAQTrigger/CMakeFiles/DAQTrigger.dir/flags.make
DAQTrigger/CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.o: /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQTrigger/src/AbsSoftTrigger.cc
DAQTrigger/CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.o: DAQTrigger/CMakeFiles/DAQTrigger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object DAQTrigger/CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQTrigger && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQTrigger/CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.o -MF CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.o.d -o CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQTrigger/src/AbsSoftTrigger.cc

DAQTrigger/CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQTrigger && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQTrigger/src/AbsSoftTrigger.cc > CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.i

DAQTrigger/CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQTrigger && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQTrigger/src/AbsSoftTrigger.cc -o CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.s

DAQTrigger/CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.o: DAQTrigger/CMakeFiles/DAQTrigger.dir/flags.make
DAQTrigger/CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.o: /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQTrigger/src/CupSoftTrigger.cc
DAQTrigger/CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.o: DAQTrigger/CMakeFiles/DAQTrigger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object DAQTrigger/CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQTrigger && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQTrigger/CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.o -MF CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.o.d -o CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQTrigger/src/CupSoftTrigger.cc

DAQTrigger/CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQTrigger && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQTrigger/src/CupSoftTrigger.cc > CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.i

DAQTrigger/CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQTrigger && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQTrigger/src/CupSoftTrigger.cc -o CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.s

# Object files for target DAQTrigger
DAQTrigger_OBJECTS = \
"CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.o" \
"CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.o"

# External object files for target DAQTrigger
DAQTrigger_EXTERNAL_OBJECTS =

DAQTrigger/libDAQTrigger.so: DAQTrigger/CMakeFiles/DAQTrigger.dir/src/AbsSoftTrigger.cc.o
DAQTrigger/libDAQTrigger.so: DAQTrigger/CMakeFiles/DAQTrigger.dir/src/CupSoftTrigger.cc.o
DAQTrigger/libDAQTrigger.so: DAQTrigger/CMakeFiles/DAQTrigger.dir/build.make
DAQTrigger/libDAQTrigger.so: DAQTrigger/CMakeFiles/DAQTrigger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libDAQTrigger.so"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQTrigger && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DAQTrigger.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
DAQTrigger/CMakeFiles/DAQTrigger.dir/build: DAQTrigger/libDAQTrigger.so
.PHONY : DAQTrigger/CMakeFiles/DAQTrigger.dir/build

DAQTrigger/CMakeFiles/DAQTrigger.dir/clean:
	cd /home/frontend/DAQ/DAQ_cup/build/DAQTrigger && $(CMAKE_COMMAND) -P CMakeFiles/DAQTrigger.dir/cmake_clean.cmake
.PHONY : DAQTrigger/CMakeFiles/DAQTrigger.dir/clean

DAQTrigger/CMakeFiles/DAQTrigger.dir/depend:
	cd /home/frontend/DAQ/DAQ_cup/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frontend/DAQ/DAQ_cup/CUPDAQ /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQTrigger /home/frontend/DAQ/DAQ_cup/build /home/frontend/DAQ/DAQ_cup/build/DAQTrigger /home/frontend/DAQ/DAQ_cup/build/DAQTrigger/CMakeFiles/DAQTrigger.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : DAQTrigger/CMakeFiles/DAQTrigger.dir/depend

