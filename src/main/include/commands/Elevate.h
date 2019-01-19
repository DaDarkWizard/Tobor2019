
#pragma once

#include <frc/commands/Command.h>

class Elevate : public frc::Command 
{
 public:

  Elevate();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
