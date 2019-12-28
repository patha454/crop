/**
 * @file dynamic_array.h
 * 
 * `dynamic_array.h` provides a dynamic array data type.
 * 
 * The dynamic array only stores void pointers to stored
 * objects, and does not manage their memory. Before the 
 * array is free'd, the user must free any memory used
 * by the objects stored in the arrays.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 20/12/19.
 */


#ifndef DYNAMIC_ARRAY_H_
#define DYNAMIC_ARRAY_H_


#include <stddef.h>


/**
 * @typedef DynamicArray
 * 
 * `DynamicArray` is a handle to a dynamic array.
 * 
 * The dynamic array should only be accessed through
 * this handel and the functions in provided.
 * 
 * Accessing or manipulating the `struct DynamicArray` 
 * directly could leave the dynamic array in an 
 * inconsistent state.
 */  
typedef struct DynamicArray* DynamicArray;


/**
 * @func new_dynamic_array()
 * 
 * `new_dynamic_array()` allocates a new dynamic array for
 * use.
 * 
 * @return  A new, empty dynamic array.
 */
DynamicArray new_dynamic_array();


/**
 * @func free_dynamic_array()
 * 
 * `free_dynamic_array()` deletes a dynamic array and 
 * releases any memory held by the array.
 * 
 * @note `free_dynamic_array` will not free any memory
 * held by objects the array stores. Only the memory
 * used by the array itself will be freed. 
 * 
 * To avoid a memory leak, the caller should free any
 * objects stored in the array, if necessary, before 
 * free_dynamic_array is called.
 *
 * @param   dynamic_array   The array to free.
 * @return  A null array is returned as a convience for
 * preventing dangling references to the array.
 */
DynamicArray free_dynamic_array(DynamicArray dynamic_array);


/**
 * @func index_dynamic_array
 * 
 * `index_dynamic_array` acts like the index operator ([]),
 * by returning the *index*th item in the array.
 * 
 * @param   dynamic_array The array to access.
 * @param   index         The index to access.
 * @return  The `index`th item in `dynamic_array`.
 */
void* index_dynamic_array(DynamicArray dynamic_array, size_t index);


#endif
