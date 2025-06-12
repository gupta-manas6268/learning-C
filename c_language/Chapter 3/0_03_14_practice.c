// Q.2: Write a program to find whether a year entered 
//       by the user is a leap year or not? 
//       (Take year as an input from the user).


















#include <stdio.h>

    int main(){
        int year;
        printf("Enter the year\n");
        scanf("%d", &year);

        // A leap year is that is exactly divisible by 400, but not divisible by only 100.
        // Also a leap year is only divisible by 4.
        
        if(year % 400 == 0){
            printf("%d is a leap year\n", year);
        }
        
        else if(year % 100 == 0){
            printf("%d is not a leap year\n", year);
        }
        
        else if(year % 4 == 0){
            printf("%d is a leap year\n", year);
        }
        else{
            printf("%d is not a leap year\n", year);
        }

    return 0;
}