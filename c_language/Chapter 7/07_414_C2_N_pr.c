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

        area[i] = (0.5) * a[i] * b[i] * sin(angle[i]);  // Use 0.5 for proper division
        // area[i] = (1/2) * a[i] * b[i] * sin(angle[i]); // This line gives me Wrong answer.
        
        printf("%f \n", area[i]);

        max = maximum(max, area[i]);
    }
    printf("%f", max);

    return 0;
}