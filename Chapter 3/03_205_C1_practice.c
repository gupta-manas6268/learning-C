#include <stdio.h>

    int main(){
        int num,a,b,c,d,e;
        printf("Enter a five digit number \n");
        scanf("%d", &num);

        e=num%10;
        d= (num/10)%10;
        c = (num/100)%10;
        b = (num/1000)%10;
        a = (num/10000);

        printf("The reverse order of the number is ");

        printf("%d",e);
        printf("%d",d);
        printf("%d",c);
        printf("%d",b);
        printf("%d\n",a);

        if(e==a && d==b){
            printf("The original and reverse order of the number are same\n");
        }
        else{
            printf("The original and reverse order of the number are not same\n");
        }
    
    return 0;
}