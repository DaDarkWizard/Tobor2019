
#pragma once

#include <frc/commands/Subsystem.h>
#include <RobotMap.h>

class Grabber : public frc::Subsystem 
{
 public:

  void Grab();
	void Release();

  void InitDefaultCommand() override;

  Grabber();
};
