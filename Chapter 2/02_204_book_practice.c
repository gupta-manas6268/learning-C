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