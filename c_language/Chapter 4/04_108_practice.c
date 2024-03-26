#include <stdio.h>

    int main(){
        int i, factorial=1, n;
        printf("Enter the value of n \n");
        scanf("%d",&n);

        for(i=1; i<=n; i++){
        factorial *=i;
        }

        printf("The factorial of number %d is %d", n, factorial);
    
    
    return 0;
}