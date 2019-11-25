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
 * @see `log.h`
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0
 * @date 23/11/19.
 */


#include "log.h"
#include "log_settings.h"


/**
 * @func _log
 * 
 * `_log` commits a message to the log. 
 * 
 * @param level     The urgency or verbosity of the message.
 * @param message   The message to log.
 * @param file      The file which generated the log message.
 * @param line      The origin of the message in `file`.
 */
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
