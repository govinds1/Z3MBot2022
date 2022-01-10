#pragma once

#include <frc/XboxController.h>

namespace MotorPortConstants{
    constexpr int kBackLeftMotorPort = 0;
    constexpr int kFrontLeftMotorPort = 1;
    constexpr int kBackRightMotorPort = 2;
    constexpr int kFrontRightMotorPort = 3;
    constexpr int kIntakeMotorPort = 4;
    constexpr int kShooterMotorPort = 5;
    constexpr int kClimberMotor1Port = 6;
    constexpr int kClimberMotor2Port = 7;
}

namespace ControllerConstants {
    constexpr int kXboxControllerPort = 0;
    constexpr int kIntakeButton = (int)frc::XboxController::Button::kA;
    constexpr int kShootButton = (int)frc::XboxController::Button::kB;
}