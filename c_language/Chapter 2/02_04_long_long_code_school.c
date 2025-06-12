#include <stdio.h>

    int main(){
        long long a,b; // long long is used for long calculations because it has "8 bytes".
        printf("Enter a:\n");
        scanf("%lld",&a);

        printf("Enter b:\n");
        scanf("%lld",&b);

        printf("a*b = %lld \n", a*b);

        long long int c,d; // long long int & long long both are used for long calculations because they have "8 bytes".
        printf("Enter c:\n");
        scanf("%lld",&c);

        printf("Enter d:\n");
        scanf("%lld",&d);

        printf("c*d = %lld", c*d);

    return 0;
}