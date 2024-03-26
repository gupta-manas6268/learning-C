#include <stdio.h>

int main(){
    FILE *ptr;
    // fputc demo for writing a file
    ptr = fopen("putcdemo.txt", "w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);

    return 0;
}