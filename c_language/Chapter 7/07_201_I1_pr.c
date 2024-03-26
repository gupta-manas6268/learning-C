#include <stdio.h>

void reverse(int *arr, int n){
    int temp;
    for(int i=0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main(){
    int n; scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    reverse(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}