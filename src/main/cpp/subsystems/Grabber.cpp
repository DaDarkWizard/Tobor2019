
#include "subsystems/Grabber.h"

Grabber::Grabber() : Subsystem("ExampleSubsystem") 
{

}

void Grabber::InitDefaultCommand() 
{

}

void Grabber::Grab()
{
	RobotMap::Grab->StartPulse();
}

void Grabber::Release()
{
	RobotMap::Release->StartPulse();
}