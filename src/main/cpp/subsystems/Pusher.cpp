
#include "subsystems/Pusher.h"

//creates a solenoid object using frc's solenoid class and attaches it to port 4 on the pcm
frc::Solenoid pushSolenoid {4};
//creates a solenoid object using frc's solenoid class and attaches it to port 5 on the pcm
frc::Solenoid pullSolenoid {5};

//a function that runs once when the pusher object is made
Pusher::Pusher() : Subsystem("ExampleSubsystem") 
{
	//sets how long a pulse lasts for
	pushSolenoid.setPulseDuration(0.1);
	pullSolenoid.setPulseDuration(0.1);
}

void Pusher::InitDefaultCommand() 
{

}

//starts the pulse
void Pusher::Push()
{
	pushSolenoid.StartPulse();
}

void Pusher::Pull()
{
	pushSolenoid.StartPulse();
}