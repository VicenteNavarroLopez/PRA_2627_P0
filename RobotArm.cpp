#include <iostream>
#include "RobotArm.h"

	RoboticArm::RoboticArm(double X, double  Y, double  Z, bool Hold) {
		x = X;
		y = Y;
		z = Z;
		isHolding = Hold;
	}

	double RoboticArm::getX() { return x; }
	double RoboticArm::getY() { return y; }
	double RoboticArm::getZ() { return z; }
	bool RoboticArm::Holding() { return isHolding; }

	void RoboticArm::grab () {

		if (Holding()) std::cout << "No se puede sujetar el objeto: Ya estás sujetando uno!" << std::endl;
		else {
			isHolding = true;
			std::cout << "Se ha cojido el objeto." << std::endl;
		}
	}

	void RoboticArm::release () {

		if (!Holding()) std::cout << "No se puede soltar el objeto: No tienes ningun objeto!" << std::endl;
		else {
			isHolding = false;
			std::cout << "Se ha soltado el objeto." << std::endl;
		}
	}

	void RoboticArm::move(double X, double Y, double Z){

		x = X;
		y = Y;
		z = Z;
	}
