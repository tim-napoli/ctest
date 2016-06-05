#ifndef _ctest_log_h_
#define _ctest_log_h_

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
            LOG_FMT_COLOR_RED "%-50sFailure\n" LOG_FMT_RESET, (_log));

#define LOG_SUCCESS(_log) \
    fprintf(stderr, \
            LOG_FMT_COLOR_GREEN "%-50sSuccess\n" LOG_FMT_RESET, (_log));

#endif

