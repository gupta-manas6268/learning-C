#include <stdio.h>

int main(){
    char *st;
    gets(st);

    char *ptr = st;
    while(*ptr != '\0'){
        *ptr += 1;
        ptr++;
    }
    puts(st);

    return 0;
}