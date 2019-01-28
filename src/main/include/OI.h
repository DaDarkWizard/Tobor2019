
#pragma once

#include <frc/WPILib.h>

class OI
{
  private:
    //Telling robot where yoke controller is connected.
    frc::Joystick yoke{1};
    
    //Telling robot where xbox controller is connected.
    frc::Joystick xbox{0};
    
    //Setting up xbox Back buttons.
    frc::JoystickButton xboxRB{&xbox, 6};
    frc::JoystickButton xboxLB{&xbox, 5};
    
  public:
    OI();

    //Setting up xbox Left joystick.
    double XboxVertL();
    double XboxHorzL();

    //Setting up xbox Right joyscick.
    double XboxVertR();
    double XboxHorzR();
    
    //Setting up yoke Joystick.
    double YokeVert();
    double YokeHorz();

    //Setting up speed wheel.
    double YokeWheel();


};