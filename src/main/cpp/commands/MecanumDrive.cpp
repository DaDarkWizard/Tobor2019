
#include "commands/MecanumDrive.h"

#include <Robot.h>

double deadZone = 0.2;

MecanumDrive::MecanumDrive() : frc::Command("MecanumDrive")
{
  Requires(&Robot::driveTrain);
}

void MecanumDrive::Initialize()
{

}

void MecanumDrive::Execute() 
{
  double speedWheel = (Robot::m_oi.YokeWheel());
  speedWheel = (speedWheel * 0.375);
  speedWheel = (speedWheel + 0.625);

  double xboxAxes[3];

  xboxAxes[0] = Robot::m_oi.XboxHorzR();
  xboxAxes[1] = Robot::m_oi.XboxVertR();
  xboxAxes[2] = Robot::m_oi.XboxHorzL();

  for (int i = 0; i < 3; i++)
  {
    //xboxAxes[i]
    if ((xboxAxes[i] < deadZone) && (xboxAxes[i] > -deadZone))
    {
      xboxAxes[i] = 0;
    }
  }

  Robot::driveTrain.DriveUsingMecanums((xboxAxes[0] * speedWheel), 
                                  (xboxAxes[1] * speedWheel), 
                                  (xboxAxes[2] * speedWheel));
}

bool MecanumDrive::IsFinished() 
{ 
  return false; 
}

void MecanumDrive::End() 
{
  Robot::driveTrain.StopMecanums();
}

void MecanumDrive::Interrupted() 
{
  End();
}
