
#include "commands/MyAutoCommand.h"

#include "Robot.h"

MyAutoCommand::MyAutoCommand()
{
  Requires(&Robot::m_subsystem);
}

void MyAutoCommand::Initialize()
{

}

void MyAutoCommand::Execute()
{

}

bool MyAutoCommand::IsFinished()
{
  return false;
}

void MyAutoCommand::End()
{

}

void MyAutoCommand::Interrupted()
{
  
}
