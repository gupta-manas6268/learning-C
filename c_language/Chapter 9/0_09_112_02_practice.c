t

// Q.2: Write a function 'sumVector' which returns the sum of two
//       vectors passed to it. The vectors must be two-dimensional.




















#include <stdio.h>

typedef struct vector{
    int x; int y;
}vectors;

struct vector sumVector(vectors v[0], vectors v[1]){
    struct vector result;
    result.x = v[0].x + v[1].x;
    result.y = v[0].y + v[1].y;

    return result;
};


int main(){
    vectors v[2], sum;

    for(int i=0; i<2; i++){
        scanf("%d %d", &v[i].x, &v[i].y);
    }

    sum = sumVector(v[0], v[1]);
    
    return 0;
}