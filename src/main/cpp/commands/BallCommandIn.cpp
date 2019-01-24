
#include "commands/BallCommandIn.h"
#include <Robot.h>

BallCommandIn::BallCommandIn() : frc::Command("BallCommandIn")
{
  Requires(&Robot::ballControl);
}

void BallCommandIn::Initialize() 
{

}

void BallCommandIn::Execute() 
{
  Robot::ballControl.RunVictor1(0.25);
}

bool BallCommandIn::IsFinished() 
{ 
  return false; 
}

void BallCommandIn::End() 
{
  Robot::ballControl.StopVictor1();
}

void BallCommandIn::Interrupted() 
{
  End();
}
