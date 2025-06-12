#include <stdio.h>
#include <conio.h>

int fact(int num); // function prototype declaration.

int main(){
    int n, fac;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    fac = fact(n); // function call.

    printf("The factorial of %d is %d", n, fac);

    return 0;
}

int fact(int num){ // function definition
    int res;
    res = num;
    while (num > 1){
        res = res * (num - 1);
        num = num - 1;
    }
    return res;
}