//  Q.3: Write a program to receive Cartesian co-ordinates (x,y) of a 
//        point and convert them into polar co-ordinates (r,fi).
//        Hint: r = sqrt ( x2 + y2 ) and fi = tan-1 ( y / x ). ?





















#include <stdio.h>
#include <math.h>

    int main(){
        float x,y;
        printf("The value of x & y is \n");
        scanf("%f %f", &x ,&y);

        float r,theta;
        r = sqrt(x*x + y*y);
        theta = atan(y/x);

        printf("The polar coordinates of the point is %f and %f\n",r ,theta);

        
    
    return 0;
}