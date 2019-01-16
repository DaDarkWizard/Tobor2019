
#include "subsystems/Elevator.h"

Elevator::Elevator() : Subsystem("ExampleSubsystem") 
{
  
}

void Elevator::InitDefaultCommand()
{

}

void StopVictor2();
{
  RobotMap::Victor2->Set(0);
}

void Victor2();
{
  RobotMap::Victor2->Set(speed);
}

void Hover();
{
  RobotMap::Victor2->Set(0.05);
}