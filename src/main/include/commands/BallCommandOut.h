#pragma once

#include <frc/commands/Command.h>
#include <wpilib.h>
#include "../subsystems/BallControl.h"
#include <OI.h>

class BallCommandOut : public frc::Command {
 public:
  BallCommandOut();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
