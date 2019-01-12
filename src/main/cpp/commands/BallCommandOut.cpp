
#include "commands/BallCommandOut.h"

BallCommandOut::BallCommandOut()
{
  Requires(Robot::ballControl.get());
}

void BallCommandOut::Initialize() 
{

}

void BallCommandOut::Execute() 
{

}

bool BallCommandOut::IsFinished() 
{ 
  return false; 
}

void BallCommandOut::End() 
{

}

void BallCommandOut::Interrupted() 
{

}
