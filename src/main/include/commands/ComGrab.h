
#pragma once

#include <frc/commands/Command.h>

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
