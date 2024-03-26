// Q.3: Write a program to illustrate the use of 
//       arrow operator (->) in C.


















#include <stdio.h>

typedef struct employee{
    int x; int y; int z;
}emp;


int main(){
    emp emp1; emp *ptr1;

    *ptr1 = emp1;

    // emp1 -> x = 101;
    // Above line will give error, Because arrow operator is 
    // only used when we use pointer structure.

    ptr1 -> x = 101;

    printf("%d", ptr1 -> x);

    return 0;
}