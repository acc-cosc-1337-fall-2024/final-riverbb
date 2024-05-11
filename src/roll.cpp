//cpp

#include "roll.h"

// QUESTION 2 ///////////////////////////////

roll::roll(die& die1_ref, die& die2_ref) : die1(die1_ref), die2(die2_ref), rolled_value(0) {}

void roll::roll_dice() {
  die1.roll();
  die2.roll();
  rolled_value = die1.roll() + die2.roll();
}

int roll::roll_value() const {
  return rolled_value;
}

/////////////////////////////////////////////
