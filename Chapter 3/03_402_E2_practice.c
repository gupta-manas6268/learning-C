#include <stdio.h>

    int main(){
        int year;
        printf("Enter the year \n");
        scanf("%d",&year);

        (year%4==0)?
        printf("It is a leap year \n"):
        printf("It is not a leap year \n");
    
    return 0;
}