// #include "graphics.h"
// #include <iostream>
// using namespace std;

// int main(){
// 	initwindow(800, 800, "BGI Graphics");

// 	// code here
// 	cout << "Hello";
// 	int a, b;
// 	cin >> a >> b;
// 	// bar(0, 0, 300, 100);
// 	bar(0, 0, a, b);
// 	getch();
// 	return 0;
// }
#include<graphics.h> // This is a C-graphics program.                                                    t
#include<stdio.h>
int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	int a, b, c;
	printf("Hello");
	scanf("%d %d %d", &a, &b, &c);
	// cin >> a >> b >> c;

	// circle(320,240,200); 
	circle(a,b,c); 
	getch();
	closegraph();
	
	return 0;
}