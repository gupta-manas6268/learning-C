// Q.2: If a five-digit number is input through the keyboard,
//       write a program to calculate the sum of its digita. ?


























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

        printf("The sum of digits of number is %d\n", a+b+c+d+e);


    
    return 0;
}