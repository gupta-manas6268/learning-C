// Q.2: Write a function 'sumVector' which returns the sum of two
//       vectors passed to it. The vectors must be two-dimensional.



















#include <stdio.h>
struct vector{
    int x;
    int y;
}; 

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main(){
    struct vector v1, v2, sum;
    printf("X and Y coordinates of vector 1 is: \n");
    scanf("%d %d", &v1.x, &v1.y);

    printf("X and Y coordinates of vector 2 is: \n");
    scanf("%d %d", &v2.x, &v2.y);

    
    sum = sumVector(v1, v2);
    printf("X coordinates of result is %d and Y coordinates is %d: \n", sum.x, sum.y);

    return 0;
}