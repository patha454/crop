# CMakeLists.txt defines the Crop styling tool build.
#
# Author: H Paterson.
# Copyright: Boost Software License 1.0.
# Date: 15/11/2019.

CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

PROJECT(crop)

ADD_LIBRARY(stream "")
SET_PROPERTY(TARGET stream PROPERTY C_STANDARD 90)
TARGET_SOURCES(stream 
    PRIVATE stream.c
    PUBLIC stream.h)

ADD_LIBRARY(charstream "")
SET_PROPERTY(TARGET stream PROPERTY C_STANDARD 90)
TARGET_SOURCES(charstream
    PRIVATE stream)

