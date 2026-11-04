#include <iostream>
#include "RoboticArm.h"

using namespace std;

int main() {

	r = RoboticArm(0.0, 0.0, 0.0, false);
	r.move(1.0, 1.0, 1.0);
	r.grab();
	cout << "El brazo robótico está en: " << r.x << r.y << r.z << endl;
	
	return 0;
}
