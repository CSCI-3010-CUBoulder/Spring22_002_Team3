#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
}
TEST_CASE ( "Removing substring", "[RemoveAllSubstrings]" ) {
    REQUIRE( RemoveAllSubstrings("Bananaaa", "na"));
    REQUIRE( RemoveAllSubstrings("Panama", "na"));
}
