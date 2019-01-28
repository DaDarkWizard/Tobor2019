
#pragma once

//Includes the frc subsystems library.
#include <frc/commands/Subsystem.h>

//Includes the command library WPILib.
#include <frc/WPILib.h>

//???
class Elevator : public frc::Subsystem 
{
 public:

  //Telling the robot that in the Elevator.cpp file, there is a function called ... that returns nothing.
  void StopVictor2();
  //This function requests for a variable called speed.
  void RunVictor2(double speed);
  void Hover();
  
  //Constructer ???
  Elevator();

  //???
  void InitDefaultCommand() override;
};
