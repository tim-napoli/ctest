#ifndef _ctest_assert_h_
#define _ctest_assert_h_

#define TEST(_name, _expr) \
    if (_expr) { \
        LOG_SUCCESS(_name) \
    } else { \
        LOG_ERROR(_name) \
    }

#endif

