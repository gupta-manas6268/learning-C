// Q.6.1: A 5-digit positive integer is entered through the keyboard, write a
//         recursive to calculate sum of digits of the 5-digit number.        




















#include <stdio.h>
int sum(int i);

    int main(){
        int num;
        printf("Enter an 5 digit integer \n");
        scanf("%d",&num);
        printf("%d", sum(num));

    return 0;
}
int sum(int i){
    int a;
        if(i>=1){
            a = i%10;
            i = i / 10;
            return a + sum(i);
        }

}
