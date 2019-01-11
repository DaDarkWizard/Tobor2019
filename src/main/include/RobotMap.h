
#pragma once

#include <WPILib.h>

class RobotMap 
{
public:
    
    // One time setup funtion
    static void Init();
    
    // Drive train initializer
    static std::shared_ptr<WPI_TalonSRX> Talon1;
    static std::shared_ptr<WPI_TalonSRX> Talon2;
    static std::shared_ptr<WPI_TalonSRX> Talon3;
    static std::shared_ptr<WPI_TalonSRX> Talon4;

    static std::shared_ptr<frc::MecanumDrive> Mecanums;
};
