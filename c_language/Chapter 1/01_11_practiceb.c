#include <stdio.h>

int main(){
    float length, breadth,height;
    printf("What is the length of the rectangle\n");
    scanf("%f", &length);

    printf("What is the breadth of the rectangle\n");
    scanf("%f", &breadth);

    printf("What is the height of the rectangle\n");
    scanf("%f", &height);

    printf("The volume of your rectangle is %f", length*breadth*height);
  return 0;
}