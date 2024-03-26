#include <stdio.h>
#include <math.h>

int main(){
    int n; scanf("%d", &n);
    float x[n], y[n];

    float sumXY = 0, sumX = 0, sumY = 0, sumXsq = 0, sumYsq = 0;

    for(int i=0; i<n; i++){
        scanf("%f %f", &x[i], &y[i]);

        sumXY += x[i] * y[i]; sumX += x[i]; sumY += y[i]; sumXsq += x[i] * x[i]; sumYsq += y[i] * y[i];
    }

    float a1 = (n * sumXsq) - ((sumX) * (sumX));
    float a2 = (n * sumYsq) - ((sumY) * (sumY));

    float r;

    r = ((sumXY) - ((sumX) * (sumY)))/ (float)(sqrt(a1 * a2));

    printf("Correlation coefficient(r) = %f", r);

    return 0;
}