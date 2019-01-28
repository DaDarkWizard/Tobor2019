
//Takes the robot to the subsystem Grabber.h
#include "subsystems/Grabber.h"

//Creating objects and assigning them to cables 2 & 3.
frc::Solenoid grabber {2};
frc::Solenoid release {3};

Grabber::Grabber() : Subsystem("ExampleSubsystem") 
{

}

void Grabber::InitDefaultCommand() 
{

}

//Telling the robot to do when it runs the function Grab from the object Grabber
void Grabber::Grab()
{
	//Running the object grabber using the funtion StartPulse
	grabber.StartPulse();
}

//Telling the robot to do when it runs the function Release from the object Grabber
void Grabber::Release()
{
	//Running the object release using the function StartPulse
	release.StartPulse();
}