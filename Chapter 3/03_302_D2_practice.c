#include <stdio.h>

    int main(){
        char ch;
        printf("Enter the character \n");
        scanf("%c",&ch);

        if(ch>=65 && ch<=90){
            printf("It is a capital letter");
        }
        else if(ch>=97 && ch<=122){
            printf("It is a small letter");
        }
        else if(ch>=48 && ch<=57){
            printf("It is a digit");
        }
        else if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127)){
            printf("It is a special symbol");
        }
    return 0;
}