/**
* @file pidController.h
* @brief This is file is declaration of class pidController.
* @author Chien-Te Lee, Nantha Kumar Sunder
* @copyright 2018
*
*	Details
*/

#ifndef INCLUDE_PIDCONTROLLER_H_
#define INCLUDE_PIDCONTROLLER_H_

/**
* @brief Class pidController
* @param Kp is proportional term in PID control algorithm
* @param Ki is integral term in PID control algorithm
* @param Kd is derivative term in PID control algorithm
* @param timestep is the differential of time
* @param errCur is the current error between desired speed and measured speed
* @param errPrev is the previous error between desired speed and measured speed
* @param errInteg is the integral of speed errors
* @param errDeriv is the differentials of speed errors
*/
class pidController {
 public:
        double Kp = 0.0;
        double Ki = 0.0;
        double Kd = 0.0;
        double timestep = 1.0;

        /**
        * @brief Get the class member errCur
        * @return value of errCur
        */
        double getErrCur();

        /**
        * @brief Get the class member errPrev
        * @return value of errPrev
        */
        double getErrPrev();

        /**
        * @brief Get the class member errInteg
        * @return value of errInteg
        */
        double getErrInteg();

        /**
        * @brief Get the class member errDeriv
        * @return value of errDeriv
        */
        double getErrDeriv();

        /**
        * @brief Implement PID control algorithm
        * @param desiredSpd is the desired output speed
        * @param measuredSpd is the measurement of current speed
        * @return output speed of PID algorithm
        */
        double findSpeed(double, double);

 private:
        double errCur = 0.0;
        double errPrev = 0.0;
        double errInteg = 0.0;
        double errDeriv = 0.0;
};


#endif    // INCLUDE_PIDCONTROLLER_H_


