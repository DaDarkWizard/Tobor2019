
#pragma once

#include <frc/commands/Command.h>

#include <wpilib.h>

#include <OI.h>

#include "../subsystem/TowerRock.h"

class ComTowerOut : public frc::Command 
{
 public:
  
  ComTowerOut();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
