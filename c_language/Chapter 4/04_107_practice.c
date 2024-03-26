#include <stdio.h>

    int main(){
        int i, sum=0, n=10;
        for(i=0; i<=n; i++){
        sum +=i;
        }

        printf("The value of sum of numbers occuring in multiplication table of 8 is %d", 8*sum);
    
    return 0;
}