// Q.: Write a program to create an array of size n, using calloc
//      where 'n' is an integer entered by the user.




#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Enter n: "); scanf("%d", &n);

    int *ptr;
    
    ptr = (int *) calloc(n, sizeof(int));

    for(int i=0; i<n; i++){
        printf("Enter the value of %d element is: ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++){
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}