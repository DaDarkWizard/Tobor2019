
#pragma once

//Includes the frc commands lirary.
#include <frc/commands/Command.h>

//References the main header file
#include <Robot.h>

class ComGrab : public frc::Command 
{
 public:

  //Constructor ???
  ComGrab();

  //Telling the robot about the functions in ComGrab.cpp
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
