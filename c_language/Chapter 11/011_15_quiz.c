#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) malloc(10*sizeof(int));

    int a = 1;
    for (int i = 0; i < 10; i++){
        ptr[i] = 7 * (i+1);
        printf("7 x %d is: %d\n", i+1, ptr[i]);
        a++;
    }

    printf("\n\nAfter reallocating....\n");

    ptr = realloc(ptr, 15*sizeof(int));
    
    int b = 1;
    for (int i = 0; i < 15; i++){
        ptr[i] = 7 * (i+1);

        printf("7 x %d is: %d\n", i+1, ptr[i]);
        b++;
    }

    return 0;
}