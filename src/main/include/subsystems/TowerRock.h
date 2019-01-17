
#pragma once

#include <frc/commands/Subsystem.h>

class TowerRock : public frc::Subsystem 
{
 public:
  
  TowerRock();
  void InitDefaultCommand() override;

  void TowerOut();
  void TowerIn();
};