#include <stdio.h>

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Deletion code.
int Deletion(int arr[], int size, int element, int index){
    
    for(int i = index; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
}


int main(){
    int arr[100] = {1, 2, 6, 78, 87};
    int size = 5, element = 45, index = 3;
    display(arr, size);

    Deletion(arr, size, element, index);

    size -= 1;
    display(arr, size);

    return 0;
}