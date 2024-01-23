#include <stdio.h>
#include <math.h>

int power(int a, int b) {
    int ans = 1;

    for (int i = b; i >= 1; i--) {
        ans *= a;
    }

    return ans;
}

int main() {
    int n;
    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    int mean = 0;

    for (int i = 0; i < n; i++) {
        mean += x[i];
    }

    mean /= (float)n; // Corrected mean calculation

    float stanDeviation = 0;

    for (int i = 0; i < n; i++) {
        stanDeviation += power(x[i] - mean, 2);
    }

    stanDeviation = sqrt(stanDeviation / n); // Corrected standard deviation calculation

    printf("Mean Value = %d\n", mean);
    printf("Standard deviation is = %f\n", stanDeviation);

    return 0;
}
