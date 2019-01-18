
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
  double speedWheel = (Robot::m_oi->YokeWheel());
  speedWheel = (speedWheel * 0.375);
  speedWheel = (speedWheel + 0.625);
  Robot::driveTrain->MecanumDrive((Robot::m_oi->XboxHorzR() * speedWheel), 
                                  (Robot::m_oi->XboxVertR() * speedWheel), 
                                  (Robot::m_oi->XboxHorzL() * speedWheel));
}

bool MecanumDrive::IsFinished() 
{ 
  return false; 
}

void MecanumDrive::End() 
{
  Robot::driveTrain->StopMecanums();
}

void MecanumDrive::Interrupted() 
{
  End();
}
