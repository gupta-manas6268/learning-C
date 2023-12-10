l
#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<n; i+=2){
        arr[i] += arr[i-1] - arr[i];
        arr[i-1] += arr[i] - arr[i-1];
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);t
    }

    return 0;
}