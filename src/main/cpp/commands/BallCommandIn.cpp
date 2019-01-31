
//References the header file for this command for use in creating functions
#include "commands/BallCommandIn.h"

//References the main header file
#include <Robot.h>

//Sets up the function BallCommandIn()
BallCommandIn::BallCommandIn() : frc::Command("BallCommandIn")
{
  //Requires the command to have the variable ballControl to run
  Requires(&Robot::ballControl);
}

//Sets up the fucntion that runs when the command initializes
void BallCommandIn::Initialize() 
{

}

//Sets up the function that runs when the command is executed
void BallCommandIn::Execute() 
{
  //Sets up the function that controls the ball intake motors
  Robot::ballControl.RunVictor1(-0.25);
}

//Sets up the function that runs when the command finishes executing
bool BallCommandIn::IsFinished() 
{ 
  //Makes the function return no data
  return false; 
}

//Sets up the function that is run when the command is finished running
void BallCommandIn::End() 
{
  //Runs funtion that stops the ball intake motors from running
  Robot::ballControl.StopVictor1();
}

//Sets up the function that is run when the command is interrupted from running
void BallCommandIn::Interrupted() 
{
  //Runs function that stops the command from running
  End();
}
