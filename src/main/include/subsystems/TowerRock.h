
#pragma once

#include <RobotMap.h>

#include <frc/WPILib.h>

#include <frc/commands/Subsystem.h>

class TowerRock : public frc::Subsystem 
{
 public:
  
  void TowerOut();
  void TowerIn();

  void InitDefaultCommand() override;

  TowerRock();
};