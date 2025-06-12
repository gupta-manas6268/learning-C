#include <stdio.h>

void modify(int *arr, int n){
    for(int i=0; i<10; i++){
        arr[i] *= 3;
    }
}
int main(){
    int arr[10];

    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    modify(arr, 10);
    for(int i=0; i<10; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
}