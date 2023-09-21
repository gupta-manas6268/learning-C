// Q.3: Write a program using functions to print the 
//       following pattern( first n lines):
//        *
//        ***
//        *****  

















#include <stdio.h>
void printPattern(int n);

    int main(){
        int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);


        printPattern(n);
    return 0;
}

void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}  