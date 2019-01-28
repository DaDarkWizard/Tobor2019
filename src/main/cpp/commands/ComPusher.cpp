
#include "commands/ComPusher.h"

#include <Robot.h>

#include <frc/WPILib.h>

//creates a variable wait time and sets it to 0
double waitTime = 0;
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
  double waitTime = frc::Timer().Get();
}

void ComPusher::Execute() 
{
  if ((frc::Timer().Get() - waitTime) > 5.0)
  {
    Robot::pusher.Pull();
    isDone = true;
  }
}

bool ComPusher::IsFinished() 
{
  return isDone; 
}

void ComPusher::End() 
{

}

void ComPusher::Interrupted() 
{

}
