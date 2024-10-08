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
include DAQ/CMakeFiles/usbreset.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include DAQ/CMakeFiles/usbreset.dir/compiler_depend.make

# Include the progress variables for this target.
include DAQ/CMakeFiles/usbreset.dir/progress.make

# Include the compile flags for this target's objects.
include DAQ/CMakeFiles/usbreset.dir/flags.make

DAQ/CMakeFiles/usbreset.dir/test/usbreset.cc.o: DAQ/CMakeFiles/usbreset.dir/flags.make
DAQ/CMakeFiles/usbreset.dir/test/usbreset.cc.o: /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/usbreset.cc
DAQ/CMakeFiles/usbreset.dir/test/usbreset.cc.o: DAQ/CMakeFiles/usbreset.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object DAQ/CMakeFiles/usbreset.dir/test/usbreset.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQ/CMakeFiles/usbreset.dir/test/usbreset.cc.o -MF CMakeFiles/usbreset.dir/test/usbreset.cc.o.d -o CMakeFiles/usbreset.dir/test/usbreset.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/usbreset.cc

DAQ/CMakeFiles/usbreset.dir/test/usbreset.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/usbreset.dir/test/usbreset.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/usbreset.cc > CMakeFiles/usbreset.dir/test/usbreset.cc.i

DAQ/CMakeFiles/usbreset.dir/test/usbreset.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/usbreset.dir/test/usbreset.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/test/usbreset.cc -o CMakeFiles/usbreset.dir/test/usbreset.cc.s

# Object files for target usbreset
usbreset_OBJECTS = \
"CMakeFiles/usbreset.dir/test/usbreset.cc.o"

# External object files for target usbreset
usbreset_EXTERNAL_OBJECTS =

DAQ/usbreset: DAQ/CMakeFiles/usbreset.dir/test/usbreset.cc.o
DAQ/usbreset: DAQ/CMakeFiles/usbreset.dir/build.make
DAQ/usbreset: DAQConfig/libDAQConfig.so
DAQ/usbreset: DAQSystem/libDAQSystem.so
DAQ/usbreset: DAQTrigger/libDAQTrigger.so
DAQ/usbreset: DAQUtils/libDAQUtils.so
DAQ/usbreset: OnlHistogramer/libOnlHistogramer.so
DAQ/usbreset: OnlObjs/libOnlObjs.so
DAQ/usbreset: RawObjs/libRawObjs.so
DAQ/usbreset: Notice/libNotice.so
DAQ/usbreset: DAQ/libDAQ.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libCore.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libImt.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libRIO.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libNet.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libHist.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libGraf.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libGraf3d.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libGpad.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libROOTDataFrame.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libTree.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libTreePlayer.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libRint.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libPostscript.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libMatrix.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libPhysics.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libMathCore.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libThread.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libMultiProc.so
DAQ/usbreset: /home/frontend/Software/root/v6.28.04/install/lib/libROOTVecOps.so
DAQ/usbreset: DAQ/CMakeFiles/usbreset.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable usbreset"
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/usbreset.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
DAQ/CMakeFiles/usbreset.dir/build: DAQ/usbreset
.PHONY : DAQ/CMakeFiles/usbreset.dir/build

DAQ/CMakeFiles/usbreset.dir/clean:
	cd /home/frontend/DAQ/DAQ_cup/build/DAQ && $(CMAKE_COMMAND) -P CMakeFiles/usbreset.dir/cmake_clean.cmake
.PHONY : DAQ/CMakeFiles/usbreset.dir/clean

DAQ/CMakeFiles/usbreset.dir/depend:
	cd /home/frontend/DAQ/DAQ_cup/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frontend/DAQ/DAQ_cup/CUPDAQ /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ /home/frontend/DAQ/DAQ_cup/build /home/frontend/DAQ/DAQ_cup/build/DAQ /home/frontend/DAQ/DAQ_cup/build/DAQ/CMakeFiles/usbreset.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : DAQ/CMakeFiles/usbreset.dir/depend

