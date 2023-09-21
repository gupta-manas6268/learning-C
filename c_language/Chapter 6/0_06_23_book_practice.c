// Q.6: Write a C function to evaluate the series
// 
//       sin(x) = x - (pow(x, 3) / fact(3)) + (pow(x, 5) / fact(5)) - (pow(x, 7) / fact(7)) +....
//       up to 10 terms. 




















#include <stdio.h>
#include <math.h>

int factorial(int x){
    if (x==1 || x==0){  
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}
double series(int x){
    double sin = 0.0;
    for(int i=0; i<=10; i++){
        sin+=(pow(-1, i+1) * pow(x, (2*i)-1)/ factorial(2*i-1));
    }
    return sin;
}

int main(){
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("The sum of first ten terms of this series is %.4lf", series(x));t

    return 0;
}