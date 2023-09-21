#include <stdio.h>
#include <math.h>

int power(int a){
    return a*a;
}
int main(){
    int x[10], y[10];

    for(int i=0; i<10; i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    int dis[9];
    int ans = 0;
    for(int i=1; i<10; i++){
        dis[i-1] = sqrt(power(x[i] - x[i-1]) + power(y[i] - y[i-1]));
        ans += dis[i-1];t
    }
    printf("%d", ans);

    return 0;
}