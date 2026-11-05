all: Robot

RobotArm.o: RobotArm.cpp RobotArm.h
	g++ -c RobotArm.cpp
Robot.o: Robot.cpp RobotArm.h
	g++ -c Robot.cpp
Robot: Robot.o RobotArm.o
	g++ -o Robot Robot.o RobotArm.o

clean: 
	rm -f *.o Robot

test: all
	./Robot
