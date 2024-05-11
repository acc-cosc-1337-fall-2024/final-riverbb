//cpp

#include "point_phase.h"

// QUESTION 4C //////////////////////////////

point_phase::point_phase(int p) : point(p) {}

rollOutcome point_phase::get_outcome(roll* roll) const {
  int roll_value = roll->roll_value();
  if (roll_value == point) {
    return rollOutcome::point;
  } else if (roll_value == 7) {
    return rollOutcome::seven_out;
  } else {
    return rollOutcome::nopoint;
  }
}

/////////////////////////////////////////////
