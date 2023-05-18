#include <stdio.h>

    int main(){
        int distance;
        printf("The distance between two cities in Km. is \n");
        scanf("%d", &distance);

        int a,b,c,d;
        a = distance*1000;
        b = (distance*1000*10)/3;
        c = distance*1000*40;
        d = distance*1000*100;

        printf("The distance between cities in meters is %d\n", a);
        printf("The distance between cities in feet is %d\n", b);
        printf("The distance between cities in inches is %d\n", c);
        printf("The distance between cities in cm is %d\n", d);

    return 0;
}