#include <stdio.h>

void printArray(int* A, int n){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
    int indexOfMin, temp;
    printf("Running Selection sort...\n");

    for(int i=0; i < n-1; i++){
        indexOfMin = i;

        for(int j = i+1; j<n; j++){
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        
        // Swap A[i] & A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

int main(){
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    // Index ->  00  01  02  03  04
    // Value -> |03, 05, 02, 13, 12

    // After first pass
    // Index -> 00   01  02  03  04
    // Value -> 02, |05, 03, 13, 12        

    // After second pass
    // Index -> 00  01   02  03  04
    // Value -> 02, 03, |05, 13, 12

    // After third pass
    // Index -> 00  01  02   03  04
    // Value -> 02, 03, 05, |13, 12

    // After fourth pass
    // Index -> 00  01  02  03   04
    // Value -> 02, 03, 05, 12, |13


    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}