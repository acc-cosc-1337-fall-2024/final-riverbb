//h

#ifndef PHASE_H
#define PHASE_H

#include "roll.h"
#include <memory>

// QUESTION 4A //////////////////////////////

// In file phase.h and phase.cpp, create an abstract Phase class that will be the base class for derived classes ComeOutPhase and PointPhase

enum class RollOutcome {
  natural,
  craps,
  point,
  seven_out,
  nopoint
};

class phase {
  public:
    virtual ~phase() {}
    virtual RollOutcome get_outcome(Roll* Roll) const = 0;
};

/////////////////////////////////////////////

#endif
