
//Makes it include only once
#pragma once

//Includes the Subsystem header file
#include <frc/commands/Subsystem.h>

#include <Robot.h>

//Sets up the class TestMotor1Sub
class TestMotor1Sub : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities

 public:
  void StopTestMotor();
  void RunTestMotor();

  TestMotor1Sub();
  void InitDefaultCommand() override;
};
