//cpp

#include "roll.h"

// QUESTION 2 ///////////////////////////////

Roll::Roll(die& die1_ref, die& die2_ref) : die1(die1_ref), die2(die2_ref), Rolled_value(0) {}

void Roll::Roll_dice() {
  int Roll1 = die1.Roll();
  int Roll2 = die2.Roll();
  Rolled_value = Roll1 + Roll2;
}

int Roll::Roll_value() const {
  return Rolled_value;
}

/////////////////////////////////////////////
