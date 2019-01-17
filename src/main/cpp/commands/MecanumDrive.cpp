
#include "commands/MecanumDrive.h"

#include <Robot.h>

MecanumDrive::MecanumDrive() 
{
  Requires(&Robot::driveTrain.get());
}

void MecanumDrive::Initialize()
{

}

void MecanumDrive::Execute() 
{
  double speedWheel = (Robot::OI->YokeWheel());
  speedwheel = (speedwheel * 0.375);
  speedwheel = (speedwheel + 0.625);
  &Robot::driveTrain->MecanumDrive((&Robot::OI->XboxHorzR() * speedwheel), 
                                  (&Robot::OI->XboxVertR() * speedwheel), 
                                  (&Robot::OI->XboxHorzL() * speedwheel));
}

bool MecanumDrive::IsFinished() 
{ 
  return false; 
}

void MecanumDrive::End() 
{
  &Robot::driveTrain->StopMecanums();
}

void MecanumDrive::Interrupted() 
{
  End();
}
