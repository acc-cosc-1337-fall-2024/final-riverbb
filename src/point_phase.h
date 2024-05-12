//h
#ifndef POINT_PHASE_H
#define POINT_PHASE_H

#include "phase.h"

// QUESTION 4C //////////////////////////////

// In file point_phase.h and point_phase.cpp create class PointPhase that inherits from Phase class.

class point_phase : public phase {
  public:
    point_phase(int p);
    virtual RollOutcome get_outcome(Roll* Roll) const override;

  private:
    int point;
};

/////////////////////////////////////////////

#endif
