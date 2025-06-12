#include <stdio.h>

int count(int arr[], int n){
    int a = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            a++;
        }
    }
    return a;
}
int main(){
    int n; scanf("%d", &n);
    int arr[n];

    int a = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int ans = count(arr, n);
    printf("The number of positive integer in this array are: %d", ans);

    return 0;
}