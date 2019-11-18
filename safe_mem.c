/**
* @file safe_mem.c
*
* `safe_mem.c` implements error checking wrappers around C
* standard library error checking functions.
*
* @see safe_mem.h
*
* @author H Paterson.
* @copyright Boost Software License 1.0.
* @date 18/11/2019.
*/

#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * @func safe_calloc
 * 
 * `safe_cealloc` implements an error checking wrapper around `calloc`.
 * 
 * @param num   Number of elements to allocate.
 * @param size  Size of one element.
 * @return      A pointer to allocated memory.
 */
void* safe_calloc(size_t num, size_t size)
{
    void* mem = calloc(num, size);
    if (mem == NULL)
    {
        fprintf(stderr,
                "%s: %s\n",
                "safe_calloc() could not allocate memory",
                strerror(errno));
        abort();
    }
    return mem;
}

/**
 * @func safe_malloc
 * 
 * `safe_malloc` implements an error checking wrapper around `malloc`.
 * 
 * @param size  Memory to allocate, in bytes.
 * @return      A pointer to allocated memory.
 */
void* safe_malloc(size_t size)
{
    void* mem = malloc(size);
    if (mem == NULL)
    {
        fprintf(stderr,
                "%s: %s\n",
                "safe_malloc() could not allocate memory",
                strerror(errno));
        abort();
    }
    return mem;
}

/**
 * @func safe_realloc
 * 
 * `safe_realloc` provides an error checking wrapper around `realloc`.
 * 
 * @param ptr   Original ponter for reallocation.
 * @param size  Size to reallocate `ptr` to, in bytes.
 * @return      A pointer to the reallocated memory.
 */
void* safe_realloc(void* ptr, size_t size)
{
    void* mem = realloc(ptr, size);
    if (mem == NULL)
    {
        fprintf(stderr,
                "%s: %s\n",
                "safe_realloc() could not allocate memory",
                strerror(errno));
        abort();
    }
    return mem;
}

