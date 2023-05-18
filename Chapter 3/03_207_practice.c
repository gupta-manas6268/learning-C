#include <stdio.h>

    int main(){
        int a,b,c;
        printf("Enter the value of angle A \n");
        scanf("%d",&a);

        printf("Enter the value of angle B \n");
        scanf("%d",&b);

        printf("Enter the value of angle C \n");
        scanf("%d",&c);

        int d;
        d=a+b+c;

        if( d==180){
            printf("It is a valid triangle\n");
        }
        else{
            printf("It is a invalid triangle\n");
        }
    
    return 0;
}