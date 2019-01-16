
#pragma once

#include <frc/commands/Subsystem.h>

#include <RobotMap.h>

#include <WPILib.h>

class Elevator : public frc::Subsystem 
{
 public:

  Elevator();
  void InitDefaultCommand() override;

  void StopVictor2();
  void Victor2(double speed);
  void Hover();
};
