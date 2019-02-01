
#pragma once

//Includes the frc commands lirary.
#include <frc/commands/Command.h>

<<<<<<< HEAD
//???
=======
//References the main header file
#include <Robot.h>

>>>>>>> 089c07639c85aa798249013d2464c044cd23cc42
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
