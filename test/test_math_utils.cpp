#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "math_utils.h"

TEST_CASE("add is ok", "[math_utils]") {
  REQUIRE(add(3, 4) == 7);
  REQUIRE(add(-1, 1) == 0);
  REQUIRE(add(-3, -5) == -8);
}

TEST_CASE("subtract is ok", "[math_utils]") {
  REQUIRE(subtract(5,4) == 1);
  REQUIRE(subtract(-1, 1) == -2);
  REQUIRE(subtract(-3, -5) == 2);
}
