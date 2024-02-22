#include "graphics.h"
#include <iostream>
#include <cmath>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");

	rectangle(100, 50, 300, 150);
	
	getch();
	closegraph();

	return 0;
}