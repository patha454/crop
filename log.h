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

#include <stddef.h>

/**
 * @enum log_level
 * 
 * `log_level` describes the severity or urgency attached
 * to a particular log message.
 */
enum log_level
{
    /**
     * @var SILENT
     * 
     * These messages should not be added to the log.
     */
    SILENT,

    /**
     * @var DEBUG
     * 
     * Only log these messages if the `NDEBUG` macro is not
     * defined. 
     * 
     * Do not log these messages in a
     * production version, although the code will still be
     * included.
     */
    DEBUG,

    /**
     * @var VV_VERBOSE_INFO
     * 
     * "Very very verbose info" for spamming the user with 
     * text messages.
     */
    VV_VERBOSE_INFO,

    /**
     * @var V_VERBOSE_INFO
     * 
     * "Very verbose info" Additional logging for debugging
     * or studying normal execution.
     */
    V_VERBOSE_INFO,

    /** 
     * @var VERBOSE_INFO   
     * 
     * Additional or supplementary logging of routine events.
     */
    VERBOSE_INFO,

    /** 
     * @var INFO 
     *  
     * Standard or normal logging of routine events. 
     */
    INFO, 

    /**
     * @var ABNORMAL
     * 
     * Logging for abnormal contitions that are not
     * necessarily warnings. 
     */
    ABNORMAL, 

    /**
     * @var WARNING
     * 
     * Logging for events which may interfere with 
     * correct execution.
     */
    WARNING,

    /**
     * @var ERROR
     * 
     * Urgent warnings for events caused by or which cause
     * code units to not execute, or execute incorrectly.
     */
    ERROR,

    /**
     * @var CRITICAL_ERROR
     * 
     * Logging for errors which make the program terminate 
     * immediately, or unable to continue without user 
     * assistance. 
     */
    CRITICAL_ERROR,

    /** @var CATASTROPIC_ERROR
     * 
     * Logging for errors which cause damage to damage to
     * programs or data which is persistant beyond the
     * current execution of the program.
     */
    CATASTROPIC_ERROR
};

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
