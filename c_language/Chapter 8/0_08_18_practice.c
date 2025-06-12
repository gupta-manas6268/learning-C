t

// Q.4: Write a program to count the occurence of a given 
//       character in a string.





















#include <stdio.h>
#include <string.h>

int main(){
    char *st; gets(st);

    int occurence[255] = {0};

    while(*st != '\0'){
        int a = *st;

        occurence[a]++;

        st++;
    }

    for(int i=0; i<255; i++){
        printf("%d = %c = %d", i+1, i+1, occurence[i]);
    }

    return 0;
}