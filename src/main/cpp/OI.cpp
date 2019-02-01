
#include "OI.h"

#include <frc/WPILib.h>

#include <commands/BallCommandIn.h>
#include <commands/BallCommandOut.h>

OI::OI()
{
    frc::Joystick yoke{0};
    frc::Joystick xbox{1};
    xboxRB.ToggleWhenPressed(new BallCommandIn);
    xboxLB.ToggleWhenPressed(new BallCommandOut);
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
    return yoke.GetRawAxis(0);
}

double OI::YokeWheel()
{
    return (yoke.GetRawAxis(2) * -1);
}

double OI::XboxLT()
{
    return xbox.GetRawAxis(3);
}

double OI::XboxRT()
{
    return xbox.GetRawAxis(2);
}