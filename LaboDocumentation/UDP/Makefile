All: udpTest

udpTest: main.o ObstacleData.o RobotData.o thread.o Client.o Point.o
	g++ main.o ObstacleData.o RobotData.o thread.o Client.o Point.o -lpthread -o udpTest

ObstacleData.o: ObstacleData.cpp
	g++ -c ObstacleData.cpp
#Point.o: ../strategy/Point.cpp
	#g++ -c ../strategy/Point.cpp 
Point.o: Point.cpp
	g++ -c Point.cpp 
RobotData.o: RobotData.cpp
	g++ -c RobotData.cpp
	
Client.o: Client.cpp
	g++ -c Client.cpp
	
thread.o: thread.cpp
	g++ -c thread.cpp

main.o: main.cpp 
	g++ -c main.cpp
	
clean:
	rm -f *.o Program
