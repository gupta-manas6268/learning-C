#include <stdio.h>

int main(){
    int a = 60;
    int *ptr = &a;

    printf("ptr = %u\n", ptr);
    
    printf("ptr - a = %u\n", ptr - a);
    
    return 0;
}