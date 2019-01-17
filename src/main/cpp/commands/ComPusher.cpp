/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ComPusher.h"
double waitTime = 0;
bool isDone = false;

ComPusher::ComPusher() 
{
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void ComPusher::Initialize() 
{
  Robot::pusher->Push();
  waitTime = Timer.get();
}

// Called repeatedly when this Command is scheduled to run
void ComPusher::Execute() 
{
  if ((Timer.get() - waitTime) > 5.0)
  {
    Robot::pusher->Pull();
    isDone = true;
  }
}

// Make this return true when this Command no longer needs to run execute()
bool ComPusher::IsFinished() 
{
  return isDone; 
}

// Called once after isFinished returns true
void ComPusher::End() 
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ComPusher::Interrupted() 
{

}
