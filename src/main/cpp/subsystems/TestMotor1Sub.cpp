
//Includes the subsystems header file
#include "subsystems/TestMotor1Sub.h"

//Sets up the motor variable
frc::VictorSPX TestMotorVic{1};

//Sets up the TestMotor1Sub() function
TestMotor1Sub::TestMotor1Sub() : Subsystem("ExampleSubsystem") 
{

}

//Sets up the default initializer function
void TestMotor1Sub::InitDefaultCommand() 
{
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

//Sets up the motor stop function
void TestMotor1Sub::StopTestMotor()
{
  //Stops the motor
  TestMotorVic.Set(0);
}

//Sets up the motor run function
void TestMotor1Sub::RunTestMotor(double speed)
{
  //Runs the motor
  TestMotorVic.Set(speed);
}