
#include "commands/BallCommandOut.h"

BallCommandOut::BallCommandOut()
{
  Requires(Robot::ballControl);
}

void BallCommandOut::Initialize() 
{

}

void BallCommandOut::Execute() 
{
  Robot::ballControl->Victor1(1);
}

bool BallCommandOut::IsFinished() 
{ 
  return false; 
}

void BallCommandOut::End() 
{
  Robot::ballControl->StopVictor1();
}

void BallCommandOut::Interrupted() 
{
  End();
}
