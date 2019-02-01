
#include "subsystems/Pusher.h"

//creates a solenoid object using frc's solenoid class and attaches it to port 4 on the pcm
frc::Solenoid pushSolenoid {4};
//creates a solenoid object using frc's solenoid class and attaches it to port 5 on the pcm
frc::Solenoid pullSolenoid {5};

//a function that runs once when the pusher object is made
Pusher::Pusher() : Subsystem("ExampleSubsystem") 
{
	//sets a pulse to last for 0.1 seconds
	pushSolenoid.setPulseDuration(0.1);
	pullSolenoid.setPulseDuration(0.1);
}

void Pusher::InitDefaultCommand() 
{

}

//creates a function to push the pusher out
void Pusher::Push()
{
	//runs the start pulse function from the push solenoid object
	pushSolenoid.StartPulse();
}

//creates a function to pull the pusher in
void Pusher::Pull()
{
	//runs the start pulse function from the push solenoid object
	pushSolenoid.StartPulse();
}