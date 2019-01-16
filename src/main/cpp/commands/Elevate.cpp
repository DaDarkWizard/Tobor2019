
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
  Robot::elevate->Victor2(1);
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
