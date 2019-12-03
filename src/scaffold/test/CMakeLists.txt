# CMakeLists.txt defines the test utility module.
#
# Author: H Paterson.
# Copyright: Boost Software License 1.0.
# Date: 03/12/2019.

TARGET_SOURCES(libcrop
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include/scaffold/test/unit_test.h
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/unit_test.c)
