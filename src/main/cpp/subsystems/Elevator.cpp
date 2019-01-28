
//Takes the robot to the subsystem for Elevator.h
#include <subsystems/Elevator.h>

//Takes the robot to the command file Elevate.h
#include <commands/Elevate.h>

//Creating object called ElevatorVic and assigning it to PWM cable 0.
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