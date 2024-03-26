// Q.6: Write a program to enter numbers till the user wants. At the end it
//       should display the count of positive, negative and zeros entered.




















#include <stdio.h>

int main(){
    int num;
    char another;
    int sum = 0;
    int nguesses = 0;
    do{
    printf("Enter a number: ");
    scanf("%d", &num);     
    
    sum += num;

    fflush(stdin);
    printf("\nWant to enter another number: ");
    scanf("%c", &another);

    nguesses++;
    }while (another == 'y');

    printf("The sum of all %d numbers is %d",nguesses, sum);
    

    return 0;
}