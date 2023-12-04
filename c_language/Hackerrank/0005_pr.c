// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=false


// I solved this problem.


















#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    int sum = 0;

    int arr[5];

    for(int i=0; i<5; i++){
        arr[i] = n % 10;

        n /= 10;

        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}