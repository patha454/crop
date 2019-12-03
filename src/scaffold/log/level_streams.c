/**
 * @file level_streams.h
 * 
 * `level_streams.h` implements maps log levels to streams.
 * 
 * `level_streams.h` provides and manipulates the mappings 
 * between logging levels and the streams logging messages
 * are sent to.
 * 
 * The user can customise the streams using the functions
 * in this header.
 * 
 * @see `level_streams.h`.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 23/11/2019.
 */


#include <assert.h>
#include "scaffold/log/level_streams.h"


/**
 * @func get_stream
 * 
 * `get_stream` retrieves the stream associated with
 * a particular logging level.
 * 
 * @param log_level     Retrieve the stream for `log_level`.
 * @param streams       The set of streams to query.
 * @return The stream used for writing out `log_level`.
 */
FILE* get_stream(const unsigned int log_level,
                       level_stream_set* streams)
{
    assert((*streams)[log_level].level == log_level);
    return *((*streams)[log_level].stream);
}
