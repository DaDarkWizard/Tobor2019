
#include "subsystems/TowerRock.h"

frc::Solenoid TowerIn{1};
frc::Solenoid TowerOut{0};

TowerRock::TowerRock() : Subsystem("ExampleSubsystem") 
{
  
}

void TowerRock::InitDefaultCommand() 
{

}

void TowerRock::TowerOut()
{
  RobotMap::TowerOut->StartPulse();
}

void TowerRock::TowerIn()
{
  RobotMap::TowerIn->StartPulse();
}