#include "graphics.h"
#include <iostream>
#include <cmath>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");

	arc(320, 240, 45, 150, 200);
	
	getch();
	closegraph();

	return 0;
}