
#pragma once

#include <frc/commands/Command.h>

#include <WPILib.h>

#include <OI.h>

#include "../subsystem/Grabber.h "

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
