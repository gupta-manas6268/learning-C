// Q.7: A positive integer is entered through the keyboard, write a program
//       to obtain the prime factors of the number. Modify the function
//       suitably to obtain the prime factors recursively.



















#include <stdio.h>
int prime(int x);

    int main(){
        int num , a;
        printf("Enter an integer\n");
        scanf("%d",&num);

        prime(num);

    return 0;
}
int prime(int x){
    int a;
    for(a=2; a<=x; a++){
        if (x%a==0){
            printf("%d ", a);
            x = x/a;
            a--;
            return prime(x);
        }
    }

}