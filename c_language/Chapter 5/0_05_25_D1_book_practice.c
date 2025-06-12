// Q.5: A positive integer is entered through the keyboard. Write a function
//       to obtain the prime factors of this number.
//       For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime
//       factors of 35 are 5 and 7.


















#include <stdio.h>

int prime(int x){
    int a;
    for(a=2;a<=x;a++){
        if(x%a==0){
            printf("%d ",a);
            x = x/a;
            a--;
        }
    }

}

void main(){
    // int main(){
        int num;
        printf("Enter an integer\n");
        scanf("%d",&num);

        prime(num);
        // return 0;
}


