/**
 * @file log_settings.c
 * 
 * `log_settings.c` impliments functions to examine and 
 * manipulate the settings used by the logger.
 * 
 * @see `log_settings.h`.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 24/11/19.
 */


#include "scaffold/log/default_log_settings.h"
#include "scaffold/log/log_settings.h"


/**
 * @func get_log_settings
 * 
 * `get_log_settings` returns the current log settings.
 * 
 * @returns The settings the logger is using currently.
 */
const struct log_settings* get_log_settings()
{
    return &default_log_settings;
}