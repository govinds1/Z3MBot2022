#pragma once

#include <frc/XboxController.h>

namespace CANMotorIDs{
    constexpr int kBackLeftID = 4;
    constexpr int kFrontLeftID = 1;
    constexpr int kBackRightID = 5;
    constexpr int kFrontRightID = 0;
    constexpr int kIntakeRollerID = 2;
    constexpr int kIntakeWristMotorPort = 9;
    constexpr int kShooterID = 7;
    constexpr int kCargoTunnelID = 8;
    constexpr int kClimber1ID = 6;
    constexpr int kClimber2ID = 3;
}

namespace DIOPorts{
    constexpr int kIntakeUpperLimitSwitch = 0;
    constexpr int kIntakeLowerLimitSwitch = 1;
}

namespace ControllerConstants {
    constexpr int kXboxControllerPort = 0;
    constexpr int kIntakeButton = (int)frc::XboxController::Button::kA;
    constexpr int kShootButton = (int)frc::XboxController::Button::kB;
    constexpr int kClimbButton = (int)frc::XboxController::Button::kRightBumper;
}