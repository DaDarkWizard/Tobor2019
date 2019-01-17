
#pragma once

#include <frc/commands/Command.h>

#include <frc/WPILib.h>

#include <OI.h>

#include "../subsystems/Pusher.h"

class ComPusher : public frc::Command 
{
 public:
  
  ComPusher();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
