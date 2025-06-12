#include <stdio.h>

    int main(){
        double a,b;
        printf("Enter a\n");
        scanf("%lf", &a);

        printf("Enter b\n");
        scanf("%lf", &b);

        printf(" a / b = %.2lf\n", a/b); // %.2lf type the answer upto 2 decimal place.

        int c,d;
        printf("Enter c\n");
        scanf("%d", &c);

        printf("Enter d\n");
        scanf("%d", &d);

        printf("a %% b = %d",c%d);
    return 0;
}