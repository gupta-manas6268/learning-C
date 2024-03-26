// Q.7: If the lengths of the sides of a triangle are denoted by a, b, and c,
//       then area of triangle is given by
// 
//       area = sqrt(S(S-a)(S-b)(S-c)).
// 
//       where, S = ( a + b + c ) / 2. Write a function to calculate the area of
//       the triangle















#include <stdio.h>
#include <math.h>

double ar(double a, double b, double c, double *S, double *area){
    *S = (a + b + c)/ 2;

    *area = sqrt((*S) * (*S-a) * (*S-b) * (*S-c));
}

int main(){
    double a, b, c; scanf("%lf %lf %lf", &a, &b, &c);

    double S, area;

    double ans = ar(a, b, c, &S, &area);

    printf("%lf", ans);

    return 0;
}