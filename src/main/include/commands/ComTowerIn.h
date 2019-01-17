
#pragma once

#include <frc/commands/Command.h>

#include <frc/WPILib.h>

#include <OI.h>

#include "../subsystems/TowerRock.h"

#include <Robot.h>

class ComTowerIn : public frc::Command 
{
 public:
  
  ComTowerIn();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
