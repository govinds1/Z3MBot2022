
#pragma once

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

#include <frc2/command/CommandHelper.h>
#include <frc2/command/CommandBase.h>
#include <frc/smartdashboard/SmartDashboard.h>

#include "subsystems/Tunnel.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 *
 *
 * @author ExampleAuthor
 */
class RunTunnel: public frc2::CommandHelper<frc2::CommandBase, RunTunnel> {
public:
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
    explicit RunTunnel(bool halfSpeed, Tunnel* m_tunnel);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

void Initialize() override;
void Execute() override;
bool IsFinished() override;
void End(bool interrupted) override;
bool RunsWhenDisabled() const override;


private:
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=VARIABLES

bool m_halfSpeed;
Tunnel* m_tunnel;


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=VARIABLES
};