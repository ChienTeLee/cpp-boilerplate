/**
* @file pidController.cpp
* @brief This is file implements member functions in class pidController.
* @author Chien-Te Lee, Nantha Sunder
* @copyright 2018
*
*	Details
*/

#include "pidController.h"

/**
* @brief Set the class member Kp
* @param inKp is newly assigned value to class member kp
* @return void
*/
void pidController::setKp(double inKp) {
	/*!< implement your code here */
};

/**
* @brief Set the class member Ki
* @param inKi is new value assigned to class member ki
* @return void
*/
void pidController::setKi(double inKi) {
	/*!< implement your code here */
};

/**
* @brief Set the class member Kd
* @param inKd is new value assigned to class member kd
* @return void
*/
void pidController::setKd(double inKd) {
	/*!< implement your code here */
};

/**
* @brief Set the class member timestep
* @param inTimestep is new value assigned to class member timestep
* @return void
*/
void pidController::setTimestep(double inTimestep) {
	/*!< implement your code here */
};

/**
* @brief Implement PID control algorithm
* @param desiredSpd is the desired output speed
* @param measuredSpd is the measurement of current speed
* @return output speed of PID algorithm
*/
double pidController::getSpeed(double desiredSpd, double measuredSpd) {
	/*!< implement your code here */
	return 0.5;
};


