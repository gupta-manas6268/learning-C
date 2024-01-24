// Q.7: Write a program that converts a string like "124" to 
//       an integer 124.



















#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char *st; gets(st);

    bool Ans = true;

    int ans = 0;

    while(*st != '\0'){

        if((*st >= 48) && (*st <= 57)){
            int a = 0;

            a += *st - 48;

            ans *= 10;
            ans += a;

            st++;
        }

        else{ 
            printf("Invalid number\n");

            Ans = false;
            break;
        }
    }

    if(Ans == true){
        printf("%d\n", ans);
    }

    return 0;
}