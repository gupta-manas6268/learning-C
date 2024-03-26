#include "graphics.h"
#include <iostream>
#include <cmath>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");

	// arc(320, 240, 45, 150, 200);

	// // Experiment 1
	// for(int i=0; i<360; i++){
	// 	cleardevice();
	// 	arc(320, 240, 0, i, 200);

	// 	swapbuffers();
	// 	delay(10);
	// }
	
	// // Experiment 2
	// for(int i=0; i < 360 * 3; i++){
	// 	cleardevice();
	// 	arc(320, 240, -i, 80-i, 200);

	// 	swapbuffers();
	// 	delay(10);
	// }

	// Experiment 3
	for(int i=0; i < 360; i+=30){

		for(int j=0; j<360; j++){
			cleardevice();
			arc(320, 240, i-j, i+j, 200);

			swapbuffers();
			delay(10);
		}
	}

	getch();
	closegraph();

	return 0;
}