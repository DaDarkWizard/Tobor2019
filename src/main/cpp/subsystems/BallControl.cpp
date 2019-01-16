
#include "../subsystems/BallControl.h"

BallControl::BallControl() : Subsystem("ExampleSubsystem") 
{

}

void BallControl::InitDefaultCommand() 
{
  
}

void StopVictor1()
{
  RobotMap::Victor1->Set(0);
}

void Victor1(double speed)
{
  RobotMap::Victor1->Set(speed);
}