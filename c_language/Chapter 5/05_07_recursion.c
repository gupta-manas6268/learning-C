#include <stdio.h>
int factorial(int x);

int main(){
    int a=5;
    printf("The value of factorial %d is %d", a, factorial(a));
    
    return 0;
}

int factorial(int x){
    printf("Calling factorial(%d)\n", x);
    if (x==1 || x==0){  // All recursive functions have "if" statement because without "if" statement ,the function will fall in an indefinite loop.
        return 1;
    }
    // if(0){}
    else{
        return x * factorial(x-1);
    }
}