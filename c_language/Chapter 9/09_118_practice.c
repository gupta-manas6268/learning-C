#include <stdio.h>
typedef struct bank{
    int acc;
    int money;
    int year;
    char name[20];
}ban;

void show(ban e1){
    printf("The Account no. of customer is: %d\n", e1.acc);
    printf("The Deposit money of customer is: %d\n", e1.money);
    printf("The Year in which account start is: %d\n", e1.year); 
    printf("The Name of customer is: %s\n", e1.name);
};
int main(){
    ban e1;

    printf("The Account no. of customer is: \n");
    scanf("%d", &e1.acc);
    printf("The Deposit money of customer is: \n");
    scanf("%d", &e1.money);
    printf("The Year in which account start is: \n");
    scanf("%d", &e1.year); 
    printf("The Name of customer is: \n");
    scanf("%d", &e1.name);

    show(e1);
    return 0;
}