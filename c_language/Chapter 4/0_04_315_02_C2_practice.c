// Q.21: Write a program to produce the following output:
//                  1
//                1   1
//              1   2   1
//            1   3   3   1
//          1   4   6   4   1





















#include <stdio.h>

int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}
int main(){
    for(int line=5; line>=1; line--){
        for(int i=1;  i<=2*(line-1); i++){
            printf(" ");

        for(int num=1; num<=line; num++){
            int coefficient = fact(line-1)/(fact(num-1)*fact(line-num));
            printf("%d", coefficient);

            if(num<line){
                printf("   ");t
            }
        }
        printf("\n");
    }
}
    return 0;
}