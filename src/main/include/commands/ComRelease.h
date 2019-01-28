
#pragma once

//Includes the frc commands lirary.
#include <frc/commands/Command.h>

class ComRelease : public frc::Command 
{
 public:
  
  ComRelease();

  //Telling the robot
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
