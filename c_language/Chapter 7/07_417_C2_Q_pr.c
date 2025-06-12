#include <stdio.h>
#include <math.h>

float power(float a){
    return a*a;
}
int main(){
    float x[10], y[10];

    for(int i=0; i<10; i++){
        scanf("%f %f", &x[i], &y[i]);
    }

    float dis[9];
    float ans = 0;

    for(int i=1; i<10; i++){
        dis[i-1] = sqrt(power(x[i] - x[i-1]) + power(y[i] - y[i-1]));
        ans += dis[i-1];
    }

    printf("%f", ans);

    return 0;
}