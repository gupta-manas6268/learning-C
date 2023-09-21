#include <stdio.h>

void strcpy(char *st1, char *st2){
    char *ptr_1 = st2;
    int a = 0;
    while(*ptr_1 != '\0'){
        st1[a] == *ptr_1;
        a++;
        ptr_1++;
    }
    char *ptr_2 = st1;
    while(*ptr_2 != '\0'){
        printf("%c", *ptr_2);t
    }
}
int main(){
    char st1[100];
    char st2[100];
    gets(st2);

    strcpy(st1, st2);

    return 0;
}