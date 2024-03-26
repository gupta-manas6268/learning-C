#include <stdio.h>

    int main(){
        int num;
        printf("Enter the value of number \n");
        scanf("%d",&num);

        if(num<0){
            printf("The absolute value of the number is %d\n",-num);
        }
        else{
            printf("The absolute value of the number is %d\n",num);
        }
    
    return 0;
}