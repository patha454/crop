/**
 * @file default_log_settings.c
 * 
 * `default_log_settings.c` defines the default settings
 * used by the logger.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 24/11/19.
 */


#include "scaffold/log/default_level_streams.h"
#include "scaffold/log/default_level_tags.h"
#include "scaffold/log/log_settings.h"


const struct log_settings default_log_settings =
{
    (level_tag_set*) &default_tags,
    (level_stream_set*) &default_streams
};
