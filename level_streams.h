/**
 * @file `level_streams.h`
 * 
 * `level_streams.h` maps from log levels to streams.
 * 
 * `level_streams.h` provides and manipulates the mappings 
 * between logging levels and the streams logging messages
 * are sent to.
 * 
 * The user can customise the streams using the functions
 * in this header.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 23/11/2019.
 */


#ifndef LEVEL_STREAMS_H_
#define LEVEL_STREAMS_H_


#include <stdio.h>
#include "log_level.h"


/**
 * @struct log_level_stream
 * 
 * `log_level_stream` associates a stream with a logging
 * level.
 */
struct log_level_stream
{
    FILE** stream;
    const enum log_level level;
};


/**
 * @typedef level_stream_set
 * 
 * `level_stream_set` maps each log level to a stream.
 * 
 * These mappings control which stream a log message is
 * written to.
 * 
 * @note The strucutres in `level_stream_set` are expected
 * to be in order of their enum value. This is enforced by
 * asserts where `level_tag_streams` are used.
 * 
 * @see `log_level.h` and `default_level_streams.h` for the
 * expected ordering.
 */
typedef struct log_level_stream level_stream_set[];


/**
 * @func get_level_stream
 * 
 * `get_level_stream` retrieves the stream associated with
 * a particular logging level.
 * 
 * @param log_level     Retrieve the stream for `log_level`.
 * @param streams       The set of streams to query.
 * @return The stream used for writing out `log_level`.
 */
FILE* get_level_stream(const unsigned int log_level,
                       level_stream_set* streams);


#endif
