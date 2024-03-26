// Q.7: Write a program that interchanges the odd and even elements of
//       an array.





















#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i+=2){
        // Swap adjacent even and odd elements

        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}