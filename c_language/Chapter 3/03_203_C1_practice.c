#include <stdio.h>

    int main(){
        int year;
        printf("Enter the year\n");
        scanf("%d", &year);

        if(year%4==0){
            printf("It is a leap year\n");
        }

        else{
            printf("It is a non leap year\n");
         }
    
    return 0;
}