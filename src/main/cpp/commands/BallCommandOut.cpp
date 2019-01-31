
#include "commands/BallCommandOut.h"

//References the main header file
#include <Robot.h>

BallCommandOut::BallCommandOut() : frc::Command("BallCommandOut")
{
  Requires(&Robot::ballControl);
}

//Sets up the fucntion that runs when the command initializes
void BallCommandOut::Initialize() 
{

}

//Sets up the function that runs when the command is executed
void BallCommandOut::Execute() 
{
  //Sets up the function that controls the ball intake motors
  Robot::ballControl.RunVictor1(1);
}

//Sets up the function that runs when the command finishes executing
bool BallCommandOut::IsFinished() 
{ 
  //Makes the function return no data
  return false; 
}

//Sets up the function that is run when the command is finished running
void BallCommandOut::End() 
{
  //Runs funtion that stops the ball intake motors from running
  Robot::ballControl.StopVictor1();
}

//Sets up the function that is run when the command is interrupted from running
void BallCommandOut::Interrupted() 
{
  //Runs function that stops the command from running
  End();
}
