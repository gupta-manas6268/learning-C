// https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true


// This Code shows me correct answer. But previous code doesn't give me correct answer.

















#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    gets(str);

    int l = strlen(str);

    for(int i=0; i<l; i++){
        if(str[i] == ' '){ printf("\n");}

        else{ printf("%c", str[i]);}

    }

    printf("\n");

    return 0;
}