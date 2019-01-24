
#include <subsystems/Elevator.h>
#include <commands/Elevate.h>

Elevator::Elevator() : Subsystem("ExampleSubsystem") 
{
  
}

void Elevator::InitDefaultCommand()
{
  SetDefaultCommand(new Elevate());
}

void Elevator::StopVictor2()
{
  RobotMap::Victor2.Set(0);
}

void Elevator::RunVictor2(double speed)
{
  RobotMap::Victor2.Set(speed);
}

void Elevator::Hover()
{
  RobotMap::Victor2.Set(0.05);
}