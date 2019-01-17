
#include <RobotMap.h>

std::shared_ptr<WPI_TalonSRX> RobotMap::Talon1;
std::shared_ptr<WPI_TalonSRX> RobotMap::Talon2;
std::shared_ptr<WPI_TalonSRX> RobotMap::Talon3;
std::shared_ptr<WPI_TalonSRX> RobotMap::Talon4;

std::shared_ptr<VictorSP> RobotMap::Victor1
std::shared_ptr<VictorSP> RobotMap::Victor2

std::shared_ptr<MecanumDrive> RobotMap::Mecanums;

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

    Mecanums.reset(new MecanumDrive(*Talon4,*Talon3,*Talon2,*Talon1));
    Mecanums->SetSafetyEnabled(true);
    Mecanums->SetExpiration(0.1);
    Mecanums->SetMaxOutput(1.0);

    Victor1.reset(new VictorSP(0));
    Victor2.reset(new VictorSP(1));

    TowerOut.reset(new frc::Solenoid(0));
	TowerIn.reset(new frc::Solenoid(1));
	Grab.reset(new frc::Solenoid(2));
	Release.reset(new frc::Solenoid(3));
	Push.reset(new frc::Solenoid(4));
	Pull.reset(new frc::Solenoid(5));

    TowerOut->SetPulseDuration(.1);
	TowerIn->SetPulseDuration(.1);
	Grab->SetPulseDuration(.1);
	Release->SetPulseDuration(.1);
	Push->SetPulseDuration(.1);
	Pull->SetPulseDuration(.1);
}