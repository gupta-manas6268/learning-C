#include <stdio.h>

    int main(){
        int a;
        printf("The value of a is \n");
        scanf("%d", &a);
        while(a<10){
         // a = 11;
         // while(a>10){ ---→ These two lines will lead to an infinite loop
          printf("%d\n", a);
          a++;
        }
    
    return 0;
}