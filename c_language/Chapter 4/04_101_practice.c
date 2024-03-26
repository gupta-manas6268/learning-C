#include <stdio.h>

    int main(){
        int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);

        printf("The multiplication table of %d\n",n);

        for(int a=1; a<11; a++){
            printf("%d\n",n*a);
        }
    
    return 0;
}