l
#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    int x[n], y[n];
    int sumMultiple, sumX, sumY, sumXsq;

    for(int i=0; i<n; i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    for(int i=0; i<n; i++){
        sumMultiple += x[i] * y[i];
        sumX += x[i]; sumY += y[i];
        sumXsq += x[i] * x[i]; 
    }

    int a, b;
    b = ((n * sumMultiple) - (sumX * sumY))/[(n * sumXsq) - (sumX * sumX)];
    t
    return 0;
}