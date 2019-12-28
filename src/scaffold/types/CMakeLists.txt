# CMakeLists.txt defines the Scaffold types module.
#
# Author: H Paterson.
# Copyright: Boost Software License 1.0.
# Date: 03/12/2019.

TARGET_SOURCES(crop
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include/scaffold/types/dynamic_array.h
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/dynamic_array.c)
