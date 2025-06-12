#include <stdio.h>

    int main(){
        int n;
        printf("Enter the value of n \n");
        scanf("%d", &n);

        int i=0, sum=0;
        do{
            sum +=i;
            
            i++;   
        }while(i <= n);
        printf("The value of sum(1 to %d) is %d\n",n, sum); 
        

    
    return 0;
}