
#include "commands/Elevate.h"

#include <Robot.h>

Elevate::Elevate() : frc::Command("Elevate")
{
  Requires(&Robot::elevator);
}

void Elevate::Initialize() 
{

}

void Elevate::Execute() 
{
  if ((Robot::m_oi.YokeVert() <= 0.1) && (Robot::m_oi.YokeVert() >= -0.1))
  {
    Robot::elevator.RunVictor2(0.05);
  }
  else
  {
    Robot::elevator.RunVictor2(Robot::m_oi.YokeVert());
  }
}

bool Elevate::IsFinished() 
{ 
  return false; 
}

void Elevate::End() 
{
  Robot::elevator.StopVictor2();
}

void Elevate::Interrupted() 
{
  End();
}