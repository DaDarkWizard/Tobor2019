
#pragma once

//Includes the frc commands lirary.
#include <frc/commands/Command.h>

//References the main header file
#include <Robot.h>

class ComRelease : public frc::Command 
{
 public:
  
  //Constructor ???
  ComRelease();

  //Telling the robot about the functions in ComRelease.cpp
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
