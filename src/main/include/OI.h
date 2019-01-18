
#pragma once

#include <frc/WPILib.h>

//#include "commands/BallCommandIn.h"

class OI
{
  private:

    frc::Joystick yoke{0};
    
    frc::Joystick xbox{1};
    
    frc::JoystickButton xboxRB{&xbox, 6};
    frc::JoystickButton xboxLB{&xbox, 5};
    
public:
    OI();

    double XboxVertL();
    double XboxHorzL();
    double XboxVertR();
    double XboxHorzR();
    
    double YokeVert();
    double YokeHorz();
    double YokeWheel();


};