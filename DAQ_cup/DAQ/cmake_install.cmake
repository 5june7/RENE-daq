# Install script for directory: /home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/frontend/DAQ/DAQ_cup/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/lib/libDAQ.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/lib" TYPE PROGRAM FILES "/home/frontend/DAQ/DAQ_cup/DAQ/libDAQ.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/lib/libDAQ_rdict.pcm;/home/frontend/DAQ/DAQ_cup/install/lib/libDAQ.rootmap")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/lib" TYPE FILE FILES
    "/home/frontend/DAQ/DAQ_cup/DAQ/libDAQ_rdict.pcm"
    "/home/frontend/DAQ/DAQ_cup/DAQ/libDAQ.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/daq" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/daq")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/daq"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/bin/daq")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/bin" TYPE EXECUTABLE FILES "/home/frontend/DAQ/DAQ_cup/DAQ/daq")
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/daq" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/daq")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/daq"
         OLD_RPATH "/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/DAQConfig:/home/frontend/DAQ/DAQ_cup/DAQSystem:/home/frontend/DAQ/DAQ_cup/DAQTrigger:/home/frontend/DAQ/DAQ_cup/DAQUtils:/home/frontend/DAQ/DAQ_cup/OnlHistogramer:/home/frontend/DAQ/DAQ_cup/OnlObjs:/home/frontend/DAQ/DAQ_cup/RawObjs:/home/frontend/DAQ/DAQ_cup/Notice:/home/frontend/DAQ/DAQ_cup/DAQ:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/daq")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/merger" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/merger")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/merger"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/bin/merger")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/bin" TYPE EXECUTABLE FILES "/home/frontend/DAQ/DAQ_cup/DAQ/merger")
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/merger" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/merger")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/merger"
         OLD_RPATH "/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/DAQConfig:/home/frontend/DAQ/DAQ_cup/DAQSystem:/home/frontend/DAQ/DAQ_cup/DAQTrigger:/home/frontend/DAQ/DAQ_cup/DAQUtils:/home/frontend/DAQ/DAQ_cup/OnlHistogramer:/home/frontend/DAQ/DAQ_cup/OnlObjs:/home/frontend/DAQ/DAQ_cup/RawObjs:/home/frontend/DAQ/DAQ_cup/Notice:/home/frontend/DAQ/DAQ_cup/DAQ:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/merger")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulldaq" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulldaq")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulldaq"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/bin/nulldaq")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/bin" TYPE EXECUTABLE FILES "/home/frontend/DAQ/DAQ_cup/DAQ/nulldaq")
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulldaq" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulldaq")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulldaq"
         OLD_RPATH "/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/DAQConfig:/home/frontend/DAQ/DAQ_cup/DAQSystem:/home/frontend/DAQ/DAQ_cup/DAQTrigger:/home/frontend/DAQ/DAQ_cup/DAQUtils:/home/frontend/DAQ/DAQ_cup/OnlHistogramer:/home/frontend/DAQ/DAQ_cup/OnlObjs:/home/frontend/DAQ/DAQ_cup/RawObjs:/home/frontend/DAQ/DAQ_cup/Notice:/home/frontend/DAQ/DAQ_cup/DAQ:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulldaq")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nullmerger" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nullmerger")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nullmerger"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/bin/nullmerger")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/bin" TYPE EXECUTABLE FILES "/home/frontend/DAQ/DAQ_cup/DAQ/nullmerger")
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nullmerger" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nullmerger")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nullmerger"
         OLD_RPATH "/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/DAQConfig:/home/frontend/DAQ/DAQ_cup/DAQSystem:/home/frontend/DAQ/DAQ_cup/DAQTrigger:/home/frontend/DAQ/DAQ_cup/DAQUtils:/home/frontend/DAQ/DAQ_cup/OnlHistogramer:/home/frontend/DAQ/DAQ_cup/OnlObjs:/home/frontend/DAQ/DAQ_cup/RawObjs:/home/frontend/DAQ/DAQ_cup/Notice:/home/frontend/DAQ/DAQ_cup/DAQ:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nullmerger")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulltcb" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulltcb")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulltcb"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/bin/nulltcb")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/bin" TYPE EXECUTABLE FILES "/home/frontend/DAQ/DAQ_cup/DAQ/nulltcb")
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulltcb" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulltcb")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulltcb"
         OLD_RPATH "/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/DAQConfig:/home/frontend/DAQ/DAQ_cup/DAQSystem:/home/frontend/DAQ/DAQ_cup/DAQTrigger:/home/frontend/DAQ/DAQ_cup/DAQUtils:/home/frontend/DAQ/DAQ_cup/OnlHistogramer:/home/frontend/DAQ/DAQ_cup/OnlObjs:/home/frontend/DAQ/DAQ_cup/RawObjs:/home/frontend/DAQ/DAQ_cup/Notice:/home/frontend/DAQ/DAQ_cup/DAQ:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/nulltcb")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/stddaq" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/stddaq")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/stddaq"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/bin/stddaq")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/bin" TYPE EXECUTABLE FILES "/home/frontend/DAQ/DAQ_cup/DAQ/stddaq")
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/stddaq" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/stddaq")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/stddaq"
         OLD_RPATH "/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/DAQConfig:/home/frontend/DAQ/DAQ_cup/DAQSystem:/home/frontend/DAQ/DAQ_cup/DAQTrigger:/home/frontend/DAQ/DAQ_cup/DAQUtils:/home/frontend/DAQ/DAQ_cup/OnlHistogramer:/home/frontend/DAQ/DAQ_cup/OnlObjs:/home/frontend/DAQ/DAQ_cup/RawObjs:/home/frontend/DAQ/DAQ_cup/Notice:/home/frontend/DAQ/DAQ_cup/DAQ:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/stddaq")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcb" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcb")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcb"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/bin/tcb")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/bin" TYPE EXECUTABLE FILES "/home/frontend/DAQ/DAQ_cup/DAQ/tcb")
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcb" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcb")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcb"
         OLD_RPATH "/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/DAQConfig:/home/frontend/DAQ/DAQ_cup/DAQSystem:/home/frontend/DAQ/DAQ_cup/DAQTrigger:/home/frontend/DAQ/DAQ_cup/DAQUtils:/home/frontend/DAQ/DAQ_cup/OnlHistogramer:/home/frontend/DAQ/DAQ_cup/OnlObjs:/home/frontend/DAQ/DAQ_cup/RawObjs:/home/frontend/DAQ/DAQ_cup/Notice:/home/frontend/DAQ/DAQ_cup/DAQ:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcb")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcbdaq" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcbdaq")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcbdaq"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/bin/tcbdaq")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/bin" TYPE EXECUTABLE FILES "/home/frontend/DAQ/DAQ_cup/DAQ/tcbdaq")
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcbdaq" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcbdaq")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcbdaq"
         OLD_RPATH "/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/DAQConfig:/home/frontend/DAQ/DAQ_cup/DAQSystem:/home/frontend/DAQ/DAQ_cup/DAQTrigger:/home/frontend/DAQ/DAQ_cup/DAQUtils:/home/frontend/DAQ/DAQ_cup/OnlHistogramer:/home/frontend/DAQ/DAQ_cup/OnlObjs:/home/frontend/DAQ/DAQ_cup/RawObjs:/home/frontend/DAQ/DAQ_cup/Notice:/home/frontend/DAQ/DAQ_cup/DAQ:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/tcbdaq")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/usbreset" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/usbreset")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/usbreset"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/bin/usbreset")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/bin" TYPE EXECUTABLE FILES "/home/frontend/DAQ/DAQ_cup/DAQ/usbreset")
  if(EXISTS "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/usbreset" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/usbreset")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/usbreset"
         OLD_RPATH "/usr/lib64/root:/home/frontend/DAQ/DAQ_cup/DAQConfig:/home/frontend/DAQ/DAQ_cup/DAQSystem:/home/frontend/DAQ/DAQ_cup/DAQTrigger:/home/frontend/DAQ/DAQ_cup/DAQUtils:/home/frontend/DAQ/DAQ_cup/OnlHistogramer:/home/frontend/DAQ/DAQ_cup/OnlObjs:/home/frontend/DAQ/DAQ_cup/RawObjs:/home/frontend/DAQ/DAQ_cup/Notice:/home/frontend/DAQ/DAQ_cup/DAQ:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/frontend/DAQ/DAQ_cup/install/bin/usbreset")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/config")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install" TYPE DIRECTORY FILES "/home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/frontend/DAQ/DAQ_cup/install/bin/executedaq.sh;/home/frontend/DAQ/DAQ_cup/install/bin/executenulldaq.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/frontend/DAQ/DAQ_cup/install/bin" TYPE PROGRAM FILES
    "/home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/scripts/executedaq.sh"
    "/home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ/scripts/executenulldaq.sh"
    )
endif()

