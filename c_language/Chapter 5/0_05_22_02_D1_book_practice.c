// Q.4: Write a function power ( a, b ), to calculate the value of 
//       power of a raised to b.




















#include <stdio.h>

int power(int a, int b){
    int power = 1;
    for(int i = b; i; i--){
        power *= a;
    }
    return power;
}
int main(){
    int a, b;

    printf("Enter a\n");
    scanf("%d",&a);

    printf("Enter b\n");
    scanf("%d",&b);

    power(a, b);
    printf("%d to the power %d is %d", a, b, power(a,b));

    return 0;
}