/**
 * @file pidController.cpp
 * @brief This is file implements member functions in class pidController.
 * @author Chien-Te Lee, Nantha Kumar Sunder
 * @copyright 2018
 *
 * Details
 * Class for a PID controller
 */

#include "pidController.h"

/**
 * @brief Consturctor for class pidController to initialize parameters
 * @return none
 */
pidController::pidController()
    : Kp(0.0),
      Ki(0.0),
      Kd(0.0),
      timestep(1.0),
      errCur(0.0),
      errPrev(0.0),
      errInteg(0.0),
      errDeriv(0.0) {
}

/**
 * @brief Set the class member Kp
 * @param inKp is the new value to be assigned to Kp
 * @return none
 */
void pidController::setKp(double inKp) {
  Kp = inKp;
}

/**
 * @brief Set the class member Ki
 * @param inKi is the new value to be assigned to Ki
 * @return none
 */
void pidController::setKi(double inKi) {
  Ki = inKi;
}

/**
 * @brief Set the class member Kd
 * @param inKd is the new value to be assigned to Kd
 * @return none
 */
void pidController::setKd(double inKd) {
  Kd = inKd;
}

/**
 * @brief Set the class member timestep
 * @param inTimestep is the new value to be assigned to timestep
 * @return none
 */
void pidController::setTimestep(double inTimestep) {
  timestep = inTimestep;
}

/**
 * @brief Get the class member Kp
 * @return value of Kp
 */
double pidController::getKp() {
  return Kp;
}

/**
 * @brief Get the class member Ki
 * @return value of Ki
 */
double pidController::getKi() {
  return Ki;
}

/**
 * @brief Get the class member Kd
 * @return value of Kd
 */
double pidController::getKd() {
  return Kd;
}

/**
 * @brief Get the class member timestep
 * @return value of timestep
 */
double pidController::getTimestep() {
  return timestep;
}

/**
 * @brief Get the class member errCur
 * @return value of errCur
 */
double pidController::getErrCur() {
  return errCur;
}

/**
 * @brief Get the class member errPrev
 * @return value of errPrev
 */
double pidController::getErrPrev() {
  return errPrev;
}

/**
 * @brief Get the class member errInteg
 * @return value of errInteg
 */
double pidController::getErrInteg() {
  return errInteg;
}

/**
 * @brief Get the class member errDeriv
 * @return value of errDeriv
 */
double pidController::getErrDeriv() {
  return errDeriv;
}

/**
 * @brief Implement PID control algorithm
 * @param desiredSpd is the desired output speed
 * @param measuredSpd is the measurement of current speed
 * @return output speed of PID algorithm
 */
double pidController::findSpeed(double desiredSpd, double measuredSpd) {
  double error = desiredSpd - measuredSpd;
  errInteg = errInteg + error * timestep;
  errDeriv = (error - errPrev) / timestep;
  errPrev = error;

  return (Kp * error + Ki * errInteg + Kd * errDeriv);
}

