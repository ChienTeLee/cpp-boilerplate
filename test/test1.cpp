/**
 * @file test1.cpp
 * @brief This is a test case 1.
 * @author Chien-Te Lee, Nantha Kumar Sunder
 * @copyright 2018
 *
 * This testcase test the class initialization and member function of set value and get value. 
 */

#include <gtest/gtest.h>
#include "pidController.h"

TEST(pidControllerTest, pidControllerCheckInitialValue) {
  pidController controller;

  /*!< test initialization value of class members */
  EXPECT_EQ(0.0, controller.getKp());
  EXPECT_EQ(0.0, controller.getKi());
  EXPECT_EQ(0.0, controller.getKd());
  EXPECT_EQ(1.0, controller.getTimestep());
  EXPECT_EQ(0.0, controller.getErrCur());
  EXPECT_EQ(0.0, controller.getErrPrev());
  EXPECT_EQ(0.0, controller.getErrInteg());
  EXPECT_EQ(0.0, controller.getErrDeriv());

  /*!< change value and test again */
  controller.setKp(0.1);
  controller.setKi(0.01);
  controller.setKd(0.2);
  controller.setTimestep(1.0);

  EXPECT_EQ(0.1, controller.getKp());
  EXPECT_EQ(0.01, controller.getKi());
  EXPECT_EQ(0.2, controller.getKd());
  EXPECT_EQ(1.0, controller.getTimestep());

  /*!< out put of member function findSpeed should not be 0.5 */
  EXPECT_NE(0.5, controller.findSpeed(100.0, 10.0));
}
