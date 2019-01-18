
#pragma once

#include <frc/commands/Command.h>

#include <OI.h>

#include "../subsystems/BallControl.h"

#include <Robot.h>

#include <frc/WPILib.h>

class BallCommandOut : public frc::Command 
{
 public:
  
  BallCommandOut();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
