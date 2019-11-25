# CMakeLists.txt defines the Scaffold logging module.
#
# Author: H Paterson.
# Copyright: Boost Software License 1.0.
# Date: 25/11/2019.

TARGET_SOURCES(libcrop
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include/scaffold/log/log.h
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include/scaffold/log/default_level_streams.h
        ${PROJECT_SOURCE_DIR}/include/scaffold/log/default_level_tags.h
        ${PROJECT_SOURCE_DIR}/include/scaffold/log/default_log_settings.h
        ${PROJECT_SOURCE_DIR}/include/scaffold/log/level_streams.h
        ${PROJECT_SOURCE_DIR}/include/scaffold/log/level_tags.h
        ${PROJECT_SOURCE_DIR}/include/scaffold/log/log_level.h
        ${PROJECT_SOURCE_DIR}/include/scaffold/log/log_settings.h
        ${PROJECT_SOURCE_DIR}/include/scaffold/log/log.h
        ${CMAKE_CURRENT_SOURCE_DIR}/default_level_streams.c
        ${CMAKE_CURRENT_SOURCE_DIR}/default_level_tags.c
        ${CMAKE_CURRENT_SOURCE_DIR}/default_log_settings.c
        ${CMAKE_CURRENT_SOURCE_DIR}/level_streams.c
        ${CMAKE_CURRENT_SOURCE_DIR}/level_tags.c
        ${CMAKE_CURRENT_SOURCE_DIR}/log_settings.c
        ${CMAKE_CURRENT_SOURCE_DIR}/log.c)