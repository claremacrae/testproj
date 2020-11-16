#include <doctest/doctest.h>
#include "../testproj_lib/util.h"

TEST_CASE("Add should add two ints") {
    CHECK(add(5, 5) == 10);
}