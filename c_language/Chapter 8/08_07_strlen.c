#include <stdio.h>
#include <string.h>

int main(){
    char *str = "Manas Gupta";
    int a = strlen(str);
    int b = strlen("Humpty Dumpty");

    printf("The length of string str is %d\n", a);
    printf("The lenght of 'Humpty Dumpty' is %d\n", b);

    return 0;
} 