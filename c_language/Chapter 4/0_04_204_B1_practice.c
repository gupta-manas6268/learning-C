// Q.3: Write a program to print all the ASCII values and their equivalent
//       characters using a while loop? The ASCII values vary from 0 to 255.






















#include <stdio.h>
#include<conio.h>

    int main(){
        // char b;
        // char ascii;
        // int i=1;
        int i=0;

        while( i<=255 ){
        printf("%c = %d\n",i,i);
        i++;
        }
    return 0;
}