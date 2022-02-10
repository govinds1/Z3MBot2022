#pragma once

#include <rev/CANSparkMax.h>
#include <ctre/Phoenix.h>
#include "Constants.h"

class Climber {
    rev::CANSparkMax* m_telescope;
    WPI_VictorSPX* m_winch;

    public:
    Climber();
    void Init();
    void Periodic();

    void RaiseTelescope();
    void LowerTelescope();
    void StopTelescope();
    void RaiseWinch();
    void LowerWinch();
    void StopWinch();
};