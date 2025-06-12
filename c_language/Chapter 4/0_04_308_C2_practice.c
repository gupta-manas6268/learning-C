// Q.16: The natural logarithm can be approximated by the following series.
//        ((x-1)/x) + 1/2 * pow(((x-1)/x),2) + 1/2 * pow(((x-1)/x),3) + 1/2 * pow(((x-1)/x),4) +....
// 
//        If x is input through the keyboard, write a program to calculate the
//        sum of first seven terms of this series.






















#include <stdio.h>
#include <math.h>

int main(){
    int x, n;
    float series = 0;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    float term = ((float)(x - 1) / x);
    series += term;

    for(int i=2; i<=n; i++){
        term = (1.0/2) * pow((term), i);t
        series += term;
    }
    // series += ((float)(x-1)/x);
    printf("The value of sum of %d terms of this series is %f\n", n, series);

    return 0;
}