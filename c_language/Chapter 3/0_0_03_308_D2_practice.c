// Q.6: Write a program that receives month and date of birth as input and
//       prints the corresponding Zodiac sign based on the following table:
//       Sun Sign                 From - To
//       Capricorn                December 22 - January 19
//       Aquarius                 January 20 - February 17
//       Pisces                   February 18 - March 19
//       Aries                    March 20 - April 19
//       Taurus                   April 20 - May 20
//       Gemini                   May 21 - June 20
//       Cancer                   June 21 - July 22
//       Leo                      July 23 - August 22
//       Virgo                    August 23 - September 22
//       Libra                    September 23 - October 22
//       Scorpio                  October 23 - November 21
//       Sagittarius              November 22 - December 21.







#include <stdio.h>

int main(){
    int day, month;
    printf("Enter day and month of your birthday\n");
    scanf("%d %d", &day, &month);

    if(month == 1){
        if(day >= 1 && day <= 19){
            printf("You are in 'Capricorn' Zodiac sign\n");
        }
        else if(day >= 20 && day <= 31){
            printf("You are in 'Aquarius' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 2){
        if(day >= 1 && day <= 17){
            printf("You are in 'Aquarius' Zodiac sign\n");
        }
        else if(day >= 18 && day <= 29){
            printf("You are in 'Pisces' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 3){
        if(day >= 1 && day <= 19){
            printf("You are in 'Pisces' Zodiac sign\n");
        }
        else if(day >= 20 && day <= 31){
            printf("You are in 'Aries' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 4){
        if(day >= 1 && day <= 19){
            printf("You are in 'Aries' Zodiac sign\n");
        }
        else if(day >= 20 && day <= 30){
            printf("You are in 'Taurus' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 5){
        if(day >= 1 && day <= 20){
            printf("You are in 'Taurus' Zodiac sign\n");
        }
        else if(day >= 21 && day <= 31){
            printf("You are in 'Gemini' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 6){
        if(day >= 1 && day <= 20){
            printf("You are in 'Gemini' Zodiac sign\n");
        }
        else if(day >= 21 && day <= 30){
            printf("You are in 'Cancer' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 7){
        if(day >= 1 && day <= 22){
            printf("You are in 'Cancer' Zodiac sign\n");
        }
        else if(day >= 23 && day <= 31){
            printf("You are in 'Leo' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 8){
        if(day >= 1 && day <= 22){
            printf("You are in 'Leo' Zodiac sign\n");
        }
        else if(day >= 23 && day <= 31){
            printf("You are in 'Virgo' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 9){
        if(day >= 1 && day <= 22){
            printf("You are in 'Virgo' Zodiac sign\n");
        }
        else if(day >= 23 && day <= 30){
            printf("You are in 'Libra' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 10){
        if(day >= 1 && day <= 22){
            printf("You are in 'Libra' Zodiac sign\n");
        }
        else if(day >= 23 && day <= 31){
            printf("You are in 'Scorpio' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 11){
        if(day >= 1 && day <= 21){
            printf("You are in 'Scorpio' Zodiac sign\n");
        }
        else if(day >= 22 && day <= 30){
            printf("You are in 'Sagittarius' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else if(month == 12){
        if(day >= 1 && day <= 21){
            printf("You are in 'Sagittarius' Zodiac sign\n");
        }
        else if(day >= 22 && day <= 31){
            printf("You are in 'Capricorn' Zodiac sign\n");
        }
        else{
            printf("You entered a wrong date\n");
        }
    }
    else{
        printf("You entered a wrong date\n");
    }

    return 0;
}