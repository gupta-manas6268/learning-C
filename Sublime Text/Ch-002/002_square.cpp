#include "graphics.h"
#include <iostream>
#include <cmath>

// As 'square' is not a built-in function
void square_1(int x, int y, int a){
	rectangle(x, y, x+a, y+a);
}
void square_2(int x, int y, int a){
	rectangle(x-a/2, y-a/2, x+a/2, y+a/2);
}

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");

	square_1(100, 100, 100);
	square_2(100, 100, 100);
	
	getch();
	closegraph();

	return 0;
}