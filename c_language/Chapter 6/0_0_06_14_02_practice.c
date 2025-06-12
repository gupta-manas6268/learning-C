// Q.3.2: Write a program using a function which calculates the 
//       sum and average of two numbers. Use pointers and print
//       the values of sum and average in main(). 
























// If a function is to be made to return more than one value at a time,
// then return these values indirectly by using a call by reference.
#include <stdio.h>
// Does not work without pointers.
void sumAndAvg( int a, int b, int sum, float avg){
    sum = a + b;
    avg = (float)(sum) / 2;
}

    int main(){
        int i, j, sum;
        float avg;
        i = 3;
        j = 6;
        sumAndAvg( i, j, sum, avg);
        printf("The value of sum is %d \n", sum);
        printf("The value of avg is %f \n", avg);
      
    return 0;
}