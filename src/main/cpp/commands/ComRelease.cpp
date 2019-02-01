
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

//a function that runs
void ComRelease::Execute() 
{

}

//tells the robot if it is done
bool ComRelease::IsFinished() 
{
  return true; 
}

//runs when the program ends
void ComRelease::End() 
{

}

//runs when the program is interrupted
void ComRelease::Interrupted() 
{
  //runs the thing that runs when the program ends
  End();
}
