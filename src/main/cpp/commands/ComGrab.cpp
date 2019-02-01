
#include "commands/ComGrab.h"

//References the main header file
#include <Robot.h>

ComGrab::ComGrab() : frc::Command("ComGrab")
{
  Requires(&Robot::grabber);
}

void ComGrab::Initialize() 
{
  Robot::grabber.Grab();
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
