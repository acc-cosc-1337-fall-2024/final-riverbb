//h

#ifndef COME_OUT_PHASE_H
#define COME_OUT_PHASE_H

#include "phase.h"

// QUESTION 4B //////////////////////////////

//In file come_out_phase.h and come_out_phase.cpp create class ComeOutPhase that inherits from Phase class.

class come_out_phase : public phase {
  public:
    RollOutcome get_outcome(Roll* Roll) const override;
};

/////////////////////////////////////////////

#endif
