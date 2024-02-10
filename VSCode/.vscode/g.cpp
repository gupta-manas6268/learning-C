#include <graphics.h>
#include <iostream>
#include <math.h>
#include <stdlib.h> 
#include <ctype.h>
int main()
{
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph( & gd, & gm, data);
    //you can also pass NULL for 3rd parameter
    //example: initgraph(&gd, &gm, NULL);
    circle(400, 400, 100);
    getch();
    closegraph();
    return 0;
}