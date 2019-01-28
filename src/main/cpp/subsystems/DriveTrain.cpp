
#include <subsystems/DriveTrain.h>
#include <commands/MecanumDrive.h>

WPI_TalonSRX Talon1{1};
WPI_TalonSRX Talon2{2};
WPI_TalonSRX Talon3{3};
WPI_TalonSRX Talon4{4};
frc::MecanumDrive mecanums{Talon4,Talon3,Talon2,Talon1};

DriveTrain::DriveTrain() : frc::Subsystem("DriveTrain") 
{
  
}

void DriveTrain::InitDefaultCommand()
{
  SetDefaultCommand(new MecanumDrive());
}

void DriveTrain::DriveUsingMecanums(double X, double Y, double Twist)
{
  mecanums.DriveCartesian(X, Y, Twist);
}

void DriveTrain::StopMecanums()
{
  mecanums.DriveCartesian(0, 0, 0);
}

void DriveTrain::Talon1(double speed)
{
  //Talon1.Set(-speed);
}

void DriveTrain::Talon2(double speed)
{
  //Talon2.Set(-speed);
}

void DriveTrain::Talon3(double speed)
{
  //Talon3.Set(-speed);
}

void DriveTrain::Talon4(double speed)
{
  //Talon4.Set(-speed);
}