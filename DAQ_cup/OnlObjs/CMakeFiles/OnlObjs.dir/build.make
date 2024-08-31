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
include OnlObjs/CMakeFiles/OnlObjs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include OnlObjs/CMakeFiles/OnlObjs.dir/compiler_depend.make

# Include the progress variables for this target.
include OnlObjs/CMakeFiles/OnlObjs.dir/progress.make

# Include the compile flags for this target's objects.
include OnlObjs/CMakeFiles/OnlObjs.dir/flags.make

OnlObjs/G__OnlObjs.cxx: include/OnlObjs/LinkDef.h
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/ADCHeader.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/AbsADCRaw.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/BuiltEvent.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/FADCRawChannel.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/FADCRawEvent.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/SADCRawEvent.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/TimeCalConsts.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/ADCHeader.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/AbsADCRaw.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/BuiltEvent.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/FADCRawChannel.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/FADCRawEvent.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/SADCRawEvent.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/TimeCalConsts.hh
OnlObjs/G__OnlObjs.cxx: include/OnlObjs/LinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__OnlObjs.cxx, libOnlObjs_rdict.pcm, libOnlObjs.rootmap"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/cmake -E env LD_LIBRARY_PATH=/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/install/lib /usr/bin/rootcling -v2 -f G__OnlObjs.cxx -s /home/frontend/DAQ/DAQ_cup/OnlObjs/libOnlObjs.so -rml libOnlObjs.so -rmf /home/frontend/DAQ/DAQ_cup/OnlObjs/libOnlObjs.rootmap -compilerI/usr/include/c++/11 -compilerI/usr/include/c++/11/x86_64-redhat-linux -compilerI/usr/include/c++/11/backward -compilerI/usr/lib/gcc/x86_64-redhat-linux/11/include -compilerI/usr/local/include -compilerI/usr/include -compilerI/usr/lib/gcc/x86_64-redhat-linux/11/include -compilerI/usr/local/include -compilerI/usr/include -I/usr/include/root -I/usr/include/libusb-1.0 -I/home/frontend/DAQ/DAQ_cup/include -I/home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs /home/frontend/DAQ/DAQ_cup/include/OnlObjs/ADCHeader.hh /home/frontend/DAQ/DAQ_cup/include/OnlObjs/AbsADCRaw.hh /home/frontend/DAQ/DAQ_cup/include/OnlObjs/BuiltEvent.hh /home/frontend/DAQ/DAQ_cup/include/OnlObjs/FADCRawChannel.hh /home/frontend/DAQ/DAQ_cup/include/OnlObjs/FADCRawEvent.hh /home/frontend/DAQ/DAQ_cup/include/OnlObjs/SADCRawEvent.hh /home/frontend/DAQ/DAQ_cup/include/OnlObjs/TimeCalConsts.hh /home/frontend/DAQ/DAQ_cup/include/OnlObjs/LinkDef.h

OnlObjs/libOnlObjs_rdict.pcm: OnlObjs/G__OnlObjs.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate OnlObjs/libOnlObjs_rdict.pcm

OnlObjs/libOnlObjs.rootmap: OnlObjs/G__OnlObjs.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate OnlObjs/libOnlObjs.rootmap

OnlObjs/CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/flags.make
OnlObjs/CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.o: CUPDAQ/OnlObjs/src/ADCHeader.cc
OnlObjs/CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object OnlObjs/CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT OnlObjs/CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.o -MF CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.o.d -o CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/ADCHeader.cc

OnlObjs/CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/ADCHeader.cc > CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.i

OnlObjs/CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/ADCHeader.cc -o CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.s

OnlObjs/CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/flags.make
OnlObjs/CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.o: CUPDAQ/OnlObjs/src/AbsADCRaw.cc
OnlObjs/CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object OnlObjs/CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT OnlObjs/CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.o -MF CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.o.d -o CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/AbsADCRaw.cc

OnlObjs/CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/AbsADCRaw.cc > CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.i

OnlObjs/CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/AbsADCRaw.cc -o CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.s

OnlObjs/CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/flags.make
OnlObjs/CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.o: CUPDAQ/OnlObjs/src/BuiltEvent.cc
OnlObjs/CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object OnlObjs/CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT OnlObjs/CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.o -MF CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.o.d -o CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/BuiltEvent.cc

OnlObjs/CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/BuiltEvent.cc > CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.i

OnlObjs/CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/BuiltEvent.cc -o CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.s

OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/flags.make
OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.o: CUPDAQ/OnlObjs/src/FADCRawChannel.cc
OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.o -MF CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.o.d -o CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/FADCRawChannel.cc

OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/FADCRawChannel.cc > CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.i

OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/FADCRawChannel.cc -o CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.s

OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/flags.make
OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.o: CUPDAQ/OnlObjs/src/FADCRawEvent.cc
OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.o -MF CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.o.d -o CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/FADCRawEvent.cc

OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/FADCRawEvent.cc > CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.i

OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/FADCRawEvent.cc -o CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.s

OnlObjs/CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/flags.make
OnlObjs/CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.o: CUPDAQ/OnlObjs/src/SADCRawEvent.cc
OnlObjs/CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object OnlObjs/CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT OnlObjs/CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.o -MF CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.o.d -o CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/SADCRawEvent.cc

OnlObjs/CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/SADCRawEvent.cc > CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.i

OnlObjs/CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/SADCRawEvent.cc -o CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.s

OnlObjs/CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/flags.make
OnlObjs/CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.o: CUPDAQ/OnlObjs/src/TimeCalConsts.cc
OnlObjs/CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.o: OnlObjs/CMakeFiles/OnlObjs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object OnlObjs/CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.o"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT OnlObjs/CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.o -MF CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.o.d -o CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.o -c /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/TimeCalConsts.cc

OnlObjs/CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.i"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/TimeCalConsts.cc > CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.i

OnlObjs/CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.s"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs/src/TimeCalConsts.cc -o CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.s

OnlObjs/CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.o: OnlObjs/CMakeFiles/OnlObjs.dir/flags.make
OnlObjs/CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.o: OnlObjs/G__OnlObjs.cxx
OnlObjs/CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.o: OnlObjs/CMakeFiles/OnlObjs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object OnlObjs/CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.o"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT OnlObjs/CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.o -MF CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.o.d -o CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.o -c /home/frontend/DAQ/DAQ_cup/OnlObjs/G__OnlObjs.cxx

OnlObjs/CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.i"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frontend/DAQ/DAQ_cup/OnlObjs/G__OnlObjs.cxx > CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.i

OnlObjs/CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.s"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frontend/DAQ/DAQ_cup/OnlObjs/G__OnlObjs.cxx -o CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.s

# Object files for target OnlObjs
OnlObjs_OBJECTS = \
"CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.o" \
"CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.o" \
"CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.o" \
"CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.o" \
"CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.o" \
"CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.o" \
"CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.o" \
"CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.o"

# External object files for target OnlObjs
OnlObjs_EXTERNAL_OBJECTS =

OnlObjs/libOnlObjs.so: OnlObjs/CMakeFiles/OnlObjs.dir/src/ADCHeader.cc.o
OnlObjs/libOnlObjs.so: OnlObjs/CMakeFiles/OnlObjs.dir/src/AbsADCRaw.cc.o
OnlObjs/libOnlObjs.so: OnlObjs/CMakeFiles/OnlObjs.dir/src/BuiltEvent.cc.o
OnlObjs/libOnlObjs.so: OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawChannel.cc.o
OnlObjs/libOnlObjs.so: OnlObjs/CMakeFiles/OnlObjs.dir/src/FADCRawEvent.cc.o
OnlObjs/libOnlObjs.so: OnlObjs/CMakeFiles/OnlObjs.dir/src/SADCRawEvent.cc.o
OnlObjs/libOnlObjs.so: OnlObjs/CMakeFiles/OnlObjs.dir/src/TimeCalConsts.cc.o
OnlObjs/libOnlObjs.so: OnlObjs/CMakeFiles/OnlObjs.dir/G__OnlObjs.cxx.o
OnlObjs/libOnlObjs.so: OnlObjs/CMakeFiles/OnlObjs.dir/build.make
OnlObjs/libOnlObjs.so: OnlObjs/CMakeFiles/OnlObjs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX shared library libOnlObjs.so"
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OnlObjs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
OnlObjs/CMakeFiles/OnlObjs.dir/build: OnlObjs/libOnlObjs.so
.PHONY : OnlObjs/CMakeFiles/OnlObjs.dir/build

OnlObjs/CMakeFiles/OnlObjs.dir/clean:
	cd /home/frontend/DAQ/DAQ_cup/OnlObjs && $(CMAKE_COMMAND) -P CMakeFiles/OnlObjs.dir/cmake_clean.cmake
.PHONY : OnlObjs/CMakeFiles/OnlObjs.dir/clean

OnlObjs/CMakeFiles/OnlObjs.dir/depend: OnlObjs/G__OnlObjs.cxx
OnlObjs/CMakeFiles/OnlObjs.dir/depend: OnlObjs/libOnlObjs.rootmap
OnlObjs/CMakeFiles/OnlObjs.dir/depend: OnlObjs/libOnlObjs_rdict.pcm
	cd /home/frontend/DAQ/DAQ_cup && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frontend/DAQ/DAQ_cup/CUPDAQ /home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs /home/frontend/DAQ/DAQ_cup /home/frontend/DAQ/DAQ_cup/OnlObjs /home/frontend/DAQ/DAQ_cup/OnlObjs/CMakeFiles/OnlObjs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : OnlObjs/CMakeFiles/OnlObjs.dir/depend

