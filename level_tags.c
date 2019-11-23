/**
 * @file `level_tags.c` implements tags for each logging level.
 * 
 * `level_tags.h` provides tags (human readable names) 
 * which are associated with each logging level of
 * detail/urgency (INFO, WARNING, ERROR...). 
 * 
 * These tags will typically be added to each message in
 * the log to identify which log level a message came 
 * from.
 * 
 * @see `level_tags.h`
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 23/11/19. 
 */

#include <assert.h>
#include "level_tags.h"


/**
 * @func get_level_tag
 * 
 * `get_level_tag` retrieves the logging level tag
 * associated with a particular logging level.
 * 
 * @param log_level     Retrieve the tag for `log_level`.
 * @param tags          The set of tags to query.
 */
const char* get_level_tag(const unsigned int log_level,
                          level_tag_set* tags)
{
    assert((*tags)[log_level].level == log_level);
    return (*tags)[log_level].string;   
}
