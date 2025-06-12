t

// For 010_13_pr.c
#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("write.txt", "r");
    char c = fgetc(ptr);

    while (c != EOF){
        fprintf(ptr, "%c", c);
        c = fgetc(ptr);
    }
    

    return 0;
}