// Q.3: Write your own version of 'strcpy' function from
//       <string.h>






















#include <stdio.h>
#include <string.h>

int strCpy(char st1[], char st2[]){
// void strCpy(char st1[], char st2[]){
    
    int i = 0;

    while (st2[i] != '\0'){
        st1[i] = st2[i];

        i++;
    }

    st1[i] = '\0';
}

int main(){
    char *st1, *st2;

    gets(st1); gets(st2);

    strCpy(&st1, &st2);

    printf("%s", st1);

    return 0;
}