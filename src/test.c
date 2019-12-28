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
#include "scaffold/log/log.h"
#include "scaffold/test/unit_test.h"

unsigned int testLog()
{
    return PASS;
}


unsigned int testSum()
{
    if (1 + 1 == 2)
    {
        return PASS;
    } else
    {
        return FAIL;
    }
    
}


unsigned int testFail()
{
    return FAIL;
}


test tests[] =
{
    {testLog, "Test the log"},
    {testSum, "Test summing"}
    /* {testFail, "Test failing"} */
};


int main(void)
{
    execute_tests((test*) &tests,
                  sizeof(tests) / sizeof(tests[0]));
    log(DEBUG, "This is a test");
    return EXIT_SUCCESS;
}
