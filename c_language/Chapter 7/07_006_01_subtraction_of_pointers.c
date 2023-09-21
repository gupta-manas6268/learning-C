#include <stdio.h>

int main(){

    int i = 58;
    int *ptr_1 = &i;
    printf("ptr_1 = %u\n",ptr_1);

    int j = 58;
    int *ptr_2 = &j;
    printf("ptr_2 = %u\n",ptr_2);

    printf("'ptr_1' - 'ptr_2' = %u\n", ptr_1 - ptr_2);

    return 0;
}