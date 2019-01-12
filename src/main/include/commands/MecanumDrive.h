
#pragma once

#include <WPILib.h>

#include <frc/commands/Command.h>

#include "../subsystems/DriveTrain.h"

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