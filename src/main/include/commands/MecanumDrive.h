
#pragma once

#include <frc/WPILib.h>

#include <frc/commands/Command.h>

#include "../subsystems/DriveTrain.h"

#include <OI.h>

class MecanumDrive : public frc::Command 
{
 public:

  MecanumDrive();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
