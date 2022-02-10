#pragma once

#include <rev/CANSparkMax.h>
#include "Constants.h"

class Shooter {
    rev::CANSparkMax* m_shooter;

    public:
    Shooter();
    void Init();
    void Periodic();

    void Run();
    void Stop();
};