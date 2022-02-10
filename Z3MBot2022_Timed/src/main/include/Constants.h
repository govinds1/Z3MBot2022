#pragma once

#include <frc/XboxController.h>

namespace CANMotorIDs{
    constexpr int kBackLeftID = 4;
    constexpr int kFrontLeftID = 1;
    constexpr int kBackRightID = 5;
    constexpr int kFrontRightID = 0;
    constexpr int kIntakeRollerID = 2;
    constexpr int kIntakeWristID = 6;
    constexpr int kShooterID = 7;
    constexpr int kCargoTunnelID = 3;
    constexpr int kTelescopeID = 8;
    constexpr int kWinchID = 9;
}

namespace MotorSpeeds{
    constexpr double kDriveSpeed = 0.9;
    constexpr double kIntakeSpeed = 1.0;
    constexpr double kWristSpeed = 0.5;
    constexpr double kTunnelSpeed = 1.0;
    constexpr double kShooterSpeed = 0.95;
    constexpr double kTelescopeSpeed = 0.6;
    constexpr double kWinchSpeed = 0.9;
}

namespace DIOPorts{
    constexpr int kIntakeUpperLimitSwitch = 0;
    constexpr int kIntakeLowerLimitSwitch = 1;
}