#ifndef _ctest_ctest_h_
#define _ctest_ctest_h_

#include <stdio.h>

#if defined(linux)
# define LOG_FMT_COLOR_RED      "\e[31m"
# define LOG_FMT_COLOR_ORANGE   "\e[93m"
# define LOG_FMT_COLOR_GREEN    "\e[92m"
# define LOG_FMT_COLOR_BLUE     "\e[94m"
# define LOG_FMT_RESET          "\e[0m"
#else
# define LOG_FMT_COLOR_RED      ""
# define LOG_FMT_COLOR_ORANGE   ""
# define LOG_FMT_COLOR_GREEN    ""
# define LOG_FMT_COLOR_BLUE     ""
# define LOG_FMT_RESET          ""
#endif

#define LOG_ERROR(_log) \
    fprintf(stderr, \
            LOG_FMT_COLOR_RED "%-70sFailure\n" LOG_FMT_RESET, (_log));

#define LOG_SUCCESS(_log) \
    fprintf(stderr, \
            LOG_FMT_COLOR_GREEN "%-70sSuccess\n" LOG_FMT_RESET, (_log));

extern unsigned int ctest_executed_tests;
extern unsigned int ctest_success_tests;
extern unsigned int ctest_failure_tests;

void ctest_init(void);

void ctest_end(void);

#define TEST(_name, _expr) \
    ctest_executed_tests++; \
    if (_expr) { \
        ctest_success_tests++; \
        LOG_SUCCESS(_name) \
    } else { \
        ctest_failure_tests++; \
        LOG_ERROR(_name) \
    }

#endif

