
#pragma once

#include <frc/TimedRobot.h>
#include <frc/commands/Command.h>
#include <frc/smartdashboard/SendableChooser.h>

#include "OI.h"
#include "commands/ExampleCommand.h"
#include "commands/MyAutoCommand.h"
#include "commands/BallCommandIn.h"
#include "commands/BallCommandOut.h"

#include "subsystems/ExampleSubsystem.h"
#include "subsystems/DriveTrain.h"
#include "subsystems/BallControl.h"
#include "subsystems/Grabber.h"
#include "subsystems/TowerRock.h"
#include "subsystems/Pusher.h"

class Robot : public frc::TimedRobot
{
 public:
  
  static ExampleSubsystem m_subsystem;
  static DriveTrain driveTrain;

  static BallControl ballControl;
  static Grabber grabber;
  static Pusher pusher;
  static TowerRock towerrock;
  
  static OI m_oi;

  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

 private:
  
  frc::Command* m_autonomousCommand = nullptr;
  ExampleCommand m_defaultAuto;
  MyAutoCommand m_myAuto;
  frc::SendableChooser<frc::Command*> m_chooser;
};
