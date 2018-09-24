/**
* @file test1.cpp
* @brief This is a test case 1.
* @author Chien-Te Lee, Nantha Kumar Sunder
* @copyright 2018
*
*	Details
*/

#include <gtest/gtest.h>
#include <pidController.h>

TEST(pidControllerTest, pidControllerOutputValue) {
        double initialSpd = 10.0;
        double desiredSpd = 100.0;
        double Step = 2000;

        pidController controller;

        controller.Kp = 0.1;
        controller.Ki = 0.01;
        controller.Kd = 0.2;
        controller.timestep = 1.0;

        double measuredSpd = initialSpd;
        for (int i = 1; i < Step; i++) {
                measuredSpd = controller.findSpeed(desiredSpd, measuredSpd);
        }

        EXPECT_FLOAT_EQ(100.0, measuredSpd);
}
