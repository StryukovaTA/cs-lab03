#include "histogram.h"

#include <cassert>

void
test_positive() {
    double min = 0;
    double max = 0;
    find_minmax({1, 2, 3}, min, max);
    assert(min == 1);
    assert(max == 3);
}

void
test_threenegative()
{
    double min = 0;
    double max = 0;
    find_minmax({-1, -2, -3}, min, max);
    assert(min == -3);
    assert(max == -1);
}

void
test_threeequal()
{
    double min = 0;
    double max = 0;
    find_minmax({1, 1, 1}, min, max);
    assert(min == 1);
    assert(max == 1);
}

void
test_onenumber()
{
    double min = 0;
    double max = 0;
    find_minmax({1}, min, max);
    assert(min == 1);
    assert(max == 1);
}

void
test_empty()
{
    double min = 0;
    double max = 0;
    find_minmax({0}, min, max);
    assert(min == 0);
    assert(max == 0);
}


int
main()
{
    test_positive();
    test_threenegative();
    test_threeequal();
    test_onenumber();
    test_empty();
}

