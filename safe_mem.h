/**
* @file safe_mem.h
*
* 'safe_mem.h` provides error checking wrappers around 
* standard library memory manipulation functions.
*
* @author H Paterson.
* @copyright Boost Software License 1.0.
* @date 18/11/2019.
*/

#ifndef SAFE_MEM_H_
#define SAFE_MEM_H_

#include <stdlib.h>

/**
 * @func safe_calloc
 * 
 * `safe_calloc` provides an error checking wrapper around `calloc`.
 * 
 * `safe_calloc` will exit on failure, reporting an error.
 * 
 * @param size  Memory size to allocate, in bytes.
 * @return      A pointer to allocated memory.
 */
void* safe_calloc(size_t size);

/**
 * @func safe_malloc
 * 
 * Provides an error checking wrapper around `malloc`. 
 * 
 * `safe_malloc` will exit on failure, reporting an error.
 *
 * @param size  Memory size to allocate, in bytes.
 * @return      A pointer to allocated memory.
 */
void* safe_malloc(size_t size);

/**
 * @func safe_realloc
 * 
 * Provides an error checking wrapper around `realloc`.
 * 
 * `safe_realloc` will exit on failure, reporting an error.
 * @param ptr   Original pointer to reallocate.
 * @param size  Size of the reallocated memory, in bytes.
 * @return      A pointer to reallocated memory.
 */
void* safe_realloc(void* ptr, size_t size);

/**
 * @macro safe_free
 * 
 * `safe_free` an alias for `free`.
 * 
 * `safe_free` is reserved for future use.
 * 
 * @param ptr   Memory to deallocate.
 */

void (*safe_free) (void* ptr) = free;

#endif
