/**
 * @file dynamic_array.c
 * 
 * `dynamic_array.c` implements a dynamic array data type, 
 * which operates by storing void pointers to data.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 20/12/19.
 */


#include <stddef.h>
#include "scaffold/safe_mem/safe_mem.h"
#include "scaffold/types/dynamic_array.h"


/**
 * @def INITIAL_ARRAY_SIZE
 * 
 * `INITIAL_ARRAY_SIZE` is the initial capacity of the
 * array.
 */
#define INITIAL_ARRAY_SIZE 8


struct DynamicArray
{
    /**
     * @var data
     * 
     * `data` points to an classic C array which is managed
     * by the dynamic array to provide dynamic services.
     */
    void** data;

    /**
     * @var length
     * 
     * `length` tracks the number of items stored in the 
     * dynamic array.
     */
    size_t length;

    /**
     * @var capacity
     * 
     * `capacity` tracks the number of items the
     * dynamic array currently has the capability to store.
     */
    size_t capacity;

};


/**
 * @func new_dynamic_array
 * 
 * Allocates a new dynamic array for use.
 * 
 * @return  A new, empty dynamic array.
 */
DynamicArray new_dynamic_array()
{
    struct DynamicArray* array;
    array = safe_malloc(sizeof(*array));
    array->capacity = INITIAL_ARRAY_SIZE;
    array->length = 0;
    array->data = safe_malloc(array->capacity * sizeof(array->data[0]));
    return (DynamicArray) array;
}


/**
 * @func free_dynamic_array
 * 
 * Deletes a dynamic array and releases any memory held
 * by the array.
 * 
 * @param   dynamic_array Free this dynamic array.
 * @returns A null pointer to avoid a dangeling reference.
 */
DynamicArray free_dynamic_array(DynamicArray dynamic_array)
{
    dynamic_array->capacity = 0;
    dynamic_array->length = 0;
    free(dynamic_array->data);
    dynamic_array->data = NULL;
    return NULL;
}


/**
 * @func index_dynamic_array
 * 
 * Returns the *index*th item in a dynamic array.
 * 
 * @param   dynamic_array The array to access.
 * @param   index         The index to return.
 * @return  The item at *index* in `dynamic_array`, or NULL
 *          if `index` is out of bounds.
 */
void* index_dynamic_array(DynamicArray dynamic_array, size_t index)
{
    if (index >= dynamic_array->length) 
    {
        return NULL;
    }
    return dynamic_array->data[index];
}

