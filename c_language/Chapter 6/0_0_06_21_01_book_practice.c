// Q.5: Write a C-function that receives 5 integers and returns the sum,
//       average and standard deviation of these numbers. Call this function
//       from main( ) and print the results in main( ).


















#include <stdio.h>
#include <math.h>

int power(int a, int b){
    int ans = 1;
    for(int i=b; i>=1; i--){ ans *= a;}

    return ans;
}

void function(int a, int b, int c, int d, int e, int *sum, float *avg, float *stanDev){
    *sum = a + b + c + d + e;
    *avg = (float)(*sum)/ 5;

    float sumOfSquares = power((a - *avg), 2) + power((b - *avg), 2) + power((c - *avg), 2) + power((d - *avg), 2) + power((e - *avg), 2);
    *stanDev = sqrt(sumOfSquares/ 5);
}

int main(){
    int a, b, c, d, e; scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int sum;
    float avg, stanDev;

    function(a, b, c, d, e, &sum, &avg, &stanDev);

    printf("%d %f %f", sum, avg, stanDev);

    return 0;
}