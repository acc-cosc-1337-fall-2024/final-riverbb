//cpp

#include "point_phase.h"

// QUESTION 4C //////////////////////////////

point_phase::point_phase(int p) : point(p) {}

RollOutcome point_phase::get_outcome(Roll* Roll) const {
  int Roll_value = Roll->Roll_value();
  if (Roll_value == point) {
    return RollOutcome::point;
  } else if (Roll_value == 7) {
    return RollOutcome::seven_out;
  } else {
    return RollOutcome::nopoint;
  }
}

/////////////////////////////////////////////
