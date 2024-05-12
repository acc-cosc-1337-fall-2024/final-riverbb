#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "phase.h"
#include "come_out_phase.h"
#include "point_phase.h"

#include <cstdlib>
#include <ctime>
#include <iostream>

#include <chrono>
#include <thread>

int main() 
{
  

// QUESTION 5 ///////////////////////////////
  // it doesnt work . tears.
  
  srand(time(0));
  
  die die1;
  die die2;
  
  shooter shooter;
  
  Roll* Roll = shooter.throw_dice(die1, die2);
  int Rolled_value;
  
  come_out_phase come_out_phase;
  
  while (come_out_phase.get_outcome(Roll) == RollOutcome::natural || come_out_phase.get_outcome(Roll) == RollOutcome::craps) {
    Rolled_value = Roll->Roll_value();
    std::cout << "rolled a " << Rolled_value << ". roll again!\n";

    Roll = shooter.throw_dice(die1, die2);
    
    std::this_thread::sleep_for(std::chrono::seconds(1));
  };
  
  std::cout << "rolled a " << Rolled_value << ". start of point phase\n";
  std::cout << "roll until " << Rolled_value << " or 7 is rolled\n";

  int point = Rolled_value;

  Roll = shooter.throw_dice(die1, die2);
  point_phase point_phase(point);

  while (point_phase.get_outcome(Roll) != RollOutcome::seven_out && point_phase.get_outcome(Roll) != RollOutcome::nopoint) {
    Rolled_value = Roll->Roll_value();
    std::cout << "rolled a " << Rolled_value << ". roll again!\n";

    Roll = shooter.throw_dice(die1, die2);
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }

  std::cout << "rolled a " << Rolled_value << ". end of point phase\n";

  std::cout << Roll->Roll_value();

  return 0;
}
