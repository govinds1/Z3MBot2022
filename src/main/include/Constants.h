#pragma once

#include <frc/XboxController.h>

namespace CANMotorIDs{
    constexpr int kBackLeftID = 4;
    constexpr int kFrontLeftID = 1;
    constexpr int kBackRightID = 5;
    constexpr int kFrontRightID = 0;
    constexpr int kIntakeRollerID = 2;
    constexpr int kIntakeWristMotorPort = 6;
    constexpr int kShooterID = 7;
    constexpr int kCargoTunnelID = 3;
    constexpr int kClimber1ID = 8;
    constexpr int kClimber2ID = 9;
}

namespace DIOPorts{
    constexpr int kIntakeUpperLimitSwitch = 0;
    constexpr int kIntakeLowerLimitSwitch = 1;
}

namespace ControllerConstants {
    constexpr int kXboxControllerPort = 0;
    constexpr int kIntakeButton = (int)frc::XboxController::Button::kA;
    constexpr int kShootButton = (int)frc::XboxController::Button::kB;
    constexpr int kClimb1UpButton = (int)frc::XboxController::Button::kLeftBumper;
    constexpr int kClimb1DownButton = (int)frc::XboxController::Button::kRightBumper;
    constexpr int kClimb2UpButton = 2;
    constexpr int kClimb2DownButton = 3;
    constexpr int kTunnelButton = (int)frc::XboxController::Button::kX;
}