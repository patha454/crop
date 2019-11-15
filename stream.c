/**
 * @file stream.c
 * 
 * 'stream.c' implements access to a generic stream structure.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 14/11/2019.
 */


#include <stdio.h>
#include <stdlib.h>
#include "stream.h"


/**
 * @struct stream_s
 * 
 * stream_s stores common data shared by all Crop streams.
 */
struct stream_s 
{
    /** @var name The name of the stream, which may be NULL. */
    char* name;
};


/**
 * @struct STREAM_H
 * 
 * STREAM_H implements a dummy type guaranteed to be the 
 * same size as stream_s.
 * 
 * STREAM_H is used, via a typedef in stream.h, to ensure
 * types with "extend" stream contain the correct fields.
 * 
 * @see stream.h
 */
struct STREAM_H
{   
    /** @var do_not_use
     * 
     * Padding equal to the length of struct stream_s.
     * 
     * @warning Do not use STREAM_H's members directly. Use
     * the stream functions in stream.h.
     */
    const unsigned char do_not_use[sizeof(struct stream_s)];
};

/**
 * @func new_stream
 * 
 * Allocates and initialises a new stream.
 * 
 * @param name  The name of the stream, which can be null.
 * @return An initialised stream, ready for use.
 */
stream new_stream(char* const name)
{
    stream s = malloc(sizeof(struct stream_s));
    if (!s)
    {
        exit(EXIT_FAILURE);
    }
    s->name = name;
    return s;
}


/**
 * @func free_stream
 * 
 * Deallocates and frees a stream.
 * 
 * @see stream.h 
 *
 * @param s     Stream to be free'd.
 * @return      A null stream pointer.
 */
stream free_stream(const stream s)
{
    free(s->name);
    free(s);
    return NULL;
}

/**
 * @func get_stream_name
 * 
 * Returns a read only pointer to the name  of the stream.
 * 
 * @param s     Stream to find the name off.
 * @return      A read only pointer to the name of stream s.
 */
const char* get_stream_name(const stream s)
{
    return (const char*) s->name;
}

/**
 * @func set_stream_name
 * 
 * Assigns a name to a specified stream.
 * 
 * @param s     The stream to (re)name.
 */
void set_stream_name(stream s)
{
    s = NULL;
    s += 1;
}