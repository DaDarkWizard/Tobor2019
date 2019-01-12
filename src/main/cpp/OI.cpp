
#include "OI.h"

#include <frc/WPILib.h>

OI::OI()
{
    Joystick yoke{0};
    Joystick xbox{1};
    xboxRB.toggleWhenPressed(new BallCommandIn);
    //xboxLB.WhenPressed();
}

double OI::XboxVertL()
{
    return (xbox.GetRawAxis(1) * -1);
}

double OI::XboxHorzL()
{
    return xbox.GetRawAxis(0);
}

double OI::XboxVertR()
{
    return (xbox.GetRawAxis(5) * -1);
}

double OI::XboxHorzR()
{
    return xbox.GetRawAxis(4);
}

double OI::YokeVert()
{
    return (yoke.GetRawAxis(1) * -1);
}

double OI::YokeHorz()
{
    return xbox.GetRawAxis(0);
}

double OI::YokeWheel()
{
    return (xbox.GetRawAxis(2) * -1);
}