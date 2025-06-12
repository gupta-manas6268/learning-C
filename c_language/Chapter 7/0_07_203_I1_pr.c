// Q.5: Write a program using pointers to find the smallest number in an
//       array of 25 integers.




















#include <stdio.h>

int min(int *arr, int n){
    int *ptr = arr;
    int min = 0;

    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            min = arr[i];
        }
        else{
            min = arr[i-1];
        }
        return min;
    }
}
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    int *ptr = arr;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int ans = min(arr, n);
    printf("%d", ans);

    return 0;
}