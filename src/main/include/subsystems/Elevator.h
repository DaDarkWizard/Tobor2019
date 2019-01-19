
#pragma once

#include <frc/commands/Subsystem.h>

#include <RobotMap.h>

#include <frc/WPILib.h>

class Elevator : public frc::Subsystem 
{
 public:


  void StopVictor2();
  void Victor2(double speed);
  void Hover();
  
  Elevator();
  void InitDefaultCommand() override;
};
