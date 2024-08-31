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

# Include any dependencies generated for this target.
include DAQSystem/CMakeFiles/DAQSystem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.make

# Include the progress variables for this target.
include DAQSystem/CMakeFiles/DAQSystem.dir/progress.make

# Include the compile flags for this target's objects.
include DAQSystem/CMakeFiles/DAQSystem.dir/flags.make

DAQSystem/G__DAQSystem.cxx: include/DAQSystem/LinkDef.h
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/AbsADC.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/AbsTCB.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/AmoreADC.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupFADCS.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupFADCT.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupGADCS.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupGADCT.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupIADCT.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupMADCS.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupMiniTCB.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupSADCS.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupSADCT.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupTCB.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/AbsADC.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/AbsTCB.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/AmoreADC.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupFADCS.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupFADCT.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupGADCS.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupGADCT.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupIADCT.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupMADCS.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupMiniTCB.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupSADCS.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupSADCT.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/CupTCB.hh
DAQSystem/G__DAQSystem.cxx: include/DAQSystem/LinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__DAQSystem.cxx, libDAQSystem_rdict.pcm, libDAQSystem.rootmap"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/cmake -E env LD_LIBRARY_PATH=/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/install/lib /usr/bin/rootcling -v2 -f G__DAQSystem.cxx -s /home/frontend/DAQ/DAQ_cup/DAQSystem/libDAQSystem.so -rml libDAQSystem.so -rmf /home/frontend/DAQ/DAQ_cup/DAQSystem/libDAQSystem.rootmap -compilerI/usr/include/c++/11 -compilerI/usr/include/c++/11/x86_64-redhat-linux -compilerI/usr/include/c++/11/backward -compilerI/usr/lib/gcc/x86_64-redhat-linux/11/include -compilerI/usr/local/include -compilerI/usr/include -compilerI/usr/lib/gcc/x86_64-redhat-linux/11/include -compilerI/usr/local/include -compilerI/usr/include -I/usr/include/root -I/usr/include/libusb-1.0 -I/home/frontend/DAQ/DAQ_cup/include -I/home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem /home/frontend/DAQ/DAQ_cup/include/DAQSystem/AbsADC.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/AbsTCB.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/AmoreADC.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/CupFADCS.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/CupFADCT.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/CupGADCS.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/CupGADCT.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/CupIADCT.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/CupMADCS.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/CupMiniTCB.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/CupSADCS.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/CupSADCT.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/CupTCB.hh /home/frontend/DAQ/DAQ_cup/include/DAQSystem/LinkDef.h

DAQSystem/libDAQSystem_rdict.pcm: DAQSystem/G__DAQSystem.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate DAQSystem/libDAQSystem_rdict.pcm

DAQSystem/libDAQSystem.rootmap: DAQSystem/G__DAQSystem.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate DAQSystem/libDAQSystem.rootmap

DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsADC.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsADC.cc.o: CUPDAQ/DAQSystem/src/AbsADC.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsADC.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsADC.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsADC.cc.o -MF CMakeFiles/DAQSystem.dir/src/AbsADC.cc.o.d -o CMakeFiles/DAQSystem.dir/src/AbsADC.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/AbsADC.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsADC.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/AbsADC.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/AbsADC.cc > CMakeFiles/DAQSystem.dir/src/AbsADC.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsADC.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/AbsADC.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/AbsADC.cc -o CMakeFiles/DAQSystem.dir/src/AbsADC.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.o: CUPDAQ/DAQSystem/src/AbsTCB.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.o -MF CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.o.d -o CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/AbsTCB.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/AbsTCB.cc > CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/AbsTCB.cc -o CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.o: CUPDAQ/DAQSystem/src/AmoreADC.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.o -MF CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.o.d -o CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/AmoreADC.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/AmoreADC.cc > CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/AmoreADC.cc -o CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.o: CUPDAQ/DAQSystem/src/CupFADCS.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.o -MF CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.o.d -o CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupFADCS.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupFADCS.cc > CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupFADCS.cc -o CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.o: CUPDAQ/DAQSystem/src/CupFADCT.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.o -MF CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.o.d -o CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupFADCT.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupFADCT.cc > CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupFADCT.cc -o CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.o: CUPDAQ/DAQSystem/src/CupGADCS.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.o -MF CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.o.d -o CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupGADCS.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupGADCS.cc > CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupGADCS.cc -o CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.o: CUPDAQ/DAQSystem/src/CupGADCT.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.o -MF CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.o.d -o CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupGADCT.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupGADCT.cc > CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupGADCT.cc -o CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.o: CUPDAQ/DAQSystem/src/CupIADCT.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.o -MF CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.o.d -o CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupIADCT.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupIADCT.cc > CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupIADCT.cc -o CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.o: CUPDAQ/DAQSystem/src/CupMADCS.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.o -MF CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.o.d -o CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupMADCS.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupMADCS.cc > CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupMADCS.cc -o CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.o: CUPDAQ/DAQSystem/src/CupMiniTCB.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.o -MF CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.o.d -o CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupMiniTCB.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupMiniTCB.cc > CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupMiniTCB.cc -o CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.o: CUPDAQ/DAQSystem/src/CupSADCS.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.o -MF CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.o.d -o CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupSADCS.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupSADCS.cc > CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupSADCS.cc -o CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.o: CUPDAQ/DAQSystem/src/CupSADCT.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.o -MF CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.o.d -o CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupSADCT.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupSADCT.cc > CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupSADCT.cc -o CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupTCB.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupTCB.cc.o: CUPDAQ/DAQSystem/src/CupTCB.cc
DAQSystem/CMakeFiles/DAQSystem.dir/src/CupTCB.cc.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/src/CupTCB.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/src/CupTCB.cc.o -MF CMakeFiles/DAQSystem.dir/src/CupTCB.cc.o.d -o CMakeFiles/DAQSystem.dir/src/CupTCB.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupTCB.cc

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupTCB.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/src/CupTCB.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupTCB.cc > CMakeFiles/DAQSystem.dir/src/CupTCB.cc.i

DAQSystem/CMakeFiles/DAQSystem.dir/src/CupTCB.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/src/CupTCB.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem/src/CupTCB.cc -o CMakeFiles/DAQSystem.dir/src/CupTCB.cc.s

DAQSystem/CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.o: DAQSystem/CMakeFiles/DAQSystem.dir/flags.make
DAQSystem/CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.o: DAQSystem/G__DAQSystem.cxx
DAQSystem/CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.o: DAQSystem/CMakeFiles/DAQSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object DAQSystem/CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.o"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT DAQSystem/CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.o -MF CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.o.d -o CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.o -c /home/frontend/DAQ/DAQ_cup/DAQSystem/G__DAQSystem.cxx

DAQSystem/CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.i"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/DAQSystem/G__DAQSystem.cxx > CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.i

DAQSystem/CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.s"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/DAQSystem/G__DAQSystem.cxx -o CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.s

# Object files for target DAQSystem
DAQSystem_OBJECTS = \
"CMakeFiles/DAQSystem.dir/src/AbsADC.cc.o" \
"CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.o" \
"CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.o" \
"CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.o" \
"CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.o" \
"CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.o" \
"CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.o" \
"CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.o" \
"CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.o" \
"CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.o" \
"CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.o" \
"CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.o" \
"CMakeFiles/DAQSystem.dir/src/CupTCB.cc.o" \
"CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.o"

# External object files for target DAQSystem
DAQSystem_EXTERNAL_OBJECTS =

DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsADC.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/AbsTCB.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/AmoreADC.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCS.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/CupFADCT.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCS.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/CupGADCT.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/CupIADCT.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMADCS.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/CupMiniTCB.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCS.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/CupSADCT.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/src/CupTCB.cc.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/G__DAQSystem.cxx.o
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/build.make
DAQSystem/libDAQSystem.so: DAQSystem/CMakeFiles/DAQSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX shared library libDAQSystem.so"
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DAQSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
DAQSystem/CMakeFiles/DAQSystem.dir/build: DAQSystem/libDAQSystem.so
.PHONY : DAQSystem/CMakeFiles/DAQSystem.dir/build

DAQSystem/CMakeFiles/DAQSystem.dir/clean:
	cd /home/frontend/DAQ/DAQ_cup/DAQSystem && $(CMAKE_COMMAND) -P CMakeFiles/DAQSystem.dir/cmake_clean.cmake
.PHONY : DAQSystem/CMakeFiles/DAQSystem.dir/clean

DAQSystem/CMakeFiles/DAQSystem.dir/depend: DAQSystem/G__DAQSystem.cxx
DAQSystem/CMakeFiles/DAQSystem.dir/depend: DAQSystem/libDAQSystem.rootmap
DAQSystem/CMakeFiles/DAQSystem.dir/depend: DAQSystem/libDAQSystem_rdict.pcm
	cd /home/frontend/DAQ/DAQ_cup && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frontend/DAQ/DAQ_cup/CUPDAQ /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem /home/frontend/DAQ/DAQ_cup /home/frontend/DAQ/DAQ_cup/DAQSystem /home/frontend/DAQ/DAQ_cup/DAQSystem/CMakeFiles/DAQSystem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : DAQSystem/CMakeFiles/DAQSystem.dir/depend

