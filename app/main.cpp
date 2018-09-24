/**
* @file main.cpp
* @brief This is a simple program using PIP controller.
* @author Chien-Te Lee, Nantha Sunder
* @copyright 2018
*
*	Details
*/

#include "pidController.h"
#include <iostream>


int main (){
	/*!< implement your code here */
	pidController dummy;
	std::cout << dummy.getSpeed(0.0, 0.0) << std::endl;
	return 0;
}


