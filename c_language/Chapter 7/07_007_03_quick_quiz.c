#include <stdio.h>

int main(){
    int a = 60;
    int *ptr_1 = &a;

    int b = 34;
    int *ptr_2 = &b;

    printf("ptr_1 = %u\n", ptr_1);
    printf("ptr_2 = %u\n", ptr_2);
    
    printf("'ptr_1' - 'ptr_2' = %u\n", (ptr_1) - (ptr_2));
    // 'ptr_1' - 'ptr_2' = (ptr_1 - ptr_2)/4.  // '4' because there are 4 bytes in 'int'.

    return 0;
}