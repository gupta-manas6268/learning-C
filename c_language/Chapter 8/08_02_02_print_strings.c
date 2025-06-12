#include <stdio.h>

int main(){
    char str[] = "Manas";
    // char str[] = {'M', 'a', 'n', 'a', 's', '\0'};
    // char str[] = {'M', 'a', 'n', 'a', 's'};  // Print garbage value after "Manas".

    int i=0;
    while(str[i] !='\0'){
        printf("%c", str[i]);
        i++;
    }
    return 0;
}