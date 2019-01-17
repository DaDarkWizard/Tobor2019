
#include "commands/ComGrab.h"

ComGrab::ComGrab() 
{
  // eg. Requires(Robot::chassis.get());
}

void ComGrab::Initialize() 
{
  Robot::grabber->Grab();
}

void ComGrab::Execute() 
{

}

bool ComGrab::IsFinished() 
{
  return true; 
}

void ComGrab::End() 
{

}

void ComGrab::Interrupted() 
{
  End();
}
