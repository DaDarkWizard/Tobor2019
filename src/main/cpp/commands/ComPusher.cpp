
#include "commands/ComPusher.h"

//References the main header file
#include <Robot.h>

#include <frc/WPILib.h>

double waitTime = 0;
bool isDone = false;

ComPusher::ComPusher() : frc::Command("ComPusher")
{
  Requires(&Robot::pusher);
}

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
