
#pragma once

//Includes the frc commands lirary.
#include <frc/commands/Command.h>

class Elevate : public frc::Command 
{
 public:

  //Constructor ???
  Elevate();

  //Telling the robot about all of the functions in Elevate.cpp
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
