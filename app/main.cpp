
// sample pid program

#include <iostream>

class pidController {
public:
	double findVelocity(double, double);
private:
	double Kp, Ki, Kd;
};

double pidController::findVelocity(double desiredVelocity, double currentVelocity) {
	return 0.5;
};


int main (){
	pidController controller1;
	std::cout << controller1.findVelocity(0.0, 0.0) << std::endl;
	return 0;
}

