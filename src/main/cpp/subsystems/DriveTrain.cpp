
#include <subsystems/DriveTrain.h>
#include <commands/MecanumDrive.h>
DriveTrain::DriveTrain() : frc::Subsystem("DriveTrain") 
{
  
}

void DriveTrain::InitDefaultCommand()
{
  SetDefaultCommand(new MecanumDrive());
}

void DriveTrain::DriveUsingMecanums(double X, double Y, double Twist)
{
  RobotMap::Mecanums->DriveCartesian(X, Y, Twist);
}

void DriveTrain::StopMecanums()
{
  RobotMap::Mecanums->DriveCartesian(0, 0, 0);
}

void DriveTrain::Talon1(double speed)
{
  RobotMap::Talon1->Set(-speed);
}

void DriveTrain::Talon2(double speed)
{
  RobotMap::Talon2->Set(-speed);
}

void DriveTrain::Talon3(double speed)
{
  RobotMap::Talon3->Set(-speed);
}

void DriveTrain::Talon4(double speed)
{
  RobotMap::Talon4->Set(-speed);
}