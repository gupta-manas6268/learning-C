#include <stdio.h>

    int main(){

        printf("****The multiplication table of 10 in reverse order is **** \n\n");
        for(int a=10; a; a--){
            printf("10 * %d = %d\n",a, 10*a);
        }
    
    return 0;
}