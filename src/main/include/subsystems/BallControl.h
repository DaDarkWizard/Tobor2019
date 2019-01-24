
#pragma once

#include <frc/commands/Subsystem.h>

#include <frc/WPILib.h>

#include <RobotMap.h>

class BallControl : public frc::Subsystem 
{
 public:

  void StopVictor1();
  void RunVictor1(double speed);
  
  void InitDefaultCommand() override;
  BallControl();
};
