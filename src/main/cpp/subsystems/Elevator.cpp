
#include <subsystems/Elevator.h>
#include <commands/Elevate.h>

frc::VictorSP ElevatorVic{0};

Elevator::Elevator() : Subsystem("ExampleSubsystem") 
{
  
}

void Elevator::InitDefaultCommand()
{
  SetDefaultCommand(new Elevate());
}

void Elevator::StopVictor2()
{
  ElevatorVic.Set(0);
}

void Elevator::RunVictor2(double speed)
{
  ElevatorVic.Set(speed);
}

void Elevator::Hover()
{
  ElevatorVic.Set(0.05);
}