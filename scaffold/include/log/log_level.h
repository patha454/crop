/**
 * @file log_level.h
 * 
 * `log_level.h` provides a set of severity or verbosity levels.
 * 
 * The logger will adjust the display of messages, and 
 * direct messages to diffrent streams based on the level 
 * attached the the message when `log()` is called.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 23/11/19.
 */


#ifndef LOG_LEVEL_H_
#define LOG_LEVEL_H_


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


#endif
