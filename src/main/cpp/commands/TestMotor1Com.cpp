
#include <Robot.h>

#include "commands/TestMotor1Com.h"

TestMotor1Com::TestMotor1Com() 
{
  //Causes testMotor to be needed for the command to run
  Requires(&Robot::testMotor);
}

// Called just before this Command runs the first time
void TestMotor1Com::Initialize() 
{

}

// Called repeatedly when this Command is scheduled to run
void TestMotor1Com::Execute() 
{
  Robot::testMotor.RunTestMotor((Robot::m_oi.XboxRT()) + ((&Robot::m_oi.XboxLT()) * -1));
}

// Make this return true when this Command no longer needs to run execute()
bool TestMotor1Com::IsFinished() 
{ 
  return false; 
}

// Called once after isFinished returns true
void TestMotor1Com::End() 
{
  StopTestMotor();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestMotor1Com::Interrupted()
{
  End();
}
