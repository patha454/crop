/**
 * @file log_settings.h
 * 
 * `log_settings.h` provides a setting structure for the
 * logger, and functions to manipulate the log's settings.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 23/11/19.
 */


#ifndef LOG_SETTINGS_H_
#define LOG_SETTINGS_H_


#include "level_streams.h"
#include "level_tags.h"


/**
 * @struct log_settings
 * 
 * `log_settings` is a full set of settings used by the 
 * logging system.
 */
struct log_settings
{
    level_tag_set* tags;
    level_stream_set* streams;
};


/**
 * @func get_log_settings
 * 
 * `get_log_settings` returns the current log settings.
 * 
 * @returns The settings the logger is using currently.
 */
const struct log_settings* get_log_settings();


#endif
