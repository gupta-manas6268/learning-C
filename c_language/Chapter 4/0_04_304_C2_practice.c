// Q.12: Write a program to generate all combinations of 1, 2 and 3 using for
//        loop.




















#include <stdio.h>

int main(){
    for(int i=1; i<=3; i++){
        printf("\n(%d)",i);
        for(int j=1; j<=3; j++){
            if(j!=i){
            printf("(%d,%d)", i, j);
            
            for(int k=1; k<=3; k++){
                if(k!=i && k!=j)
                printf("(%d,%d,%d)", i, j, k);
            }
            }
        }
    }
    return 0;
}