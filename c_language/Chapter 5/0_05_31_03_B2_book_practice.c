// Q.6.2: A 5-digit positive integer is entered through the keyboard, write a non-
//         recursive to calculate sum of digits of the 5-digit number.        





















#include <stdio.h>
#include <math.h>

int sum(int num){
    int i=0, sum=0;
    while(num>0){
        sum += num%10;
        num /= pow(10,i+1);
    }
    printf("%d", sum);
}
int main(){
    int num;
        printf("Enter an 5 digit integer \n");
        scanf("%d",&num);
        sum(num);
    return 0;
}