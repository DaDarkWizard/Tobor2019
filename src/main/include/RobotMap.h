
#pragma once

#include <WPILib.h>

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

    static std::shared_ptr<VictorSP> Victor1;
    static std::shared_ptr<VictorSP> Victor2;
};
