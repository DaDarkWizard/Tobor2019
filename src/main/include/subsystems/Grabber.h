
#pragma once

#include <frc/commands/Subsystem.h>

class Grabber : public frc::Subsystem 
{
 public:
  
  Grabber();
  void InitDefaultCommand() override;

  void Grab();
	void Release();
};
