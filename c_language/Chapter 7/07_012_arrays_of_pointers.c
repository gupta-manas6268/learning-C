#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    int array[n];
    int *arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
        arr[i] = &array[i];
    }
    for(int j=0; j<n; j++)
        printf("%d\n", *(arr[j]));
    
    return 0;
}