//h

#ifndef SHOOTER_H
#define SHOOTER_H

#include "roll.h"
#include "die.h"
#include <vector>

// QUESTION 3 ///////////////////////////////

// In Shooter.h and Shooter.cpp , create a Shooter class to simulate shooting dice (a pair of die)

class shooter {

  public:
    shooter();
    Roll* throw_dice(die& die1, die& die2);
    void display_Rolled_values();
    ~shooter();

  private:
    std::vector<Roll*> Rolls;
};

/////////////////////////////////////////////

#endif
