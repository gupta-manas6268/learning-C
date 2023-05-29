#include <stdio.h>
#include <math.h>

    int main(){
        float de;
        printf("Enter the value of angle in degrees \n");
        scanf("%f",&de);

        float ra;
        ra = de*3.14/180;

        ( pow(sin(ra),2) + pow(cos(ra),2) == 1)?
        printf("Sum of squares of sine and cosine of this angle is equal to 1 \n"):
        printf("Sum of squares of sine and cosine of this angle is not equal to 1 \n");
    return 0;
}