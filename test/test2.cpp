/**
 * @file test1.cpp
 * @brief This is a test case 2.
 * @author Chien-Te Lee, Nantha Kumar Sunder
 * @copyright 2018
 *
 * This testcase runs pid control algorithm for 2000 times and check the output value.
 */

#include <gtest/gtest.h>
#include "pidController.h"

TEST(pidControllerTest, pidControllerOutputValue) {
  /*!< set initial condition */
  double initialSpd = 10.0;
  double desiredSpd = 100.0;
  double Step = 2000;

  pidController controller;

  /*!< set parameters */
  controller.setKp(0.1);
  controller.setKi(0.01);
  controller.setKd(0.2);
  controller.setTimestep(1.0);

  /*!< run 2000 times */
  double measuredSpd = initialSpd;
  for (int i = 1; i < Step; i++) {
    measuredSpd = controller.findSpeed(desiredSpd, measuredSpd);
  }

  /*!< check output */
  EXPECT_FLOAT_EQ(100.0, measuredSpd);
  EXPECT_FLOAT_EQ(10000.0, controller.getErrInteg());
}
