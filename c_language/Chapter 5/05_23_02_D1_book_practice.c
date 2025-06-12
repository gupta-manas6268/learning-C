#include <stdio.h>
int roman(int year){
    int a = year/1000;
    int b = (year - a * 1000)/500;
    int c = (year - a * 1000 - b * 500)/100;
    int d = (year - a * 1000 - b * 500 - c * 100)/50;
    int e = (year - a * 1000 - b * 500 - c * 100 - d * 50)/10;
    int f = (year - a * 1000 - b * 500 - c * 100 - d * 50 - e * 10)/5;
    int g = (year - a * 1000 - b * 500 - c * 100 - d * 50 - e * 10 - f * 5)/1;

    for(int i=1; i<=a; i++){
        printf("m");
    }
    for(int i=1; i<=b; i++){
        printf("d");
    }
    for(int i=1; i<=c; i++){
        printf("c");
    }
    for(int i=1; i<=d; i++){
        printf("l");
    }
    for(int i=1; i<=e; i++){
        printf("x");
    }
    for(int i=1; i<=f; i++){
        printf("v");
    }
    for(int i=1; i<=g; i++){
        printf("i");
    }
}
int main(){
    int year;
    printf("Enter year \n");
    scanf("%d", &year);

    roman(year);
    return 0;
}