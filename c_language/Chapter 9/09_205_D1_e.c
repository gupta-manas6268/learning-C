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
        int Year = 0, Month = 0, Day = 0;

        // Char 'year' to 'int' year.
        for(int j=0; j<4; j++){
            year[j] = (emp[i].date[j+6] - 48);
        }
        for(int j=0; j<4; j++){
            Year *= 10;

            Year += year[j];
        }

        // Char 'month' to 'int' month.
        for(int j=0; j<2; j++){
            month[j] = (emp[i].date[j+3] - 48);
        }
        for(int j=0; j<2; j++){
            Month *= 10;

            Month += month[j];
        }

        // Char 'day' to 'int' day.
        for(int j=0; j<2; j++){
            day[j] = (emp[i].date[j+6] - 48);
        }
        for(int j=0; j<2; j++){
            Day *= 10;

            Day += day[j];
        }

        if()
    }

    

    return 0;
}