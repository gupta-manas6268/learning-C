// Q.1: Write a program using recursion to calculate 
//       'n'th  element of fibonacci series.




















#include <stdio.h>
int fibonacci(int x);

int main(){
        int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);

        printf("The fibonacci value of %d is %d", n, fibonacci(n));

    return 0;
}
int fibonacci(int x){
    if (x==1){
        return 0;
    }
    else if (x==2){
        return 1;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}