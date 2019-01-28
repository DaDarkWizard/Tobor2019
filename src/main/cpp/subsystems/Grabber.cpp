
#include "subsystems/Grabber.h"

frc::Solenoid grabber {2};
frc::Solenoid release {3};

Grabber::Grabber() : Subsystem("ExampleSubsystem") 
{

}

void Grabber::InitDefaultCommand() 
{

}

void Grabber::Grab()
{
	grabber.StartPulse();
}

void Grabber::Release()
{
	release.StartPulse();
}