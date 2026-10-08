all: RoboticArm.h RoboticArm.cpp


RoboticArm.h.o:RoboticArm.cpp RoboticArm.h
	g++ -c RoboticArm.h

RoboticArm.cpp.o:RoboticArm.cpp RoboticArm.h
       g++ -c RoboticArm.cpp	

test: all
	./RoboticArm.h
	./RoboticArm.cpp


clean:
	rm -f *.o RoboticArm.h RoboticArm.cpp
