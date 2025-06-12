#include <stdio.h>

int main(){
    int principal, rate, years;
    int simpleInterest = (principal * rate * years)/100;

    printf("What is the principal\n");
    scanf("%f", principal);

    printf("What is the rate\n");
    scanf("%f", rate);

    printf("What is time in years\n");
    scanf("%f", years);
    
    printf("The value of simple Interest is %d", simpleInterest);
  return 0;
}   