// https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-51/

#include <stdio.h>

void printArray(int* A, int n){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int *A, int n){
    int temp;

    for(int i=0; i<n; i++){  // For number of pass
        printf("Working on pass number %d\n", i+1);

        for(int j=0; j < n-1-i; j++){  // For comparison in each pass
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void bubbleSortAdaptive(int *A, int n){
    int temp;
    int isSorted = 0;

    for(int i=0; i<n; i++){  // For number of pass
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;

        for(int j=0; j < n-1-i; j++){  // For comparison in each pass
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

                isSorted = 0;
            }
        }

        if(isSorted){
            return;
        }
    }
}

int main(){
    int A[] = {12, 54, 65, 7, 23, 9};
    int n1 = 6;
    printArray(A, n1);  // Printing the array before sorting
    bubbleSortAdaptive(A, n1);  // Function to sort the array
    printArray(A, n1);  // Printing the array after sorting
    printf("\n");

    int B[] = {1, 2, 3, 4, 5, 6};  // Sorted Array
    int n2 = 6;
    printArray(B, n2);  
    bubbleSortAdaptive(B, n2);  
    printArray(B, n2); 
    printf("\n"); 

    int C[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};  // Sorted Array
    int n3 = 11;
    printArray(C, n3);  
    bubbleSortAdaptive(C, n3);  
    printArray(C, n3); 
    printf("\n"); 


    return 0;
}