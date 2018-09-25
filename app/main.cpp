/**
 * @file main.cpp
 * @brief This is a simple program using PIP controller.
 * @author Chien-Te Lee, Nantha Kumar Sunder
 * @copyright 2018
 *
 * Details
 * We can set or take input for desired speed and initial speed.
 * We then create an object of the class pid controller and set
 * the parameters or gains. Then we run an infinite loop to get
 * from initial value to desired value. User can terminate the
 * program at will.
 *
 */

#include "pidController.h"
#include <iostream>

int main() {
  // vD is the desired speed, vI is the initial speed
  double vD = 100, vI = 10;
  std::cout << "Starting PID loop.." << std::endl;
  std::cout << "Current speed : " << vI << "\t" << "Desired speed : " << vD
            << std::endl;
  // Creating object of class and setting parameters
  pidController controller;
  controller.setKp(0.5);
  controller.setKi(0.2);
  controller.setKd(0.01);

  // run infinite loop
  while (true) {
    vI = vI + controller.findSpeed(vD, vI);
    std::cout << "Current speed : " << vI << "\t" << "Desired speed : " << vD
              << std::endl;
  }
  return 0;
}

