# CMakeLists.txt defines the safe_mem utility module.
#
# Author: H Paterson.
# Copyright: Boost Software License 1.0.
# Date: 25/11/2019.

TARGET_SOURCES(crop
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include/scaffold/safe_mem/safe_mem.h
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/safe_mem.c)
