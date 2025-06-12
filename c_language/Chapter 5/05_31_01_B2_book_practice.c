



















#include <stdio.h>

    int main(){
        int num;
        printf("Enter an 5 digit integer \n");
        scanf("%d",&num);

        int a,b,c,d,e;
        a = (num)%10;
        b = (num/10)%10;
        c = (num/100)%10;
        d = (num/1000)%10;
        e = (num/10000)%10;

        printf("The sum of digits of %d is %d", num , a + b + c + d + e);
    return 0;
}