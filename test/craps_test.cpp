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

// QUESTION 4 ///////////////////////////////

// i don't think these work lol
TEST_CASE("come_out_phase get_outcome") {
  die die1;
  die die2;
  std::unique_ptr<come_out_phase> phase(new come_out_phase);

  SECTION("natural outcome 7 or 11") {
    std::unique_ptr<roll> roll(new roll(die1, die2));
    int result = roll->roll_value();
    REQUIRE((result == 7) || (result == 11));
    REQUIRE(phase->get_outcome(roll.get()) == rollOutcome::natural);
  }

  SECTION("craps outcome 2, 3, or 12") {
    std::unique_ptr<roll> roll(new roll(die1, die2));
    int result = roll->roll_value();
    REQUIRE((result == 2) || (result == 3) || (result == 12));
    REQUIRE(phase->get_outcome(roll.get()) == rollOutcome::craps);
  }

  SECTION("point outcome 4, 5, 6, 8, 9, or 10") {
    std::unique_ptr<roll> roll(new roll(die1, die2));
    int result = roll->roll_value();
    REQUIRE((result == 4) || (result == 5) || (result == 6) || (result == 8));
    REQUIRE((result == 9) || (result == 10));
  }
}

TEST_CASE("point_phase get_outcome") {
  die die1;
  die die2;

  SECTION("point outcome") {
    point_phase point_phase(5);
    std::unique_ptr<roll> roll(new roll(die1, die2));
    REQUIRE(roll->roll_value() != 5);
    REQUIRE(point_phase.get_outcome(roll.get()) == rollOutcome::nopoint);
    
    roll.reset(new roll(die1, die2, 5));
    REQUIRE(point_phase.get_outcome(roll.get()) == rollOutcome::point);
  }

  SECTION("seven_out outcome") {
    point_phase point_phase(8);
    std::unique_ptr<roll> roll(new roll(die1, die2, 7));
    REQUIRE(point_phase.get_outcome(roll.get()) == rollOutcome::seven_out);
  }

  SECTION("nopoint outcome") {
    point_phase point_phase(6);
    std::unique_ptr<roll> roll(new roll(die1, die2));
    REQUIRE(roll->roll_value() != 3);
    REQUIRE(point_phase.get_outcome(roll.get()) == rollOutcome::nopoint);
  }
}

/////////////////////////////////////////////
