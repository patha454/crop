# CMakeLists.txt defines the Crop stream module
#
# Author: H Paterson.
# Copyright: Boost Software License 1.0.
# Date: 25/11/2019.

TARGET_SOURCES(crop
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include/stream/char_stream.h
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/char_stream.c
        ${CMAKE_CURRENT_SOURCE_DIR}/stream.c)
