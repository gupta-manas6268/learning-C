// Q.9: Write a program to print all prime numbers from 1 to 300. (Hint:
//       Use nested loops, break and continue)




















#include <stdio.h>

int main(){
    printf("2 is a prime number.\n");
    for(int i=3; i<=300; i++){
        for(int j=2; j<i; j++){
            if(i%j == 0){
                break;
            }
            else if(i == j+1){
                printf("%d is a prime number.\n", i);
            }
        }
    }        
    return 0;
}