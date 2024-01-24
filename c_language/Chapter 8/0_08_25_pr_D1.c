t

// Q.8: Write a program that generates and prints the Fibonacci words of
//       order 0 through 5. If f(0) = "a", f(1) = "b", f(2) = "ba", 
//       f(3) = "bab", f(4) = "babba", etc.

















#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char* fib(char *x, char *y, int n){ // 'char*' to return strings in the function.

    char *z;
    *z = strcat(*z, *y); *z = strcat(*z, *x);

    if(n == 2){ return *z;}
    else{
        n--;

        return fib(*y, *z, n);
    }
}

int main(){
    int n; scanf("%d", &n);

    char *x, *y, *z;

    *x = "a"; *y = "b";

    *z = fib(*x, *y, n);

    printf("%s", *z);

    return 0;
}