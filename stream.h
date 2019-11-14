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
 */
stream new_stream(void);
