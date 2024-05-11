//cpp

#include "shooter.h"
#include <iostream>

// QUESTION 3 ///////////////////////////////

roll* shooter::throw_dice(die &die1, die &die2) {
  roll* roll = new class roll(die1, die2);
  roll->roll_dice();
  rolls.push_back(roll);
  return roll;
}

void shooter::display_rolled_values() {
  for (roll* roll : rolls) {
    std::cout << "Rolled value: " << roll->roll_value();
  }
}

shooter::~shooter() {
  for (roll* roll : rolls) {
    delete roll;
  }
}

/////////////////////////////////////////////
