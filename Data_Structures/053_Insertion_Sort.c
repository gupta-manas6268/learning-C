// https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-53/

#include <stdio.h>
#include <stdlib.h>

void printArray(int* A, int n){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n){
    int key, j;
    // Loop for passes
    for(int i=1; i <= n-1; i++){
        key = A[i];
        j = i-1;

        // Loop for each pass
        while((j >= 0) && (A[j] > key)){ // For Sorting in Ascending Order.
        // while((j >= 0) && (A[j] < key)){ // For Sorting in Desending Order.
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){
    // Index ->  0    1   2   3  4   5
    // Value -> 12,  54, 65, 07, 23, 9 --> i=1, key=54, j=0
    // Value -> 12,| 54, 65, 07, 23, 9 --> 1st pass done (i=1)!

    // Value -> 12, 54,| 65, 07, 23, 9 --> i=2, key = 65, j=1
    // Value -> 12, 54,| 65, 07, 23, 9 --> 2nd pass done (i=2)!

    // Value -> 12, 54, 65,| 07, 23, 9 --> i=3, key = 7, j=2
    // Value -> 12, 54, 65,| 07, 23, 9 --> i=3, key = 7, j=1
    // Value -> 12, 54, 65,| 65, 23, 9 --> i=3, key = 7, j=0
    // Value -> 12, 54, 65,| 65, 23, 9 --> i=3, key = 7, j=-1
    // Value -> 07, 12, 54, 65,| 23, 9 --> i=3, key = 7, j=-1 --> 3rd pass done (i=2)!

    // Value -> 07, 12, 54, 65,| 23, 9 --> i=4, key = 23, j=3
    // Value -> 07, 12, 23, 54,| 65, 9 --> After 4th pass 

    // Value -> 07, 12, 23, 54, 65,| 9 --> i=5, key=09, j=4
    // Value -> 07,  9, 12, 23, 54, 65|  --> After 5th pass 

    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);

    return 0;
}