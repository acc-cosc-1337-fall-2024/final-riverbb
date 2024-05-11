#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// QUESTION 1 ///////////////////////////////

TEST_CASE("die rolls return a value from 1 to 6") {
  die die;

  for (int i = 0; i < 10; i++) {
    int result = die.roll();
    REQUIRE(result >= 1);
    REQUIRE(result <= 6);
  }
}

/////////////////////////////////////////////
