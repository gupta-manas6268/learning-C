#include <stdio.h>

    int main(){
        char ch;
        printf("Enter the character \n");
        scanf("%c",&ch);

        ((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))?
        printf("It is a special symbol \n"):
        printf("It is not a special symbol \n");
    
    return 0;
}