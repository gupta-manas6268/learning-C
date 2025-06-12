#include <stdio.h>

int main(){
    int arr[10];
    // int *ptr = &arr[0];
    int *ptr = arr;
    // printf("The value of element with address *(ptr + 2) is %d\n", *(ptr + 2));

    if( *(ptr + 2) == arr[2]){
        printf("(ptr + 2) points to the third element of the array.\n");
    }
    else{
        printf("(ptr + 2) do not points to the third element of the array.\n");
    }
    return 0;
}