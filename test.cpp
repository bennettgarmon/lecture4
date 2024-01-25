#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Remove twos", "[RemoveTwos]"){
    REQUIRE(RemoveTwos(16) == 1);
    REQUIRE(RemoveTwos(26) == 13);
    REQUIRE(RemoveTwos(52) == 13);
    REQUIRE(RemoveTwos(10) == 5);
    REQUIRE(RemoveTwos(18) == 9);
}
TEST_CASE ("Detect sign", "[Sign]"){
    REQUIRE(Sign(16) == 1);
    REQUIRE(Sign(-5) == -1);
    REQUIRE(Sign(52) == 1);
    REQUIRE(Sign(-10) == -1);
    REQUIRE(Sign(0) == 0);
}
TEST_CASE("Fibonacci generator", "[NthFibonacci]"){
    REQUIRE(NthFibonacci(1) == 1);
    REQUIRE(NthFibonacci(2) == 1);
    REQUIRE(NthFibonacci(3) == 2);
    REQUIRE(NthFibonacci(4) == 3);
    REQUIRE(NthFibonacci(5) == 5);
    REQUIRE(NthFibonacci(6) == 8);
    REQUIRE(NthFibonacci(7) == 13);
    REQUIRE(NthFibonacci(8) == 21);
    REQUIRE(NthFibonacci(9) == 34);
}