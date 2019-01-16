
#include "commands/BallCommandIn.h"

BallCommandIn::BallCommandIn()
{
  Requires(Robot::ballControl.get());
}

void BallCommandIn::Initialize() 
{

}

void BallCommandIn::Execute() 
{
  Robot::ballControl->Victor1(0.25);
}

bool BallCommandIn::IsFinished() 
{ 
  return false; 
}

void BallCommandIn::End() 
{
  Robot::ballControl->StopVictor1();
}

void BallCommandIn::Interrupted() 
{
  End();
}