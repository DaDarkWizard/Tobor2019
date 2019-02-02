
//Makes it so it only includes once
#pragma once

//Includes the Command header file
#include <frc/commands/Command.h>

#include <Robot.h>

//Sets up the class TestMotor1Com
class TestMotor1Com : public frc::Command {
 public:
  TestMotor1Com();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
