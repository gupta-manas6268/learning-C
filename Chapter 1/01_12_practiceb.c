#include <stdio.h>

int main(){
    int radius;
    float pi = 3.14;

    printf("What is the radius of the circle\n");
    scanf("%f", radius);
    
    printf("The area of this circle is %f\n", pi*radius*radius);
    int height = 3;
    printf("Volume of this cylinder is %f\n", pi * radius * radius);
  return 0;
}