
#include "commands/MecanumDrive.h"

#include <Robot.h>

MecanumDrive::MecanumDrive() 
{
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void MecanumDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MecanumDrive::Execute() 
{
  double speedWheel = (Robot::OI->YokeWheel());
  speedwheel = (speedwheel * 0.375);
  speedwheel = (speedwheel + 0.625);
  Robot::driveTrain->MecanumDrive((Robot::OI->XboxHorzR() * speedwheel), 
                                  (Robot::OI->XboxVertR() * speedwheel), 
                                  (Robot::OI->XboxHorzL() * speedwheel));
}

// Make this return true when this Command no longer needs to run execute()
bool MecanumDrive::IsFinished() 
{ 
  return false; 
}

// Called once after isFinished returns true
void MecanumDrive::End() 
{
  Robot::driveTrain->StopMecanums();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MecanumDrive::Interrupted() 
{
  End();
}
