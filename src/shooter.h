//h

#ifndef SHOOTER_H
#define SHOOTER_H

#include "roll.h"
#include <vector>

// QUESTION 3 ///////////////////////////////

// In Shooter.h and Shooter.cpp , create a Shooter class to simulate shooting dice (a pair of die)

class shooter {

  public:
    roll* throw_dice(die& die1, die& die2);
    void display_rolled_values();
    ~shooter();

  private:
    std::vector<roll*> rolls;
};

/////////////////////////////////////////////

#endif
