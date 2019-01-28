
#include "subsystems/TowerRock.h" //References header file for the functions set up here

//Creates object TowerIn
frc::Solenoid TowerIn{1};
//Creates object TowerOut
frc::Solenoid TowerOut{0}; 

//Sets up function that needs to run only once when this file is initialized
TowerRock::TowerRock() : Subsystem("ExampleSubsystem") 
{
  //Sets how long it takes the solenoid to push the tower
  TowerOut.SetPulseDuration(.1);
  //Sets how long it takes the solenoid to pull the tower
  TowerIn.SetPulseDuration(.1);
}

//Sets up the default command for this file
void TowerRock::InitDefaultCommand()
{

}

//Sets up the function TowerOut()
void TowerRock::TowerOut() 
{
  //Makes the function TowerOut() push the tower forward with the solenoid
  TowerOut.StartPulse();
}
   
//Sets up the function TowerIn()
void TowerRock::TowerIn() 
{
  //Makes the function TowerIn() pull the tower back with the solenoid
  TowerIn.StartPulse();
}