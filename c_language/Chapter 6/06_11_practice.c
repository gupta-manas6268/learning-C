#include <stdio.h>

    int main(){
        int a;
        int *b;
        b = &a;

        printf("The address of the variable 'a' is %u\n", b);
        printf("The value of the variable 'a' is %d\n", *b);
    
    return 0;
}