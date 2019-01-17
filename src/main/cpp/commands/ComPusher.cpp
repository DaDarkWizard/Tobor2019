
#include "commands/ComPusher.h"

double waitTime = 0;
bool isDone = false;

ComPusher::ComPusher() 
{
  // eg. Requires(Robot::chassis.get());
}

void ComPusher::Initialize() 
{
  Robot::pusher->Push();
  waitTime = Timer.get();
}

void ComPusher::Execute() 
{
  if ((Timer.get() - waitTime) > 5.0)
  {
    Robot::pusher->Pull();
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
