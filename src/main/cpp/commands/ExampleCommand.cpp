
#include "commands/ExampleCommand.h"

//References the main header file
#include <Robot.h>

ExampleCommand::ExampleCommand()
{
  Requires(&Robot::m_subsystem);
}

void ExampleCommand::Initialize()
{

}

void ExampleCommand::Execute()
{

}

bool ExampleCommand::IsFinished()
{
  return false;
}

void ExampleCommand::End()
{

}

void ExampleCommand::Interrupted()
{
  End();
}