
#include "subsystems/BallControl.h"

BallControl::BallControl() : Subsystem("ExampleSubsystem") 
{

}

void BallControl::InitDefaultCommand() 
{

}

void BallControl::StopVictor1()
{
  RobotMap::Victor1.Set(0);
}

void BallControl::Victor1(double speed)
{
  RobotMap::Victor1.Set(speed);
}