# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_BINARY_DIR = /home/frontend/DAQ/DAQ_cup

# Utility rule file for G__DAQ.

# Include any custom commands dependencies for this target.
include DAQ/CMakeFiles/G__DAQ.dir/compiler_depend.make

# Include the progress variables for this target.
include DAQ/CMakeFiles/G__DAQ.dir/progress.make

DAQ/CMakeFiles/G__DAQ: DAQ/G__DAQ.cxx
DAQ/CMakeFiles/G__DAQ: DAQ/libDAQ_rdict.pcm
DAQ/CMakeFiles/G__DAQ: DAQ/libDAQ.rootmap

DAQ/G__DAQ.cxx: include/DAQ/LinkDef.h
DAQ/G__DAQ.cxx: include/DAQ/CupDAQManager.hh
DAQ/G__DAQ.cxx: include/DAQ/CupGeneralTCB.hh
DAQ/G__DAQ.cxx: include/DAQ/daqopt.hh
DAQ/G__DAQ.cxx: include/DAQ/CupDAQManager.hh
DAQ/G__DAQ.cxx: include/DAQ/CupGeneralTCB.hh
DAQ/G__DAQ.cxx: include/DAQ/daqopt.hh
DAQ/G__DAQ.cxx: include/DAQ/LinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__DAQ.cxx, libDAQ_rdict.pcm, libDAQ.rootmap"
	cd /home/frontend/DAQ/DAQ_cup/DAQ && /usr/bin/cmake -E env LD_LIBRARY_PATH=/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/install/lib /usr/bin/rootcling -v2 -f G__DAQ.cxx -s /home/frontend/DAQ/DAQ_cup/DAQ/libDAQ.so -rml libDAQ.so -rmf /home/frontend/DAQ/DAQ_cup/DAQ/libDAQ.rootmap -compilerI/usr/include/c++/11 -compilerI/usr/include/c++/11/x86_64-redhat-linux -compilerI/usr/include/c++/11/backward -compilerI/usr/lib/gcc/x86_64-redhat-linux/11/include -compilerI/usr/local/include -compilerI/usr/include -compilerI/usr/lib/gcc/x86_64-redhat-linux/11/include -compilerI/usr/local/include -compilerI/usr/include -I/usr/include/root -I/usr/include/libusb-1.0 -I/home/frontend/DAQ/DAQ_cup/include -I/home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ /home/frontend/DAQ/DAQ_cup/include/DAQ/CupDAQManager.hh /home/frontend/DAQ/DAQ_cup/include/DAQ/CupGeneralTCB.hh /home/frontend/DAQ/DAQ_cup/include/DAQ/daqopt.hh /home/frontend/DAQ/DAQ_cup/include/DAQ/LinkDef.h

DAQ/libDAQ_rdict.pcm: DAQ/G__DAQ.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate DAQ/libDAQ_rdict.pcm

DAQ/libDAQ.rootmap: DAQ/G__DAQ.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate DAQ/libDAQ.rootmap

G__DAQ: DAQ/CMakeFiles/G__DAQ
G__DAQ: DAQ/G__DAQ.cxx
G__DAQ: DAQ/libDAQ.rootmap
G__DAQ: DAQ/libDAQ_rdict.pcm
G__DAQ: DAQ/CMakeFiles/G__DAQ.dir/build.make
.PHONY : G__DAQ

# Rule to build all files generated by this target.
DAQ/CMakeFiles/G__DAQ.dir/build: G__DAQ
.PHONY : DAQ/CMakeFiles/G__DAQ.dir/build

DAQ/CMakeFiles/G__DAQ.dir/clean:
	cd /home/frontend/DAQ/DAQ_cup/DAQ && $(CMAKE_COMMAND) -P CMakeFiles/G__DAQ.dir/cmake_clean.cmake
.PHONY : DAQ/CMakeFiles/G__DAQ.dir/clean

DAQ/CMakeFiles/G__DAQ.dir/depend:
	cd /home/frontend/DAQ/DAQ_cup && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frontend/DAQ/DAQ_cup/CUPDAQ /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ /home/frontend/DAQ/DAQ_cup /home/frontend/DAQ/DAQ_cup/DAQ /home/frontend/DAQ/DAQ_cup/DAQ/CMakeFiles/G__DAQ.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : DAQ/CMakeFiles/G__DAQ.dir/depend

