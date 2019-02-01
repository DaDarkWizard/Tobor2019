
//Only includes once
#pragma once

//Include the WPI data library
#include <frc/WPILib.h>

//Includes the Subsystem header file
#include <frc/commands/Subsystem.h>

class TowerRock : public frc::Subsystem 
{
 public:
  
  void TowerOut();
  void TowerIn();

  void InitDefaultCommand() override;

  TowerRock();
};