#include "ctest/ctest.h"

unsigned int ctest_executed_tests = 0;
unsigned int ctest_success_tests = 0;
unsigned int ctest_failure_tests = 0;

void ctest_init(void) {
    ctest_executed_tests = 0;
    ctest_success_tests = 0;
    ctest_failure_tests = 0;
}

void ctest_end(void) {
    fprintf(stderr, "\n");
    fprintf(stderr,
            LOG_FMT_COLOR_GREEN "Passed tests: %u/%u\n" LOG_FMT_RESET,
            ctest_success_tests,
            ctest_executed_tests);
    fprintf(stderr,
            LOG_FMT_COLOR_RED "Failure tests: %u/%u\n" LOG_FMT_RESET,
            ctest_failure_tests,
            ctest_executed_tests);
}

