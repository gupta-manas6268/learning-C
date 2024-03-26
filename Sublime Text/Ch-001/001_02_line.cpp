#include "graphics.h"
#include <iostream>
#include <cmath>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");

	line(100, 150, 200, 300);
	line(100, 150, 100, 300);
	line(100, 150, 200, 150);

	getch();
	closegraph();

	return 0;
}