
#pragma once

//Includes the frc subsystems folder
#include <frc/commands/Subsystem.h>

class Grabber : public frc::Subsystem 
{
 public:

  //Making functions Grab & Release.
  void Grab();
	void Release();

  //???
  Grabber();

  //???
  void InitDefaultCommand() override;
};
