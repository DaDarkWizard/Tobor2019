
#include "commands/ComRelease.h"

//References the main header file
#include <Robot.h>

ComRelease::ComRelease() : frc::Command("ComRelease")
{
  Requires(&Robot::grabber);
}

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
