#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Removing substring", "[RemoveAllSubstrings]") {
  REQUIRE(RemoveAllSubstrings("Bananaaa", "na"));
  REQUIRE(RemoveAllSubstrings("Panama", "na"));
}