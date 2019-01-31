
#include "commands/ComRelease.h"

//References the main header file
#include <Robot.h>

ComRelease::ComRelease() : frc::Command("ComRelease")
{
  //tells comRelease that it needs the grabber object from the robot class
  Requires(&Robot::grabber);
}

//a function that runs once when a command is called
void ComRelease::Initialize() 
{
  Robot::grabber.Release();
}

void ComRelease::Execute() 
{

}

bool ComRelease::IsFinished() 
{
  return true; 
}

void ComRelease::End() 
{

}

void ComRelease::Interrupted() 
{
  End();
}
