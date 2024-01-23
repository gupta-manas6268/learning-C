#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    float x[n], y[n];
    float sumXY = 0, sumX = 0, sumY = 0, sumXsq = 0;

    for(int i=0; i<n; i++){
        scanf("%f %f", &x[i], &y[i]);
    }

    for(int i=0; i<n; i++){
        sumXY += x[i] * y[i];
        sumX += x[i]; sumY += y[i];
        sumXsq += x[i] * x[i]; 
    }

    float a, b;
    b = ((n * sumXY) - (sumX * sumY))/ ((n * sumXsq) - (sumX * sumX));
    a = (sumY/ (float)n) - b * (sumX/ (float)n);

    printf("The straight line is: y = %f + %fx.", a, b);

    return 0;
}