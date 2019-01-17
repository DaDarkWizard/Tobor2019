
#pragma once

#include <frc/commands/Command.h>

#include <WPILib.h>

#include <OI.h>

#include "../subsystems/Grabber.h"

class ComRelease : public frc::Command 
{
 public:
  
  ComRelease();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
