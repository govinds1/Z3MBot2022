#pragma once

#include <ctre/Phoenix.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include "Constants.h"

class Intake {
    //WPI_VictorSPX* m_wrist;
    //WPI_VictorSPX* m_intake;

    // define limit switches

    public:
    Intake();
    void Init();
    void Periodic();
    
    void RunRoller();
    void StopRoller();

    void MoveWristDown();
    void MoveWristUp();
    void StopWrist();
};