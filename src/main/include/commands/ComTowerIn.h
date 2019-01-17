
#pragma once

#include <frc/commands/Command.h>

#include <WPILib.h>

#include <OI.h>

#include "../subsystem/TowerRock.h"

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
