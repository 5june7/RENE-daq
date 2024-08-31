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

# Utility rule file for G__DAQUtils.

# Include any custom commands dependencies for this target.
include DAQUtils/CMakeFiles/G__DAQUtils.dir/compiler_depend.make

# Include the progress variables for this target.
include DAQUtils/CMakeFiles/G__DAQUtils.dir/progress.make

DAQUtils/CMakeFiles/G__DAQUtils: DAQUtils/G__DAQUtils.cxx
DAQUtils/CMakeFiles/G__DAQUtils: DAQUtils/libDAQUtils_rdict.pcm
DAQUtils/CMakeFiles/G__DAQUtils: DAQUtils/libDAQUtils.rootmap

DAQUtils/G__DAQUtils.cxx: include/DAQUtils/LinkDef.h
DAQUtils/G__DAQUtils.cxx: include/DAQUtils/ConcurrentDeque.hh
DAQUtils/G__DAQUtils.cxx: include/DAQUtils/ELog.hh
DAQUtils/G__DAQUtils.cxx: include/DAQUtils/ELogger.hh
DAQUtils/G__DAQUtils.cxx: include/DAQUtils/ConcurrentDeque.hh
DAQUtils/G__DAQUtils.cxx: include/DAQUtils/ELog.hh
DAQUtils/G__DAQUtils.cxx: include/DAQUtils/ELogger.hh
DAQUtils/G__DAQUtils.cxx: include/DAQUtils/LinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__DAQUtils.cxx, libDAQUtils_rdict.pcm, libDAQUtils.rootmap"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQUtils && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/frontend/Software/root/v6.28.04/install/lib:/home/frontend/DAQ/DAQ_cup/install/lib:/home/frontend/Software/root/v6.28.04/install/lib /home/frontend/Software/root/v6.28.04/install/bin/rootcling -v2 -f G__DAQUtils.cxx -s /home/frontend/DAQ/DAQ_cup/build/DAQUtils/libDAQUtils.so -rml libDAQUtils.so -rmf /home/frontend/DAQ/DAQ_cup/build/DAQUtils/libDAQUtils.rootmap -compilerI/usr/include/c++/11 -compilerI/usr/include/c++/11/x86_64-redhat-linux -compilerI/usr/include/c++/11/backward -compilerI/usr/lib/gcc/x86_64-redhat-linux/11/include -compilerI/usr/local/include -compilerI/usr/include -compilerI/usr/lib/gcc/x86_64-redhat-linux/11/include -compilerI/usr/local/include -compilerI/usr/include -I/home/frontend/Software/root/v6.28.04/install/include -I/usr/include/libusb-1.0 -I/home/frontend/DAQ/DAQ_cup/build/include -I/home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQUtils /home/frontend/DAQ/DAQ_cup/build/include/DAQUtils/ConcurrentDeque.hh /home/frontend/DAQ/DAQ_cup/build/include/DAQUtils/ELog.hh /home/frontend/DAQ/DAQ_cup/build/include/DAQUtils/ELogger.hh /home/frontend/DAQ/DAQ_cup/build/include/DAQUtils/LinkDef.h

DAQUtils/libDAQUtils_rdict.pcm: DAQUtils/G__DAQUtils.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate DAQUtils/libDAQUtils_rdict.pcm

DAQUtils/libDAQUtils.rootmap: DAQUtils/G__DAQUtils.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate DAQUtils/libDAQUtils.rootmap

G__DAQUtils: DAQUtils/CMakeFiles/G__DAQUtils
G__DAQUtils: DAQUtils/G__DAQUtils.cxx
G__DAQUtils: DAQUtils/libDAQUtils.rootmap
G__DAQUtils: DAQUtils/libDAQUtils_rdict.pcm
G__DAQUtils: DAQUtils/CMakeFiles/G__DAQUtils.dir/build.make
.PHONY : G__DAQUtils

# Rule to build all files generated by this target.
DAQUtils/CMakeFiles/G__DAQUtils.dir/build: G__DAQUtils
.PHONY : DAQUtils/CMakeFiles/G__DAQUtils.dir/build

DAQUtils/CMakeFiles/G__DAQUtils.dir/clean:
	cd /home/frontend/DAQ/DAQ_cup/build/DAQUtils && $(CMAKE_COMMAND) -P CMakeFiles/G__DAQUtils.dir/cmake_clean.cmake
.PHONY : DAQUtils/CMakeFiles/G__DAQUtils.dir/clean

DAQUtils/CMakeFiles/G__DAQUtils.dir/depend:
	cd /home/frontend/DAQ/DAQ_cup/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frontend/DAQ/DAQ_cup/CUPDAQ /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQUtils /home/frontend/DAQ/DAQ_cup/build /home/frontend/DAQ/DAQ_cup/build/DAQUtils /home/frontend/DAQ/DAQ_cup/build/DAQUtils/CMakeFiles/G__DAQUtils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : DAQUtils/CMakeFiles/G__DAQUtils.dir/depend

