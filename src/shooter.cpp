//cpp

#ifndef SHOOTER_CPP
#define SHOOTER_CPP

#include "shooter.h"
#include "roll.h"
#include <iostream>

// QUESTION 3 ///////////////////////////////

shooter::shooter(){}

Roll* shooter::throw_dice(die &die1, die &die2) {
  Roll* Roll = new class Roll(die1, die2);
  Roll->Roll_dice();
  Rolls.push_back(Roll);
  return Roll;
}

void shooter::display_Rolled_values() {
  for (Roll* Roll : Rolls) {
    std::cout << "Rolled value: " << Roll->Roll_value();
  }
}

shooter::~shooter() {
  for (Roll* Roll : Rolls) {
    delete Roll;
  }
}

/////////////////////////////////////////////
