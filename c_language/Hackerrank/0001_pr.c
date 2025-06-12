// https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=false



// I solved this problem.
















#include <stdio.h>

int maximum(int a, int b, int c, int d){
    int maxi = a;

    int arr[4];
    arr[0] = a, arr[1] = b, arr[2] = c, arr[3] = d;

    for(int i=0; i<4; i++){
        if(arr[i] >= maxi){ maxi = arr[i];}

    }

    return maxi;
}
int main(){
    int a, b, c, d; scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = maximum(a, b, c, d);

    printf("%d\n", ans);

    return 0;
}