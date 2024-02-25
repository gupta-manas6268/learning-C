// https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-56/

// See 2-Screenshot notes.

// (l -> low), (h -> high)
// Also run code when you comment line-55.

#include <stdio.h>

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int* A, int n){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do{
        while(A[i] <= pivot){
            i++;
        }

        while(A[j] > pivot){
            j--;
        }

        if(i < j){
            swap(&A[i], &A[j]);
        }
    } while(i < j);

    swap(&A[low], &A[j]);

    return j;
}

void quickSort(int A[], int low, int high){
    int partitionIndex; // Index of pivot after partition

    if(low < high){
        partitionIndex = partition(A, low, high);
        printArray(A, 9); // Also run code when you comment line-55.

        quickSort(A, low, partitionIndex-1); // sort left subArray.
        quickSort(A, partitionIndex+1, high); // sort right subArray.
    }
}

int main(){
    // 3, 5, 2, 13, 12, 3, 2, 13, 45
    // 3, 2, 2, 13(i), 12, 3(j), 5, 13, 45
    // 3, 2, 2, 3(j), 12(i), 13, 5, 13, 45 --> first call to partition 'returns 3'

    int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int n = 9;
    printArray(A, n);
    printf("\n");
    quickSort(A, 0, n-1);
    printArray(A, n);

    return 0;
}