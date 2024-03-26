// I just copy/pasted it so type and see
//  it carefully.

#include "graphics.h"
#include <iostream>
#include <cmath>

// Function that prints the value 
//  of pi
int printValueOfPi(){
	// Find value of pi using 
	//  acos() function
	double pi = 2 * cos(0.0);

	return pi;
}

// We make line of given length and starting point and of given angle
//  with x-axis.
void lineAtAngle(int x, int y, int length, int angle){
	int Pi = printValueOfPi();

	double rad = (double)angle*Pi/180.0;
	line(x, y, x+length*cos(rad), y-length*sin(rad));
}

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");

	linerel(100, 200);
	linerel(100, -100);
	linerel(100, 200);

	getch();
	closegraph();

	return 0;
}