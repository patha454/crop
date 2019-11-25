/**
 * @file default_level_streams.c
 * 
 * `default_level_streams.c` implements a set of default streams
 * for each logging level.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 23/11/19.
 */


#include "scaffold/log/level_streams.h"


/**
 * @var default_streams
 * 
 * Logging level to stream mappings used by the logger as
 * default settings.
 */
const struct log_level_stream default_streams[] = 
{
    {NULL,      SILENT},
    {&stderr,   DEBUG},
    {&stderr,   VV_VERBOSE_INFO},
    {&stderr,   V_VERBOSE_INFO},
    {&stderr,   VERBOSE_INFO},
    {&stderr,   INFO},
    {&stderr,   WARNING},
    {&stderr,   ERROR},
    {&stderr,   CRITICAL_ERROR},
    {&stderr,   CATASTROPIC_ERROR}
};
