#include <stdio.h>

int strlen(char *st){
    char *ptr = st;
    int a = 0;
    while(*ptr != '\0'){
        a++;
        ptr++;
    }

    return a;
}
int main(){
    char st[50];
    gets(st);

    int ans = strlen(st);
    printf("The length of this string is %d.", ans);

    return 0;
}