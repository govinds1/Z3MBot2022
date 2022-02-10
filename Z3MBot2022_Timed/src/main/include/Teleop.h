#pragma once

#include <frc/XboxController.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include "Drive.h"
#include "Shooter.h"
#include "Intake.h"
#include "Tunnel.h"
#include "Climber.h"
#include "Constants.h"

class Teleop {
    Drive* m_drive;
    Shooter* m_shooter;
    Intake* m_intake;
    Tunnel* m_tunnel;
    Climber* m_climber;
    frc::XboxController* m_controller1;
    frc::XboxController* m_controller2;

    public:
    Teleop(Drive* drive, Shooter* shooter, Intake* intake, Tunnel* tunnel, Climber* climber);
    void Init();
    void Periodic();
};