#include <stdio.h>

int main(){
    float celsius, far;
    far = (celsius * 9 / 5) + 32;

    printf("What is the value of temmperature in celsius\n");
    scanf("%f", celsius);
    
    printf("The value of this celsius temperature in Fahrenhiet is %f", far);
  return 0;
}