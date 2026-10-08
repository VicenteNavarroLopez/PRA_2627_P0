#include <iostream>
#include "RoboticArm.h"


RoboticArm:RoboticArm(double x, double y, double z)
	: x(x),y(y),z(z);

holdingObject(false){

}

double RoboticArm::getX(){
	return x;
}

double RoboticArm::getY(){
	return y;
}

double RoboticArm::getZ(){
	return z;
}

bool RoboticArm::holdingObject(){
	return holdingObject;
 }

void RoboticArm::grab(){
	holdingObject = true ;
}

void RoboticArm::release(){
	holdingObject = false;
}

void RoboticArm:: move(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
}

int main(){

	RoboticArm robot;

	std::cout << ("Posicion Inicial":  << robot.getX() << robot.getY() << robotgetZ()); <<std::endl;

	robot.move(10.0, 20.0, 30.0);

	std::cout << ("Posicion Actual": <<robotgetX() << robot.getY() << robotgetZ()); <<std::endl;

	robot.release;

	return 0;
}
