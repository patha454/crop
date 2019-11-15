/**
 * @file stream.h
 * 
 * stream.h provides access to generic streams. Other streams
 * are expected to be compatible with the stream.h's interface.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 14/11/2019.
 */


/**
 * @typedef stream
 * 
 * stream stores generic data used by all Crop streams.
 *  
 * stream is an opaque type and should only be accessed
 * using the functions in 'stream.h'.
 */
typedef struct stream_s* stream;


/**
 * @typedef STREAM_HANDLE
 * 
 * STREAM_HANDLE a dummy type guaranteed to be the same
 * size as the structure which implements stream.
 * 
 * STREAM_HANDLE is used to prefix/pad other structures
 * which "extend" stream so they contain the the fields
 * to "implement" stream.
 * 
 * @warning Data should never be read or set using 
 * STREAM_HANDLE. The result is undefined and will
 * probably corrupt the stream.
 */
typedef struct STREAM_H STREAM_HANDLE;


/**
 * @func new_stream
 * 
 * new_stream allocates and initialises a new stream.
 * 
 * @param name  The name of the stream, which can be null.
 * @return An initialised stream, ready for use.
 */
stream new_stream(char* const name);


/**
 * @func free_stream
 * 
 * Deallocates and frees a stream.
 * 
 * @note free_stream should not be used to operate on 
 * specialised streams: free_stream will not take into 
 * account other streams' specialized fields and will leak
 * them.
 * 
 *
 * @param s     Stream to be free'd.
 * @return      A null stream pointer.
 */
stream free_stream(const stream s);

/**
 * @func get_stream_name
 * 
 * Returns a read only pointer to the name  of the stream.
 * 
 * @param s     Stream to find the name off.
 * @return      A read only pointer to the name of stream s.
 */
const char* get_stream_name(const stream s);

/**
 * @func set_stream_name
 * 
 * Assigns a name to a specified stream.
 * 
 * @param s     The stream to (re)name.
 */
void set_stream_name(stream s);
