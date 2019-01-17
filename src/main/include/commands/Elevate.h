
#pragma once

#include <frc/commands/Command.h>

#include <frc/WPILib.h>

#include <OI.h>

#include <../subsystems/Elevator.h>

#include <Robot.h>

class Elevate : public frc::Command 
{
 public:

  Elevate();
  void SmallTilt() override;
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
  void SmallTilt() override;
};
