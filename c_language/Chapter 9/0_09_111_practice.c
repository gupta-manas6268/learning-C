// Q.1: Create a two dimensional vector using Structures in C.























#include <stdio.h>
struct vector{
    int x;
    int y;
};
int main(){
    struct vector v1, v2;
    v1.x = 34;
    v1.y = 54;
    printf("X dim is %d and Y dim of vector 1 is %d\n", v1.x, v1.y); 

    v2.x = 34;
    v2.y = 54;
    printf("X dim is %d and Y dim of vector 2 is %d\n", v2.x, v2.y);   
    return 0;
}