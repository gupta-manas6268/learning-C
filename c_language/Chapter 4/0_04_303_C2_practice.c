// Q.11: Write a program to add first seven terms of the following series
//        1 / 1! + 2 / 2! + 3 / 3! + ......
// 
//        using a for loop:























#include <stdio.h>

int main(){
    float sum = 0;
    int fact = 1;
        for(int i=1; i<=7; i++){
            for(int j=1; j<=i; j++){
            fact*=j;
            } 
        sum += (i / (float)fact);
        fact/=fact;       
        }        
    printf("The sum of this series is %f", sum);

    return 0;
}