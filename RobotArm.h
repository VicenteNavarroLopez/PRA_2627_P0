#ifndef ROBOTARM_H
#define ROBOTARM_H

#include <iostream>

class RoboticArm {

	private:

		double x;
		double y;
		double z;
		bool isHolding;

	public:

		RoboticArm(double X, double Y, double Z, bool Hold);

		double getX();
		double getY();
		double getZ();
		bool Holding();

		void grab();
		void release();
		void move(double X, double Y, double Z);

};

#endif
