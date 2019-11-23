/**
 * @file log.h
 * 
 * `log.h` provides an urgency based logging system.
 * 
 * `log.h` provides error logging facilities, and can divert
 * errors to diffrent streams (or suppress them), based on
 * their severity. 
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 23/11/19.
 */


#ifndef LOG_H_
#define LOG_H_


#include <stddef.h>
#include "log_level.h"


/**
 * @func _log
 * 
 * `_log` commits a message to the log. `_log` requires
 * supplementary information such as the file which 
 * generated the message.
 * 
 * @note `_log` is normally for internal use only. Users 
 * should use the macro `log` to generate log messages.
 */
void _log(enum log_level level,
          const char* const message,
          const char* const file,
          const unsigned int line);


/**
 * @def log
 * 
 * `log` sends a message to the log, which may be sent
 * into zero or more streams depending on the log level
 * and the logger's settings.
 * 
 * @note `log` includes macros which should be expanded
 * inside the file `log` is used in, to generate data on
 * the source of the message.
 * 
 * @param level     The `log_level` urgency of the message.
 * @param message   The message string to log.
 */
#define log(level, message) (_log(level, \
                                  message, \
                                  __FILE__, \
                                  __LINE__))


#endif
