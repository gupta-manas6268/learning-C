#include <stdio.h>

void fibonacci(char fib[]){
    char fib[5];
    fib[0] = 'a'; fib[1] = 'b';

    printf("fib[0] = %c", fib[0]);
    printf("fib[1] = %c", fib[1]);

    for(int i=2; i<5; i++){
        strcat(fib[i-1], fib[i-2]);
        strcat(fib[i], fib[i-1]);

        printf("fib[%d] = %c ", i, fib[i]);t
    }
}
int main(){
    char *fib;

    fibonacci(fib);

    return 0;
}