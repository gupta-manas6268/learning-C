#include <stdio.h>
#include <math.h>

int main(){
    int P, t;
    float r, A;
    P = 100000;
    r = 0.10 ;

    for(int t=1; t<=10; t++){
        A = P * (pow((1 + r), t));
        printf("Population at the end of %d year is %f\n", t, A);
    }

    return 0;
}