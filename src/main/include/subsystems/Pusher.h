
#pragma once

#include <frc/commands/Subsystem.h>

class Pusher : public frc::Subsystem 
{
 public:
  
  Pusher();
  void InitDefaultCommand() override;

  void Push();
	void Pull();
};
