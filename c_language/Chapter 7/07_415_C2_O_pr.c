l
#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int x[n], y[n];

    float sumMultiple = 0, sumX = 0, sumY = 0, sumXsq = 0, sumYsq = 0;

    for(int i=0; i<n; i++){
        scanf("%d %d", &x[i], &y[i]);

        sumMultiple += x[i] * y[i]; sumX += x[i]; sumY += y[i]; sumXsq += x[i] * x[i]; sumYsq += y[i] * y[i];
    }
    float a1 = (n * sumXsq) - (sumXsq);
    float a2 = (n * sumYsq) - (sumYsq);
    if(a1 % 1 == 0){
        a1;
    }
    return 0;
}