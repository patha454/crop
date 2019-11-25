/**
 * @file test.c
 * 
 * `test.c` is a temporary file for testing linkage.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 25/11/19.
 */

#include <stdlib.h>
#include "log.h"

int main(void)
{
    log(DEBUG, "This is a test");
    return EXIT_SUCCESS;
}