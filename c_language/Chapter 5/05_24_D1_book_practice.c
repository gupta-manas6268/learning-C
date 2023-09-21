#include <stdio.h>
void leap(int year);

    int main(){
        int year;
        printf("Enter year \n");
        scanf("%d", &year);

        leap(year);
    return 0;
}
void leap(int year){
        if(year % 4 == 0){
            printf("%d is a leap year\n", year);
        }
        else{
            printf("%d is a non-leap year\n", year);
        }
}