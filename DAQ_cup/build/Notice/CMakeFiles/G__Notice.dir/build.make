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

# Utility rule file for G__Notice.

# Include any custom commands dependencies for this target.
include Notice/CMakeFiles/G__Notice.dir/compiler_depend.make

# Include the progress variables for this target.
include Notice/CMakeFiles/G__Notice.dir/progress.make

Notice/CMakeFiles/G__Notice: Notice/G__Notice.cxx
Notice/CMakeFiles/G__Notice: Notice/libNotice_rdict.pcm
Notice/CMakeFiles/G__Notice: Notice/libNotice.rootmap

Notice/G__Notice.cxx: include/Notice/LinkDef.h
Notice/G__Notice.cxx: include/Notice/NoticeAMOREADC.hh
Notice/G__Notice.cxx: include/Notice/NoticeM64ADC.hh
Notice/G__Notice.cxx: include/Notice/NoticeM64ADCS.hh
Notice/G__Notice.cxx: include/Notice/NoticeMINITCB.hh
Notice/G__Notice.cxx: include/Notice/NoticeMUONDAQ.hh
Notice/G__Notice.cxx: include/Notice/NoticeNKFADC125.hh
Notice/G__Notice.cxx: include/Notice/NoticeNKFADC125S.hh
Notice/G__Notice.cxx: include/Notice/NoticeNKFADC500.hh
Notice/G__Notice.cxx: include/Notice/NoticeNKFADC500S.hh
Notice/G__Notice.cxx: include/Notice/NoticeTCB.hh
Notice/G__Notice.cxx: include/Notice/nkusb.hh
Notice/G__Notice.cxx: include/Notice/nkusbconst.hh
Notice/G__Notice.cxx: include/Notice/usb3com.hh
Notice/G__Notice.cxx: include/Notice/usb3comroot.hh
Notice/G__Notice.cxx: include/Notice/usb3tcb.hh
Notice/G__Notice.cxx: include/Notice/usb3tcbroot.hh
Notice/G__Notice.cxx: include/Notice/NoticeAMOREADC.hh
Notice/G__Notice.cxx: include/Notice/NoticeM64ADC.hh
Notice/G__Notice.cxx: include/Notice/NoticeM64ADCS.hh
Notice/G__Notice.cxx: include/Notice/NoticeMINITCB.hh
Notice/G__Notice.cxx: include/Notice/NoticeMUONDAQ.hh
Notice/G__Notice.cxx: include/Notice/NoticeNKFADC125.hh
Notice/G__Notice.cxx: include/Notice/NoticeNKFADC125S.hh
Notice/G__Notice.cxx: include/Notice/NoticeNKFADC500.hh
Notice/G__Notice.cxx: include/Notice/NoticeNKFADC500S.hh
Notice/G__Notice.cxx: include/Notice/NoticeTCB.hh
Notice/G__Notice.cxx: include/Notice/nkusb.hh
Notice/G__Notice.cxx: include/Notice/nkusbconst.hh
Notice/G__Notice.cxx: include/Notice/usb3com.hh
Notice/G__Notice.cxx: include/Notice/usb3comroot.hh
Notice/G__Notice.cxx: include/Notice/usb3tcb.hh
Notice/G__Notice.cxx: include/Notice/usb3tcbroot.hh
Notice/G__Notice.cxx: include/Notice/LinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/frontend/DAQ/DAQ_cup/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__Notice.cxx, libNotice_rdict.pcm, libNotice.rootmap"
	cd /home/frontend/DAQ/DAQ_cup/build/Notice && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/frontend/Software/root/v6.28.04/install/lib:/home/frontend/DAQ/DAQ_cup/install/lib:/home/frontend/Software/root/v6.28.04/install/lib /home/frontend/Software/root/v6.28.04/install/bin/rootcling -v2 -f G__Notice.cxx -s /home/frontend/DAQ/DAQ_cup/build/Notice/libNotice.so -rml libNotice.so -rmf /home/frontend/DAQ/DAQ_cup/build/Notice/libNotice.rootmap -compilerI/usr/include/c++/11 -compilerI/usr/include/c++/11/x86_64-redhat-linux -compilerI/usr/include/c++/11/backward -compilerI/usr/lib/gcc/x86_64-redhat-linux/11/include -compilerI/usr/local/include -compilerI/usr/include -compilerI/usr/lib/gcc/x86_64-redhat-linux/11/include -compilerI/usr/local/include -compilerI/usr/include -I/home/frontend/Software/root/v6.28.04/install/include -I/usr/include/libusb-1.0 -I/home/frontend/DAQ/DAQ_cup/build/include -I/home/frontend/DAQ/DAQ_cup/CUPDAQ/Notice /home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeAMOREADC.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeM64ADC.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeM64ADCS.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeMINITCB.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeMUONDAQ.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC125.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC125S.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC500.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC500S.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeTCB.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/nkusb.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/nkusbconst.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3com.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3comroot.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3tcb.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3tcbroot.hh /home/frontend/DAQ/DAQ_cup/build/include/Notice/LinkDef.h

Notice/libNotice_rdict.pcm: Notice/G__Notice.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate Notice/libNotice_rdict.pcm

Notice/libNotice.rootmap: Notice/G__Notice.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate Notice/libNotice.rootmap

G__Notice: Notice/CMakeFiles/G__Notice
G__Notice: Notice/G__Notice.cxx
G__Notice: Notice/libNotice.rootmap
G__Notice: Notice/libNotice_rdict.pcm
G__Notice: Notice/CMakeFiles/G__Notice.dir/build.make
.PHONY : G__Notice

# Rule to build all files generated by this target.
Notice/CMakeFiles/G__Notice.dir/build: G__Notice
.PHONY : Notice/CMakeFiles/G__Notice.dir/build

Notice/CMakeFiles/G__Notice.dir/clean:
	cd /home/frontend/DAQ/DAQ_cup/build/Notice && $(CMAKE_COMMAND) -P CMakeFiles/G__Notice.dir/cmake_clean.cmake
.PHONY : Notice/CMakeFiles/G__Notice.dir/clean

Notice/CMakeFiles/G__Notice.dir/depend:
	cd /home/frontend/DAQ/DAQ_cup/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frontend/DAQ/DAQ_cup/CUPDAQ /home/frontend/DAQ/DAQ_cup/CUPDAQ/Notice /home/frontend/DAQ/DAQ_cup/build /home/frontend/DAQ/DAQ_cup/build/Notice /home/frontend/DAQ/DAQ_cup/build/Notice/CMakeFiles/G__Notice.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Notice/CMakeFiles/G__Notice.dir/depend

