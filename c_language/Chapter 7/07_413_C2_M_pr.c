#include <stdio.h>

float power(float a, float b){
    float ans = 1;

    for(int i=b; i>=1; i--){
        ans *= a;
    }

    return ans;
}

int main(){
    int n; scanf("%d", &n);

    float x[n];

    for(int i=0; i<n; i++){ scanf("%f", &x[i]);}

    float mean = 0;

    for(int i=0; i<n; i++){
        mean += x[i];
    }

    mean /= n;

    float stanDeviation = 0;

    for(int i=0; i<n; i++){
        stanDeviation += (power(x[i] - mean, 2));
    }

    stanDeviation /= n;

    printf("Mean Value = %f\n", mean);
    printf("Standard deviation is = %f\n", stanDeviation);

    return 0;
}