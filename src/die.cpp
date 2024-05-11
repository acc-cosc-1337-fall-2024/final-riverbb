//cpp

#include "die.h"
#include <cstdlib>
#include <ctime>

// QUESTION 1 ///////////////////////////////

die::die() {
  sides = 6;
  srand(time(nullptr));
}

int die::roll() {
  return rand() % sides + 1;
}

/////////////////////////////////////////////
