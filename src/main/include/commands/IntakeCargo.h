// RobotBuilder Version: 4.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: Command.

#pragma once

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

#include <frc2/command/CommandHelper.h>
#include <frc2/command/CommandBase.h>
#include <frc/smartdashboard/SmartDashboard.h>

#include "subsystems/Intake.h"
#include "subsystems/Tunnel.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 *
 *
 * @author ExampleAuthor
 */
class IntakeCargo: public frc2::CommandHelper<frc2::CommandBase, IntakeCargo> {
public:

    enum MotorsToRun {
        Roller, Wrist, Both
    };

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
    explicit IntakeCargo(MotorsToRun toRun, Intake* m_intake, Tunnel* m_tunnel);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

void Initialize() override;
void Execute() override;
bool IsFinished() override;
void End(bool interrupted) override;
bool RunsWhenDisabled() const override;


private:
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=VARIABLES


Intake* m_intake;
Tunnel* m_tunnel;
MotorsToRun m_toRun;


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=VARIABLES
};
