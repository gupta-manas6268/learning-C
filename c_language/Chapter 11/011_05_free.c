#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr, *ptr2;
    
    ptr = (int *) malloc(6 * sizeof(int));

    for(int i=0; i<6; i++){
        // ptr2 = (int *) malloc(6 * sizeof(int));
        
        printf("Enter the value of %d element is: ", i);
        scanf("%d", &ptr[i]);

        // free(ptr2); // To deallocate/free memory of 'ptr2' malloc function.
        free(ptr); // To deallocate/free memory of 'ptr2' malloc function.
    }

    for(int i=0; i<6; i++){
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}