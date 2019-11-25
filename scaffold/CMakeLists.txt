# CMakeList.txt defines the Scaffold utility library.
#
# Author: H Paterson.
# Copyright: Boost Software License 1.0.
# Date: 25/11/2019.

CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

#ADD_SUBDIRECTORY(log)
#ADD_SUBDIRECTORY(safe_mem)

ADD_LIBRARY(scaffold SHARED "")
SET_PROPERTY(TARGET scaffold PROPERTY C_STANDARD 90)
SET_TARGET_PROPERTIES(scaffold PROPERTIES LINKER_LANGUAGE C)

TARGET_INCLUDE_DIRECTORIES(scaffold
    PRIVATE include/log
    PRIVATE include/safe_mem
)

TARGET_SOURCES(scaffold
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/safe_mem/safe_mem.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/log/log.h
    PRIVATE
        safe_mem/safe_mem.c

        include/log/default_level_streams.h
        include/log/default_level_tags.h
        include/log/default_log_settings.h
        include/log/level_streams.h
        include/log/level_tags.h
        include/log/log_level.h
        include/log/log_settings.h
        log/log.c
        log/default_level_streams.c
        log/default_level_tags.c
        log/default_log_settings.c
        log/level_streams.c
        log/level_tags.c
        log/log.c
        log/log_settings.c
)
