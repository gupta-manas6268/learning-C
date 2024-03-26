#include <stdio.h>
// At page "48" of "C notes".

int main(){
    int a = 60;
    int *ptr = &a;

    printf("ptr = %u\n", ptr);
    
    printf("a + ptr = %u\n", a + ptr);
    // Here, a + ptr = (a * 4) + ptr. // '4' is no. of bytes in a 'int'.

    return 0;
}