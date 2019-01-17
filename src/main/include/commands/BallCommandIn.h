
#pragma once

#include <frc/commands/Command.h>

#include <frc/WPILib.h>

#include "../subsystems/BallControl.h"

#include <OI.h>

class BallCommandIn : public frc::Command 
{
 public:
  
  BallCommandIn();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
