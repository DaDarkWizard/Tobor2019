
#pragma once

#include <frc/commands/Command.h>

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
