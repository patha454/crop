/**
 * @file unit_test.h
 * 
 * `unit_test.h` provides a minimal unit testing testing
 * framework.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 03/12/19.
 */


#ifndef UNIT_TEST_H_
#define UNIT_TEST_H_


/** 
 * @def PASS
 * 
 * `PASS` represents a passing test case.
 */
#define PASS 0


/**
 * @def FAIL
 * 
 * `FAIL` denotes a generic failing test case.
 * 
 * A failed test may return any other non-zero value to 
 * incidate specific failures.
 * 
 * @see typedef `test`.
 */  
#define FAIL 255


/**
 * @typedef unit_test
 * 
 * A `unit_test` returns zero on a pass, and non-zero on
 * failure. 
 * 
 * Unittests are expected to be self contained, so a `test`
 * takes no arguments.
 * 
 * The value returned on failure may be used to indicate
 * the cause of the failure, but this is semantics of
 * this is left for individual tests to decide.
 * 
 * Typically tests return a diffrent failure code for each
 * possible mode of failure in the test, which can be
 * determined by studying the test's source code.
 * 
 * @return Zero if the test passes, non-zero otherwise.
 */ 
typedef unsigned int (*unit_test)(void);


/**
 * @typedef test
 * 
 * A `test` associates a `unit_test` with a test name.
 * 
 * The test name should be a brief, human readable 
 * description of what the test checks.
 * 
 * A null test name acts as an empty test name. Null test
 * names are acceptable but discouraged as bad practice.
 */
typedef struct test_s
{
    unit_test test_case;
    const char* const test_name;
} test;


/**
 * @func execute_tests
 * 
 * `execute_tests` executes the unit tests.
 * 
 * A progress report will be printed on the standard out,
 * and failures will be noted on the standard error.
 * 
 * @param tests         Unit tests to be executed.
 * @param test_count    How many tests to be executed.
 */
void execute_tests(test* tests, unsigned int test_count);


#endif
