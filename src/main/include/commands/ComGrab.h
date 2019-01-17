
#pragma once

#include <frc/commands/Command.h>

#include <frc/WPILib.h>

#include <OI.h>

#include "../subsystems/Grabber.h "

class ComGrab : public frc::Command 
{
 public:

  ComGrab();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
