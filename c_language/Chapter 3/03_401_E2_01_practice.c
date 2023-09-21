#include <stdio.h>

    int main(){
        char ch;
        printf("Enter a character \n");
        scanf("%c",&ch);

        (ch>=97 && ch<=122)?
        printf("It is a lowercase alphabet \n"):
        printf("It is not a lowercase alphabet \n");
    
    return 0;
}