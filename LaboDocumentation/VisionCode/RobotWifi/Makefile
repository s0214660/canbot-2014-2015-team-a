#---------------------Makefile------------------------------------------
#autor: Xavier Dooms
# red ball detection on camera stream
#  => Robot control

#declaraties
CC=g++-4.6
CFLAGS=-c
LFLAGS = $(pkg-config –libs opencv)
LFLAGS2 = -lopencv_core -lopencv_imgproc -lopencv_calib3d -lopencv_highgui -lopencv_objdetect -lopencv_features2d
LFLAGS3 = /usr/local/lib/libopencv_calib3d.so /usr/local/lib/libopencv_contrib.so /usr/local/lib/libopencv_core.so /usr/local/lib/libopencv_features2d.so /usr/local/lib/libopencv_flann.so /usr/local/lib/libopencv_gpu.so /usr/local/lib/libopencv_highgui.so /usr/local/lib/libopencv_imgproc.so /usr/local/lib/libopencv_legacy.so /usr/local/lib/libopencv_ml.so /usr/local/lib/libopencv_nonfree.so /usr/local/lib/libopencv_objdetect.so /usr/local/lib/libopencv_ocl.so /usr/local/lib/libopencv_photo.so /usr/local/lib/libopencv_stitching.so /usr/local/lib/libopencv_superres.so /usr/local/lib/libopencv_ts.a /usr/local/lib/libopencv_video.so /usr/local/lib/libopencv_videostab.so /usr/lib/x86_64-linux-gnu/libXext.so /usr/lib/x86_64-linux-gnu/libX11.so /usr/lib/x86_64-linux-gnu/libICE.so /usr/lib/x86_64-linux-gnu/libSM.so /usr/lib/x86_64-linux-gnu/libGL.so /usr/lib/x86_64-linux-gnu/libGLU.so -ltbb -lrt -lpthread -lm -ldl
LOPENCV= -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_objdetect -I/usr/local/include  -L/usr/local/lib

#oproepen
all: xx
	

xx: exec.x
	
	

#xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
exec.x: main.o Line.o FramePoints.o Obstakel.o Robot.o Client.o
	g++ main.o Line.o FramePoints.o Obstakel.o Robot.o Client.o -o exec.x $(LFLAGS3)


#ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
main.o: main.cpp
	g++ $(CFLAGS) main.cpp -o main.o $(LFLAGS3)

Line.o: Line.cpp
	g++ $(CFLAGS) Line.cpp -o Line.o $(LFLAGS3)

FramePoints.o: FramePoints.cpp
	g++ $(CFLAGS) FramePoints.cpp -o FramePoints.o $(LFLAGS3)

Obstakel.o: Obstakel.cpp
	g++ $(CFLAGS) Obstakel.cpp -o Obstakel.o $(LFLAGS3)

Robot.o: Robot.cpp
	g++ $(CFLAGS) Robot.cpp -o Robot.o $(LFLAGS3)

Client.o: Client.cpp
	g++ $(CFLAGS) Client.cpp -o Client.o $(LFLAGS3)

#rxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxrxr
run: exec.x
	./exec.x
	
	
#rmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmrmr
remove: 
	rm -rf *.o *.x
