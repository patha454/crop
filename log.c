/**
 * @file log.c
 * 
 * `log.c` implements an urgency based logging system.
 * 
 * `log.c` implements logging facilities for messages,
 * warnings, and errors. `log.c` can divert log messages to
 * diffrent streams, or suppresed them based on their 
 * severity.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0
 * @date 23/11/19.
 */


#include <assert.h>
#include <stdio.h>
#include "log.h"
#include "level_tags.h"
#include "default_level_tags.h"
#include "level_streams.h"
#include "default_level_streams.h"


typedef struct log_settings_s
{
    level_tag_set* tags;
    level_stream_set* streams;
} log_settings;


static const log_settings default_settings =
{
    (level_tag_set*) &default_tags,
    (level_stream_set*) &default_streams
};


static const log_settings* get_log_settings()
{
    return &default_settings;
}

void _log(enum log_level level,
          const char* const message,
          const char* const file,
          const unsigned int line)
{
    fprintf(get_level_stream(level, (get_log_settings()->streams)),
            "[ %s ] %s (%s:%d)\n",
            get_level_tag(level, (get_log_settings()->tags)),
            message,
            file,
            line);
}


int main(void)
{
    log(DEBUG, "This is a test");
    return 0;
}
