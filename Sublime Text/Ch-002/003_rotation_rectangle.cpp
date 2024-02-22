#include "graphics.h"
#include <iostream>
#include <cmath>

double printValueOfPi(){
    // Find value of pi using 
    //  acos() function
    double pi = 2 * cos(0.0);

    return pi;
}

void rectangleRotate(double cx, double cy, double w, double h, int angle=0){
	int Pi = printValueOfPi();

	double theta = (double)(angle%180)*Pi/180.0;
	double dx = w/2;
	double dy = h/2;

	double point[8] = {
		(-dx*cos(theta) - dy*sin(theta) + cx),
		(-dx*sin(theta) + dy*cos(theta) + cy),
		(dx*cos(theta) - dy*sin(theta) + cx),
		(dx*sin(theta) + dy*cos(theta) + cy),
		(dx*cos(theta) + dy*sin(theta) + cx),
		(dx*sin(theta) - dy*cos(theta) + cy),
		(-dx*cos(theta) + dy*sin(theta) + cx),
		(-dx*sin(theta) - dy*cos(theta) + cy)
	};

	for(int i=0; i<8; i+=2){
		line(point[i], point[i+1], point[(i+2)%8], point[(i+3)%8]);
	}
}

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");

	rectangleRotate(320, 240, 200, 100, 50);
	
	getch();
	closegraph();

	return 0;
}