// https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true


// Not solved



#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){ scanf("%d", &arr[i]);}

    int array[n];

    for(int i=n-1; i=0; i--){ array[n-1-i] = arr[i];}

    for(int i=0; i<n; i++){ printf("%d ", array[i]);}
    
    return 0;
}