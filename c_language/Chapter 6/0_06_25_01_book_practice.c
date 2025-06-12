// Q.7: If the lengths of the sides of a triangle are denoted by a, b, and c,
//       then area of triangle is given by
// 
//       area = sqrt(S(S-a)(S-b)(S-c)).
// 
//       where, S = ( a + b + c ) / 2. Write a function to calculate the area of
//       the triangle






















#include <stdio.h>
#include <math.h>

void area(float a, float b, float c, float *s,float *ar){
    *s = (a + b + c) / 2;
    *ar = sqrt((*s) * (*s-a) * (*s-b) * (*s-c));
    printf("s = %f\n", *s);
}

int main(){
    float a, b, c , s, ar;
    printf("Enter the three sides of the triangle \n");
    scanf("%f %f %f", &a, &b, &c);

    area(a, b, c, &s, &ar);
    printf("The area of the triangle is %f\n", ar);

    return 0;
}