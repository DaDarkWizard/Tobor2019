
#include "commands/MecanumDrive.h"

#include <Robot.h>

MecanumDrive::MecanumDrive() 
{
  Requires(&Robot::driveTrain);
}

void MecanumDrive::Initialize()
{

}

void MecanumDrive::Execute() 
{
  double speedWheel = (&Robot::m_oi->YokeWheel());
  frc::speedwheel = (speedwheel * 0.375);
  speedwheel = (speedwheel + 0.625);
  &Robot::driveTrain->MecanumDrive((&Robot::m_oi->XboxHorzR() * speedwheel), 
                                  (&Robot::m_oi->XboxVertR() * speedwheel), 
                                  (&Robot::m_oi->XboxHorzL() * speedwheel));
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
