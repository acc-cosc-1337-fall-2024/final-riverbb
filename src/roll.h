//h

#include "die.h"

#ifndef ROLL_H
#define ROLL_H

// QUESTION 2 ///////////////////////////////

//In files roll.h and roll.cpp, create a Roll class to simulate rolling dice (two die).

class Roll {

  public:
    Roll(die& die1, die& die2);
    void Roll_dice();
    int Roll_value() const;

  private:
    die& die1;
    die& die2;
    int Rolled_value;
};

/////////////////////////////////////////////

#endif
