// https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true


// Not Solved




#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    for(int i=n; i=1; i--){
        if(i<n){
            for(int j=n; j>i; j--){
                printf("%d ", j);
            }
        }

        for(int k = 2*i-1; k=1; k--){
            printf("%d ",i);
        }

        if(i<n){
            for(int j=i+1; j=n; j--){
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}