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
include DAQ/CMakeFiles/daq.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include DAQ/CMakeFiles/daq.dir/compiler_depend.make

# Include the progress variables for this target.
include DAQ/CMakeFiles/daq.dir/progress.make

# Include the compile flags for this target's objects.
include DAQ/CMakeFiles/daq.dir/flags.make

DAQ/CMakeFiles/daq.dir/test/daq.cc.o: DAQ/CMakeFiles/daq.dir/flags.make
DAQ/CMakeFiles/daq.dir/test/daq.cc.o: /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/daq.cc
DAQ/CMakeFiles/daq.dir/test/daq.cc.o: DAQ/CMakeFiles/daq.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object DAQ/CMakeFiles/daq.dir/test/daq.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQ/CMakeFiles/daq.dir/test/daq.cc.o -MF CMakeFiles/daq.dir/test/daq.cc.o.d -o CMakeFiles/daq.dir/test/daq.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/daq.cc

DAQ/CMakeFiles/daq.dir/test/daq.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/daq.dir/test/daq.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/daq.cc > CMakeFiles/daq.dir/test/daq.cc.i

DAQ/CMakeFiles/daq.dir/test/daq.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/daq.dir/test/daq.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/daq.cc -o CMakeFiles/daq.dir/test/daq.cc.s

# Object files for target daq
daq_OBJECTS = \
"CMakeFiles/daq.dir/test/daq.cc.o"

# External object files for target daq
daq_EXTERNAL_OBJECTS =

DAQ/daq: DAQ/CMakeFiles/daq.dir/test/daq.cc.o
DAQ/daq: DAQ/CMakeFiles/daq.dir/build.make
DAQ/daq: DAQConfig/libDAQConfig.so
DAQ/daq: DAQSystem/libDAQSystem.so
DAQ/daq: DAQTrigger/libDAQTrigger.so
DAQ/daq: DAQUtils/libDAQUtils.so
DAQ/daq: OnlHistogramer/libOnlHistogramer.so
DAQ/daq: OnlObjs/libOnlObjs.so
DAQ/daq: RawObjs/libRawObjs.so
DAQ/daq: Notice/libNotice.so
DAQ/daq: DAQ/libDAQ.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libCore.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libImt.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libRIO.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libNet.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libHist.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libGraf.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libGraf3d.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libGpad.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libROOTDataFrame.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libTree.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libTreePlayer.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libRint.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libPostscript.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libMatrix.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libPhysics.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libMathCore.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libThread.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libMultiProc.so
DAQ/daq: /home/frontend/Software/root/v6.28.04/install/lib/libROOTVecOps.so
DAQ/daq: DAQ/CMakeFiles/daq.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable daq"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/daq.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
DAQ/CMakeFiles/daq.dir/build: DAQ/daq
.PHONY : DAQ/CMakeFiles/daq.dir/build

DAQ/CMakeFiles/daq.dir/clean:
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && $(CMAKE_COMMAND) -P CMakeFiles/daq.dir/cmake_clean.cmake
.PHONY : DAQ/CMakeFiles/daq.dir/clean

DAQ/CMakeFiles/daq.dir/depend:
	cd /home/frontend/DAQ/DAQ_cup/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frontend/DAQ/DAQ_cup/CUPDAQ /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ /home/frontend/DAQ/DAQ_cup/build /home/frontend/DAQ/DAQ_cup/build/DAQ /home/frontend/DAQ/DAQ_cup/build/DAQ/CMakeFiles/daq.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : DAQ/CMakeFiles/daq.dir/depend

