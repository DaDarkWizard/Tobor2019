
#include "subsystems/BallControl.h"

frc::VictorSP BallControlVic{1};

BallControl::BallControl() : Subsystem("ExampleSubsystem") 
{

}

void BallControl::InitDefaultCommand() 
{

}

void BallControl::StopVictor1()
{
  BallControlVic.Set(0);
}

void BallControl::RunVictor1(double speed)
{
  BallControlVic.Set(speed);
}