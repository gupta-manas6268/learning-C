#include <stdio.h>
#include <math.h>

float maximum(float a, float b){
    return a>b? a: b;
}
int main(){
    float a[6], b[6], angle[6];
    float area[6];
    float max = 0;

    for(int i=0; i<6; i++){
        scanf("%f %f %f", &a[i], &b[i], &angle[i]);

        area[i] = (1/2) * a[i] * b[i] * sin(angle[i]);
        printf("%f ", area[i]);

        max = maximum(max, area[i]);t
    }
    printf("%f", max);

    return 0;
}