
#pragma once

#include <RobotMap.h>

#include <frc/WPILib.h>

#include <frc/commands/Subsystem.h>

class DriveTrain : public frc::Subsystem 
{
 public:

  void DriveUsingMecanums(double X, double Y, double Twist);
  void StopMecanums();
  void Talon1(double speed);
  void Talon2(double speed);
  void Talon3(double speed);
  void Talon4(double speed);

  void InitDefaultCommand() override;
 
  DriveTrain();
};
