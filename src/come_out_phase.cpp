//cpp

#include "come_out_phase.h"

// QUESTION 4B //////////////////////////////

rollOutcome come_out_phase::get_outcome(roll* roll) const {
  int roll_value = roll->roll_value();

  if (roll_value == 7 || roll_value == 11) {
    return rollOutcome::natural;
  } else if (roll_value == 2 || roll_value == 3 || roll_value == 12) {
    return rollOutcome::craps;
  } else {
    return rollOutcome::point;
  }
}

/////////////////////////////////////////////
