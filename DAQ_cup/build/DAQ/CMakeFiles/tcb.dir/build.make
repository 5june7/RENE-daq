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
include DAQ/CMakeFiles/tcb.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include DAQ/CMakeFiles/tcb.dir/compiler_depend.make

# Include the progress variables for this target.
include DAQ/CMakeFiles/tcb.dir/progress.make

# Include the compile flags for this target's objects.
include DAQ/CMakeFiles/tcb.dir/flags.make

DAQ/CMakeFiles/tcb.dir/test/tcb.cc.o: DAQ/CMakeFiles/tcb.dir/flags.make
DAQ/CMakeFiles/tcb.dir/test/tcb.cc.o: /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/tcb.cc
DAQ/CMakeFiles/tcb.dir/test/tcb.cc.o: DAQ/CMakeFiles/tcb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object DAQ/CMakeFiles/tcb.dir/test/tcb.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQ/CMakeFiles/tcb.dir/test/tcb.cc.o -MF CMakeFiles/tcb.dir/test/tcb.cc.o.d -o CMakeFiles/tcb.dir/test/tcb.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/tcb.cc

DAQ/CMakeFiles/tcb.dir/test/tcb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tcb.dir/test/tcb.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/tcb.cc > CMakeFiles/tcb.dir/test/tcb.cc.i

DAQ/CMakeFiles/tcb.dir/test/tcb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tcb.dir/test/tcb.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/tcb.cc -o CMakeFiles/tcb.dir/test/tcb.cc.s

# Object files for target tcb
tcb_OBJECTS = \
"CMakeFiles/tcb.dir/test/tcb.cc.o"

# External object files for target tcb
tcb_EXTERNAL_OBJECTS =

DAQ/tcb: DAQ/CMakeFiles/tcb.dir/test/tcb.cc.o
DAQ/tcb: DAQ/CMakeFiles/tcb.dir/build.make
DAQ/tcb: DAQConfig/libDAQConfig.so
DAQ/tcb: DAQSystem/libDAQSystem.so
DAQ/tcb: DAQTrigger/libDAQTrigger.so
DAQ/tcb: DAQUtils/libDAQUtils.so
DAQ/tcb: OnlHistogramer/libOnlHistogramer.so
DAQ/tcb: OnlObjs/libOnlObjs.so
DAQ/tcb: RawObjs/libRawObjs.so
DAQ/tcb: Notice/libNotice.so
DAQ/tcb: DAQ/libDAQ.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libCore.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libImt.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libRIO.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libNet.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libHist.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libGraf.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libGraf3d.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libGpad.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libROOTDataFrame.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libTree.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libTreePlayer.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libRint.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libPostscript.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libMatrix.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libPhysics.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libMathCore.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libThread.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libMultiProc.so
DAQ/tcb: /home/frontend/Software/root/v6.28.04/install/lib/libROOTVecOps.so
DAQ/tcb: DAQ/CMakeFiles/tcb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tcb"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tcb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
DAQ/CMakeFiles/tcb.dir/build: DAQ/tcb
.PHONY : DAQ/CMakeFiles/tcb.dir/build

DAQ/CMakeFiles/tcb.dir/clean:
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && $(CMAKE_COMMAND) -P CMakeFiles/tcb.dir/cmake_clean.cmake
.PHONY : DAQ/CMakeFiles/tcb.dir/clean

DAQ/CMakeFiles/tcb.dir/depend:
	cd /home/frontend/DAQ/DAQ_cup/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frontend/DAQ/DAQ_cup/CUPDAQ /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ /home/frontend/DAQ/DAQ_cup/build /home/frontend/DAQ/DAQ_cup/build/DAQ /home/frontend/DAQ/DAQ_cup/build/DAQ/CMakeFiles/tcb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : DAQ/CMakeFiles/tcb.dir/depend

