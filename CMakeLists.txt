# CMakeLists.txt defines the Crop styling tool build.
#
# Author: H Paterson.
# Copyright: Boost Software License 1.0.
# Date: 15/11/2019.

CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

PROJECT(crop)

ADD_SUBDIRECTORY(scaffold)

ADD_LIBRARY(stream "")
SET_PROPERTY(TARGET stream PROPERTY C_STANDARD 90)
TARGET_SOURCES(stream 
    PRIVATE stream.c
    PUBLIC stream.h)

ADD_LIBRARY(charstream "")
SET_PROPERTY(TARGET charstream PROPERTY C_STANDARD 90)
TARGET_SOURCES(charstream
    PRIVATE stream)

ADD_EXECUTABLE(tester "")
SET_PROPERTY(TARGET tester PROPERTY C_STANDARD 90)

TARGET_INCLUDE_DIRECTORIES(tester
    PRIVATE 
        scaffold/include/log)

TARGET_LINK_LIBRARIES(tester 
    PRIVATE scaffold)
    
TARGET_SOURCES(tester
    PRIVATE
    scaffold/include/safe_mem/safe_mem.h
    test.c)

