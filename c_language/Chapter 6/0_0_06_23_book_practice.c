// Q.6: Write a C function to evaluate the series
// 
//       sin(x) = x - (pow(x, 3) / fact(3)) + (pow(x, 5) / fact(5)) - (pow(x, 7) / fact(7)) +....
//       up to 10 terms. 




















#include <stdio.h>

double power(double a, double b){
    double ans = 1.0;
    for(int i=b; i>=1; i--){ ans *= a;}

    return ans;
}

double fact(int n){
    double ans = 1.0;

    for(int i=1; i<=n; i++){ ans *= i;}

    return ans;
}

double sine(double x){
    double ans = 0.0;

    for(int i=1; i<=10; i++){
        ans += (power(x, 2*i - 1)/ fact(2*i - 1)) * (i % 2 == 0 ? -1: 1);
    }

    return ans;
}

int main(){
    double x; scanf("%lf", &x);

    double ans = sine(x);

    printf("%lf", ans);

    return 0;
}