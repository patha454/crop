/**
 * @file level_tags.h
 * 
 * `level_tags.h` provides tags for each logging level.
 * 
 * `level_tags.h` provides tags (human readable names) 
 * which are associated with each logging level of
 * detail/urgency (INFO, WARNING, ERROR...). 
 * 
 * These tags will typically be added to each message in
 * the log to identify which log level a message came 
 * from.
 * 
 * The user can customise the tags using the
 * functions this header.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 23/11/19. 
 */


#ifndef LEVEL_TAGS_H_
#define LEVEL_TAGS_H_


#include "log_level.h"


/**
 * @struct log_level_tag
 * 
 * `log_level_tag` associates a log level tag with a
 * logging level.
 */
struct log_level_tag
{
    const char* const string;
    const enum log_level level;
};


/**
 * @typedef log_level_tags
 * 
 * `log_level_tags` associates each log level available to
 * the logger with a human readable tag, or name.
 * 
 * @note The structures in these arrays are expected to be in
 * order of their enum value. This is enforced by asserts
 * where `level_tag_sets` are used.
 * 
 * @see `log_level.h` for the expected ordering.
 */
typedef struct log_level_tag level_tag_set[];


/**
 * @func get_level_tag
 * 
 * `get_level_tag` retrieves the logging level tag
 * associated with a particular logging level.
 * 
 * @param log_level     Retrieve the tag for `log_level`.
 * @param tags          The set of tags to query.
 * @return The tag used to describing `log_level`.
 */
const char* get_level_tag(const unsigned int log_level,
                          level_tag_set* tags);


#endif
