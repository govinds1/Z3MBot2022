#pragma once

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

#include <frc2/command/CommandHelper.h>
#include <frc2/command/SequentialCommandGroup.h>

#include "commands/DriveDistance.h"

#include "subsystems/DriveBase.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 *
 *
 * @author ExampleAuthor
 */
class TaxiAuto: public frc2::CommandHelper<frc2::SequentialCommandGroup, TaxiAuto> {
public:
    explicit TaxiAuto(DriveBase* m_drivebase);

private:
    
};