#pragma once

#include <ctre/Phoenix.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include "Constants.h"

class Tunnel {
public:
    WPI_VictorSPX* m_tunnel;

    public:
    Tunnel();
    void Init();
    void Periodic();

    void Run();
    void RunBackwards();
    void Stop();
};