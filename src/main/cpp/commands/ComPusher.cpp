
#include "commands/ComPusher.h"

#include <Robot.h>

#include <frc/WPILib.h>

//creates a variable wait time and sets it to 0
double waitTime = 0;
//creates a variable that will be set to true when the code stops repeating
bool isDone = false;

ComPusher::ComPusher() : frc::Command("ComPusher")
{
  //tells comPusher that it needs the pusher object from the robot class
  Requires(&Robot::pusher);
}

//a function that runs once when the command is called
void ComPusher::Initialize() 
{
  Robot::pusher.Push();
  //sets the variable waitTime to the current time
  waitTime = frc::Timer().Get();
}

void ComPusher::Execute() 
{
  //checks if 5 seconds have passed
  if ((frc::Timer().Get() - waitTime) > 5.0)
  {
    Robot::pusher.Pull();
    //tells the code whether it should repeat or not
    isDone = true;
  }
}

//tells the robot that it is done
bool ComPusher::IsFinished() 
{
  //tells the code whether it should repeat or not
  return isDone; 
}

void ComPusher::End() 
{

}

void ComPusher::Interrupted() 
{

}
