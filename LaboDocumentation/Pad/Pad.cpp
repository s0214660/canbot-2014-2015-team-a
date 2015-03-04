#include "Pad.h"
using namespace std;

#define FIELDX 10
#define FIELDY 15

int main () {
  Pad pad;
  pad.calc(0,0,3,1,1);
  return 0;
}

/*
*		berekenen van tussenliggende hoek
*		berekenen van afstand
*/
void Pad::calc(int x,int y,int angle, int dx, int dy) {
		cout << "Calculating for:"<< endl;
		cout << "start(" << x << "," << y <<"," << angle <<")"<< endl;
		cout << "end(" << dx << "," << dy << ")"<< endl;
		
		this->distance = sqrt((dx-x)*(dx-x)+(dy-y)*((dy-y))) * GRIDRESOLUTION;	
		this->angle = atan2((dy-y),(dx-x))* 180 / PI - angle;
		
		cout << "Distance: " << this->getDistance() << endl;
		cout << "Angle: " << this->getAngle()<< endl;
}