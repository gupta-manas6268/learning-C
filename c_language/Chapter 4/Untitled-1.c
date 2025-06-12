#include <stdio.h>

    int main(){
        int num;
        printf("Enter a five digit number \n");
        scanf("%d",&num);

        int a, b, c, d, e;
        a = num % 10;
        b = (num/10)%10;
        c = (num/100)%10;
        d = (num/1000)%10;
        e = (num/10000);

        printf("The reverse order of the number is %d%d%d%d%d",a,b,c,d,e);

        int n, reverse = 0;

        while(reverse = reverse * 10)

        
    
    return 0;
}