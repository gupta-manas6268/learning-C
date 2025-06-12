#include <stdio.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    gets(s);
    printf("Your name is %s\n", s);

    char t[100];
    printf("Enter anything: ");
    gets(t);
    puts(t);
    
    return 0;
}