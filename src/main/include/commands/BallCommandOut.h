<<<<<<< HEAD

=======
>>>>>>> f3a76b32d9fe01b865c3e2021f4913057de00cf7
#pragma once

#include <frc/commands/Command.h>
#include <wpilib.h>
#include "../subsystems/BallControl.h"
#include <OI.h>

#include "../subsystem/BallControl.h"

#include <OI.h>

#include <WPILib.h>

class BallCommandOut : public frc::Command 
{
 public:
  
  BallCommandOut();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
