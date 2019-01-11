
#include <RobotMap.h>

std::shared_ptr<WPI_TalonSRX> RobotMap::Talon1;
std::shared_ptr<WPI_TalonSRX> RobotMap::Talon2;
std::shared_ptr<WPI_TalonSRX> RobotMap::Talon3;
std::shared_ptr<WPI_TalonSRX> RobotMap::Talon4;

std::shared_ptr<WPI_TalonSRX> RobotMap::Mecanums;

void RobotMap::Init()
{
    Talon1.reset(new WPI_TalonSRX(1));
    Talon2.reset(new WPI_TalonSRX(2));
    Talon3.reset(new WPI_TalonSRX(3));
    Talon4.reset(new WPI_TalonSRX(4));

    Talon1->SetInverted(true);
    Talon2->SetInverted(true);
    Talon3->SetInverted(true);
    Talon4->SetInverted(true);

    //Talon1->
}