# CMakeLists.txt defines the Crop styling tool build.
#
# Author: H Paterson.
# Copyright: Boost Software License 1.0.
# Date: 25/11/2019.

ADD_LIBRARY(crop "")
SET_PROPERTY(TARGET crop PROPERTY C_STANDARD 90)

TARGET_INCLUDE_DIRECTORIES(crop 
    PRIVATE ${PROJECT_SOURCE_DIR}/include)


ADD_EXECUTABLE(tester "")
SET_PROPERTY(TARGET tester PROPERTY C_STANDARD 90)

TARGET_INCLUDE_DIRECTORIES(tester 
    PRIVATE ${PROJECT_SOURCE_DIR}/include)

TARGET_SOURCES(tester
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include/scaffold/log/log.h
    PRIVATE
        test.c)

TARGET_LINK_LIBRARIES(tester PRIVATE crop)

ADD_SUBDIRECTORY(scaffold)
ADD_SUBDIRECTORY(stream)
