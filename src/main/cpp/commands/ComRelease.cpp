
#include "commands/ComRelease.h"

ComRelease::ComRelease() 
{
  // eg. Requires(Robot::chassis.get());
}

void ComRelease::Initialize() 
{
  Robot::grabber->Release();
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
