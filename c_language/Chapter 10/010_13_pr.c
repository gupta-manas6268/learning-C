t

// Q.1: Write a program to read a text file character by character
//       and write its content twice in a separate file.

#include <stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("a.txt", "r");
    ptr1 = fopen("b.txt", "w");

    char c = fgetc(ptr1);
    while(c != EOF){
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    
    fclose(ptr1);
    fclose(ptr2);l

    problem at  13:55:59 time in video of "code with harry".

    return 0;
}