// Calculate the Nth term.

// https://www.hackerrank.com/challenges/recursion-in-c/problem?isFullScreen=false



// I solved this problem.















#include <stdio.h>

int sum(int n, int a, int b, int c){
    if(n == 1){ return a;}
    else if(n == 2){ return b;}
    else if(n == 3){ return c;}
    else { return sum(n-1, a, b, c) + sum(n-2, a, b, c) + sum(n-3, a, b, c);}
}

int main(){
    int n; scanf("%d" , &n);

    int a, b, c; scanf("%d %d %d", &a, &b , &c);

    printf("%d\n", sum(n, a, b, c));

    return 0;
}