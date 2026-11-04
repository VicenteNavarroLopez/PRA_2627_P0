include <iostream>
include "RoboticArm.h"

class RoboticArm {

	private:

		double x;
		double y;
		double z;
		bool isHolding;
	
	public:

		RoboticArm(double X, double  Y, double  Z, bool Hold) {
			x = X;
			y = Y;
			z = Z;
			isHolding = Hold;
		}

		double GetX() { return x; }
		double GetY() { return y; }
		double getZ() { return z; }
		bool Holding() { return isHolding; }

		void grab () {
			
			if (Holding()) std::cout << "No se puede sujetar el objeto: Ya estás sujetando uno!" << std::endl;
			else {
				isHolding = true;
				std::cout << "Se ha cojido el objeto." << std::endl;
			}
		}

		void release () {
			
			if (!Holding()) std::cout << "No se puede soltar el objeto: No tienes ningun objeto!" << std::endl;
			else {
				isHolding = false;
				std::cout << "Se ha soltado el objeto." << std::endl;
			}
		}

		void move(double X, double Y, double Z){
			
			x = X;
			y = Y;
			z = Z;		
		}
};
