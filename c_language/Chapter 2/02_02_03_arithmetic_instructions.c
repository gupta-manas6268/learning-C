#include <stdio.h>

    int main(){
        float a,b;
        printf("Enter a\n");
        scanf("%f", &a);

        printf("Enter b\n");
        scanf("%f", &b);

        printf(" a / b = %.10f", a/b); // %.10f type the answer upto 10 decimal place.

    return 0;
}