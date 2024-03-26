t

// Q.5: Write a structure capable for storing data. Write
//       a function to compare those dates.



















#include <stdio.h>
#include <string.h>

typedef struct Date{
    int date;
    char month[20];
    int year;
}date;

int compare(date day[], int size){
    if(day[0].year > day[1].year){ return 1;}
    else if(day[0].year < day[1].year){ return 0;}

    else{
        int Month;

        for(int i=0; i<2; i++){
            if(day[i].month == 'January'){ Month = 1;}
            else if(day[i].month == 'February'){ Month = 2;}
            else if(day[i].month == 'March'){ Month = 3;}
            else if(day[i].month == 'April'){ Month = 4;}
            else if(day[i].month == 'May'){ Month = 5;}
            else if(day[i].month == 'June'){ Month = 6;}
            else if(day[i].month == 'July'){ Month = 7;}
            else if(day[i].month == 'August'){ Month = 8;}
            else if(day[i].month == 'September'){ Month = 9;}
            else if(day[i].month == 'October'){ Month = 10;}
            else if(day[i].month == 'November'){ Month = 11;}
            else if(day[i].month == 'December'){ Month = 12;}
        }

        
    }
}

int main(){
    date day[2];

    for(int i=0; i<2; i++){
        scanf("%d %s %d", &day[i].date, &day[i].month, &day[i].year);
    }



    return 0;
}