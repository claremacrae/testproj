#include <doctest/doctest.h>
#include "../util.h"

TEST_CASE("Add should add two ints") {
    CHECK(add(5, 5) == 10);
}