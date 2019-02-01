
#pragma once

#include <frc/commands/Command.h>

//References the main header file
#include <Robot.h>

class MecanumDrive : public frc::Command
{
 public:

  MecanumDrive();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;

};
