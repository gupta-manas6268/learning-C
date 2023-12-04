// https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true


// This Code doesn't work on hackerrank.com and gives wrong answer. 



















#include <stdio.h>
#include <string.h>

int main(){
    char *str;
    gets(str);

    int l = strlen(str);

    while(*str != '\0'){
        if(*str == ' '){ printf("\n");}

        else{ printf("%c", *str);}

        str++;
    }

    printf("\n");

    return 0;
}