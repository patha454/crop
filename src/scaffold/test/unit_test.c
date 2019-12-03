/**
 * @file unit_test.c
 * 
 * `unit_test.c` implements a minimal unit testing
 * framework.
 * 
 * @see `unit_test.h`
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 03/12/19
 */


#include <stdio.h>
#include "scaffold/test/unit_test.h"


/**
 * @func report_progress
 * 
 * `report_progress` reports the progress of testing to the
 * user.
 * 
 * @param tests_completed   The number of tests run so far.
 * @param tests_failed      The number of tests failed so far.
 * @param test_count        The total number of tests in this suite.
 */
void report_progress(unsigned int tests_completed,
                     unsigned int tests_failed,
                     unsigned int test_count)
{
    fprintf(stdout,
            "%d / %d tests executed, %d failed.\n",
            tests_completed,
            test_count,
            tests_failed);
    return;
}


void run_test(test test, unsigned int* tests_failed)
{
    unsigned int result;
    if ((result = test.test_case()) != PASS)
    {
        *tests_failed = *tests_failed + 1;
        fprintf(stderr,
                "'%s' failed (%d).\n",
                test.test_name == NULL ? "test" : test.test_name,
                result);
    }
    return;
}


/**
 * @func execute_tests
 * 
 * `execute_tests` executes a set of unit tests, printing
 * progress to the standard out, and failures to the
 * standard error.
 * 
 * @param tests  Unit tests to be executed.
 */
void execute_tests(test *tests[])
{
    unsigned int i;
    unsigned int test_count;
    unsigned int tests_failed;
    tests_failed = 0;
    test_count = sizeof(*tests) / sizeof(test);
    for (i = 0; i < test_count; i++)
    { 
        run_test((*tests)[i], &tests_failed);
        report_progress(i, tests_failed, test_count);
    }
}
