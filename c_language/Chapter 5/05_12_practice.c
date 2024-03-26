#include <stdio.h>
float far(float cel);

    int main(){
        float cel;
        printf("Enter the temperature in celsius \n");
        scanf("%f",&cel);
        printf("Temperature in farenheit is %f", far(cel));
    
    return 0;
}

float far(float cel){
    float far;
    far = (float)(cel * 9/5 + 32); 
    return far;
}