#include <stdio.h>

    int main(){

        int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);

        int i, sum=0;
        for(i=0; i<=n; i++){
            sum +=i;
        }
        printf("The value of sum is %d", sum);
    
    return 0;
}