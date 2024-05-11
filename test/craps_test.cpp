#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "shooter.h"
#include "roll.h"
#include "die.h"

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

// QUESTION 2 ///////////////////////////////

TEST_CASE("roll returns a value from 2 to 12") {
  die die1;
  die die2;
  
  roll roll(die1, die2);
  
  for (int i = 0; i < 10; i++) {
    roll.roll_dice();
    int result = roll.roll_value();
    REQUIRE(result >= 2);
    REQUIRE(result <= 12);
  }
}

// QUESTION 3 ///////////////////////////////

TEST_CASE("shooter returns a value from 2 to 12") {
  die die1;
  die die2;
  shooter shooter;

  for (int i = 0; i < 10; ++i) {
    roll* roll = shooter.throw_dice(die1, die2);
    REQUIRE(roll != nullptr);

    int result = roll->roll_value();
    REQUIRE(result >= 2);
    REQUIRE(result <= 12);
  }
}

/////////////////////////////////////////////
