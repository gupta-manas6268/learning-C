t

#include <stdio.h>

typedef struct cricketer{
    char name[50];
    int age;
    int testMatch;
    int avgRun;
}cricketer;

int main(){
    cricketer batsMan[20];

    for(int i=0; i<20; i++){
        printf("%d. Name of Cricketer: ", i+1);
        scanf("%d", batsMan[i].name);

        printf("%d. Age of Cricketer: ", i+1);
        scanf("%d", batsMan[i].age);

        printf("%d. No. of test matches Cricketer played: ", i+1);
        scanf("%d", batsMan[i].testMatch);

        printf("%d. Average run of Cricketer in test match: ", i+1);
        scanf("%d", batsMan[i].avgRun);
    }

    return 0;
}