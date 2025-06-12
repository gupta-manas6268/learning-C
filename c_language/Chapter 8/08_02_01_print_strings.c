#include <stdio.h>

int main(){
    char str[] = "Manas";
    // char str[] = {'M', 'a', 'n', 'a', 's', '\0'};
    // char str[] = {'M', 'a', 'n', 'a', 's'};  // Print garbage value after "Manas".

    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}