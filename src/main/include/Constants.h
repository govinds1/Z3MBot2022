#pragma once

#include <frc/XboxController.h>

namespace MotorPortConstants{
    constexpr int kBackLeftMotorPort = 4;
    constexpr int kFrontLeftMotorPort = 1;
    constexpr int kBackRightMotorPort = 5;
    constexpr int kFrontRightMotorPort = 0;
    constexpr int kIntakeMotorPort = 2;
    constexpr int kShooterMotorPort = 7;
    constexpr int kCargoTunnelMotorPort = 8;
    constexpr int kClimberMotor1Port = 6;
    constexpr int kClimberMotor2Port = 3;
}

namespace ControllerConstants {
    constexpr int kXboxControllerPort = 0;
    constexpr int kIntakeButton = (int)frc::XboxController::Button::kA;
    constexpr int kShootButton = (int)frc::XboxController::Button::kB;
}