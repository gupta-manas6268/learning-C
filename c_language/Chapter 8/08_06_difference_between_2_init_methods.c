#include <stdio.h>

int main(){
    char *ptr = "Manas Gupta";
    // char ptr[] = "Manas Gupta";  // If we uncomment this line and comment above line , than this code will not work. 
    ptr = "Manas Coding";
    printf("%s",ptr);

    return 0;
}