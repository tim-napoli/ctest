#include "ctest/ctest.h"

int main(void) {
    ctest_init();

    TEST("Success test", 1);
    TEST("Failure test", 0);

    ctest_end();
    return 0;
}

