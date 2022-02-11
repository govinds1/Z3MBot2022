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

namespace N64 {
    constexpr int kBButton = 3;
    constexpr int kAButton = 2;
    constexpr int kStartButton = 10;
    constexpr int kStickYAxis = 1;
    constexpr int kStickXAxis = 0;
    constexpr int kLeftBumperButton = 5;
    constexpr int kRightBumperButton = 6;
    constexpr int kZButton = 7;
    
    // C Buttons are treated like Trigger Axes!!
    constexpr int kCXAxis = 2;
    constexpr int kCYAxis = 3;
}