/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/BallCommandIn.h"

BallCommandIn::BallCommandIn() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
}


void BallCommandIn::Initialize() 
{

}

void BallCommandIn::Execute() 
{
  Robot::ballControl->Victor1(0.25);
}

bool BallCommandIn::IsFinished() 
{ 
  return false; 
}

void BallCommandIn::End() 
{
  Robot::ballControl->StopVictor1();
}

void BallCommandIn::Interrupted() 
{
  End();
}
