
#pragma once

#include <frc/commands/Command.h>

//References the main header file
#include <Robot.h>

class MyAutoCommand : public frc::Command
{
 public:
  
  MyAutoCommand();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
