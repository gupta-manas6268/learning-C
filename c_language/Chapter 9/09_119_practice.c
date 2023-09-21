#include <stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;

void show(date d){
    printf("The Date is: %d/%d/%d\n", d.date, d.month, d.year);
};

int dateCmp(date d[1], date[2]){
    // Make decision on the basis of Year comparison.
    if(d[1].year>d[2].year){
        return 1;
    }
    if(d[1].year<d[2].year){
        return -1;
    }
    // Make decision on the basis of Month comparison.
    if(d[1].month>d[2].month){
        return 1;
    }
    if(d[1].month<d[2].month){
        return -1;
    }
    // Make decision on the basis of Date comparison.
    if(d[1].date>d[2].date){
        return 1;
    }
    if(d[1].date<d[2].date){
        return -1;
    }
    return 0;
}
int main(){
    date d[2];
    for(int i=0; i<2; i++){
    printf("Enter the Year for date %d: \n", i+1);
    scanf("%d", &d[i].year);
    printf("Enter the Month for date %d: \n", i+1);
    scanf("%d", &d[i].month);
    printf("Enter the Day for date %d: \n", i+1);
    scanf("%d", &d[i].date); 
    }

    for(int i=0; i<2; i++){
    show(d[i]); 
    }

    int a = dateCmp(d[1], d[2]);
    printf("Date Comparison functionn returns: %d", a);

    // From 12:48:59 , time in the lecture.

    return 0;
}