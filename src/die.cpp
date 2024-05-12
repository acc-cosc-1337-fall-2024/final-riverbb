//cpp

#include "die.h"
#include <cstdlib>

// QUESTION 1 ///////////////////////////////

die::die() {
  sides = 6;
}

int die::Roll() {
  return rand() % sides + 1;
}

/////////////////////////////////////////////
