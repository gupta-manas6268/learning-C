#include <stdio.h>

    int main(){
        int prime=0, n ,i;
        printf("The value of n is \n");
        scanf("%d",&n);

        for(i=2;i<n;i++){
            if (n%i==0){
                prime = 1;
                break;
            }
        }
        if (prime==1){
            printf("This is a non prime number");
        }
        else{
            printf("This is a prime number");
        }
    
    return 0;
}