#include <gtest/gtest.h>
#include <pidController.h>

TEST(pidControllerTest, pidControllerOutputValue) {

        double initialSpd = 10.0;
        double desiredSpd = 100.0;
        double Step = 2000;

        pidController controller;

        controller.setKp(0.1);
        controller.setKi(0.01);
        controller.setKd(0.2);
        controller.setTimestep(1.0);

        double measuredSpd = initialSpd;
        for (int i = 1; i < Step; i++){
                measuredSpd = controller.getSpeed(desiredSpd, measuredSpd);
	}


        EXPECT_FLOAT_EQ(100.0, measuredSpd);
	
}
