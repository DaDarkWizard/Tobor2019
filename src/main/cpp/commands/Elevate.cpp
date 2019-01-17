
#include "commands/Elevate.h"

Elevate::Elevate() 
{
  Requires(Robot::elevate.get());
}

void Elevate::Initialize() 
{

}

void Elevate::Execute() 
{
  if ((Robot::m_oi->YokeVert() <= 0.1) && (Robot::m_ot->YokeVert() => -0.1))
  {
    Robot::elevate->Victor2(0.05);
  }
  else
  {
    Robot::elevate->Victor2(Robot::m_oi->YokeVert());
  }
}

bool Elevate::IsFinished() 
{ 
  return false; 
}

void Elevate::End() 
{
  Robot::elevate->StopVictor2();
}

void Elevate::Interrupted() 
{
  End();
}
  if Robot::m_oi->YokeVert() => 0.1
  {
    Robot::elevate->Victor2(0.05);
  }
