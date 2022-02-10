#pragma once

#include <ctre/Phoenix.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include "Constants.h"

class Drive {
    WPI_VictorSPX* m_frontRight;
    WPI_VictorSPX* m_backRight;
    WPI_VictorSPX* m_frontLeft;
    WPI_VictorSPX* m_backLeft;
    frc::DifferentialDrive* m_drive;

    public:
    Drive();
    void Init();
    void Periodic();

    void TankDrive(double left, double right);
    void ArcadeDrive(double speed, double rot);

};