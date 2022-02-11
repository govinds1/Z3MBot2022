#include "Teleop.h"

Teleop::Teleop(Drive* drive, Shooter* shooter, Intake* intake, Tunnel* tunnel, Climber* climber):
m_drive(drive), m_shooter(shooter), m_intake(intake), m_tunnel(tunnel), m_climber(climber) {
    m_controller1 = new frc::Joystick(0);
    m_controller2 = new frc::Joystick(1);
}

void Teleop::Init() {
    m_drive->Init();
    m_shooter->Init();
    m_intake->Init();
    m_tunnel->Init();
    m_climber->Init();
}

void Teleop::Periodic() {
    m_drive->Periodic();
    m_shooter->Periodic();
    m_intake->Periodic();
    m_tunnel->Periodic();
    m_climber->Periodic();

    // Drive
    m_drive->ArcadeDrive(m_controller1->GetRawAxis(N64::kStickYAxis), m_controller1->GetRawAxis(N64::kStickXAxis));
    // m_drive->TankDrive(m_controller->GetLeftY(), m_controller1->GetRightY());

    // Shooter
    if (m_controller2->GetRawButton(N64::kBButton)) {
        m_shooter->Run();
    } else {
        m_shooter->Stop();
    }

    // Intake
    // if (m_controller2->GetRawButton(N64::kAButton)) {
    //     m_intake->RunRoller();
    // } else {
    //     m_intake->StopRoller();
    // }

    // Wrist
    // if (m_controller2->GetRawButton(N64::kRightBumperButton)) {
    //     m_intake->MoveWristUp();
    // } else if (m_controller2->GetRawButton(N64::kLeftBumperButton)) {
    //     m_intake->MoveWristDown();
    // } else {
    //     m_intake->StopWrist();
    // }

    // Tunnel
    if (m_controller2->GetRawButton(N64::kRightBumperButton)) {
        m_tunnel->Run();
    } else if (m_controller2->GetRawButton(N64::kLeftBumperButton)){
        m_tunnel->RunBackwards();
    } else {
        m_tunnel->Stop();
    }

    // Climber Telescope
    if (m_controller1->GetRawAxis(N64::kCYAxis) <= -0.05) {
        m_climber->RaiseTelescope();
    } else if (m_controller1->GetRawAxis(N64::kCYAxis) >= 0.05) {
        m_climber->LowerTelescope();
    } else {
        m_climber->StopTelescope();
    }

    // Climber Winch
    if (m_controller1->GetRawButton(N64::kLeftBumperButton)) {
        m_climber->RaiseWinch();
    } else if (m_controller1->GetRawButton(N64::kRightBumperButton)) {
        m_climber->LowerWinch();
    } else {
        m_climber->StopWinch();
    }
}