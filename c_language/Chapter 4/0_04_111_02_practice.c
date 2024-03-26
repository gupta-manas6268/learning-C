// Q.1.3: Write a program to check whether a given
//       number is prime or not using while loops?



















#include <stdio.h>

    int main(){
        int prime, n ,i=2;
        printf("The value of n is \n");
        scanf("%d",&n);

        while(i<n){
            if (n%i==0){
                prime = 1;
                // break;
                continue;
            }
            i++;
        }
        if (prime==1){
            printf("This is a non prime number");
        }
        else{
            printf("This is a prime number");
        }
    return 0;
}