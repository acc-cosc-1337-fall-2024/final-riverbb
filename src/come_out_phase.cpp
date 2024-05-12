//cpp

#include "come_out_phase.h"

// QUESTION 4B //////////////////////////////

RollOutcome come_out_phase::get_outcome(Roll* Roll) const {
  int Roll_value = Roll->Roll_value();

  if (Roll_value == 7 || Roll_value == 11) {
    return RollOutcome::natural;
  } else if (Roll_value == 2 || Roll_value == 3 || Roll_value == 12) {
    return RollOutcome::craps;
  } else {
    return RollOutcome::point;
  }
}

/////////////////////////////////////////////
