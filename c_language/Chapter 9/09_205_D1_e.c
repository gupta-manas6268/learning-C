#include <stdio.h>

typedef struct employee{
    int code;
    char name[50];
    char date[10];
}employee;

int main(){
    employee emp[3];

    for(int i=0; i<3; i++){
        printf("Enter Employee %d Code:", i+1);
        scanf("%d", &emp[i].code);

        printf("Enter Employee %d Name:", i+1);
        scanf("%s", emp[i].name);

        printf("Enter Employee %d Date of joining:", i+1);
        scanf("%s", emp[i].date);
    }

    char Date[10];
    printf("Enter Current date: "); scanf("%s", Date);

    int YesNo[3];

    // Char 'date' to 'int' date.
    for(int i=0; i<3; i++){
        int year[4], month[2], day[2];
        int Year2 = 0, Month2 = 0, Day2 = 0;

        // Char 'year' to 'int' year.
        for(int j=0; j<4; j++){
            year[j] = (emp[i].date[j+6] - 48);
        }
        for(int j=0; j<4; j++){
            Year2 *= 10;

            Year2 += year[j];
        }

        // Char 'month' to 'int' month.
        for(int j=0; j<2; j++){
            month[j] = (emp[i].date[j+3] - 48);
        }
        for(int j=0; j<2; j++){
            Month2 *= 10;

            Month2 += month[j];
        }

        // Char 'day' to 'int' day.
        for(int j=0; j<2; j++){
            day[j] = (emp[i].date[j+6] - 48);
        }
        for(int j=0; j<2; j++){
            Day2 *= 10;

            Day2 += day[j];
        }

        if()
    }

    

    return 0;
}