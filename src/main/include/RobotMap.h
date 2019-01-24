
#pragma once

#include <frc/WPILib.h>

#include <ctre/Phoenix.h>

class RobotMap 
{
public:
    
    static void Init();
    
    static std::shared_ptr<WPI_TalonSRX> Talon1;
    static std::shared_ptr<WPI_TalonSRX> Talon2;
    static std::shared_ptr<WPI_TalonSRX> Talon3;
    static std::shared_ptr<WPI_TalonSRX> Talon4;

    static std::shared_ptr<frc::MecanumDrive> Mecanums;

    frc::VictorSP Victor1{0};
    frc::VictorSP Victor2{1};
    
    static std::shared_ptr<frc::Solenoid> TowerIn;
    static std::shared_ptr<frc::Solenoid> TowerOut;
    static std::shared_ptr<frc::Solenoid> Push;
    static std::shared_ptr<frc::Solenoid> Pull;
    static std::shared_ptr<frc::Solenoid> Grab;
    static std::shared_ptr<frc::Solenoid> Release;
};
