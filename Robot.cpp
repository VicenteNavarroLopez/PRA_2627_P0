#include <iostream>
#include "RobotArm.h"

using namespace std;

int main() {


	RoboticArm r = RoboticArm(0.0, 0.0, 0.0, false);
	r.move(1.0, 1.0, 1.0);
	r.grab();
	cout << "El brazo robótico está en: " << r.getX()<< r.getY() << r.getZ() << endl;

	return 0;
}
