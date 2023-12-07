// Q.4: According to the Gregorian calendar, it was Monday on the date
//       01/01/01. If any year is input through the keyboard write a program
//       to find out what is the day on 1st January of this year ?




















#include <stdio.h>

int main(){
    int knownYear = 1;
    int knownDayOfWeek = 1; // 0: Sunday, 1: Monday, ..., 6: Saturday

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    int diffYears = year - knownYear;

    int a, b;
    a = diffYears + diffYears / 4 - diffYears / 100 + diffYears / 400 ;
    b = (knownDayOfWeek + a);
    int dayOfWeak = b % 7;


    if(dayOfWeak == 0){
        printf("It is Sunday on the 01/01/%d", year);
    }
    else if(dayOfWeak == 1){
        printf("It is Monday on the 01/01/%d", year);
    }
    else if(dayOfWeak == 2){
        printf("It is Tuesday on the 01/01/%d", year);
    }
    else if(dayOfWeak == 3){
        printf("It is Wednesday on the 01/01/%d", year);
    }
    else if(dayOfWeak == 4){
        printf("It is Thursday on the 01/01/%d", year);
    }
    else if(dayOfWeak == 5){
        printf("It is Friday on the 01/01/%d", year);
    }
    else if(dayOfWeak == 6){
        printf("It is Saturday on the 01/01/%d", year);
    }

    return 0;
}