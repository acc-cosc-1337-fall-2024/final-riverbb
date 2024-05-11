//h

#include "die.h"

#ifndef ROLL_H
#define ROLL_H

// QUESTION 2 ///////////////////////////////

//In files Roll.h and Roll.cpp, create a Roll class to simulate rolling dice (two die).

class roll {

  public:
    roll(die& die1, die& die2);
    void roll_dice();
    int roll_value() const;

  private:
    die& die1;
    die& die2;
    int rolled_value;
};

/////////////////////////////////////////////

#endif
