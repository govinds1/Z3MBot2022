
#include "subsystems/Climber.h"
#include <frc/smartdashboard/SmartDashboard.h>


Climber::Climber(){
    SetName("Climber");
    SetSubsystem("Climber");

    AddChild("motor2", &m_motor2);
    m_motor2.SetInverted(false);

    AddChild("motor1", &m_motor1);
    m_motor1.SetInverted(false);
}

void Climber::Periodic() {
    // Put code here to be run every loop

}

void Climber::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation

}
