
#pragma once

#include <frc/WPILib.h>

class OI
{
  private:

    frc::Joystick yoke{0};
    
    frc::Joystick xbox{1};
    
    frc::Joystickbutton xboxRB{&xbox, 6};
    frc::Joystick xboxbuttonLB{&xbox, 5};
    
public:


    double XboxVertL();
    double XboxHorzL();
    double XboxVertR();
    double XboxHorzR();
    
    double YokeVert();
    double YokeHorz();
    double YokeWheel();

    OI();
};