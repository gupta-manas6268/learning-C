// Q.9.1: A positive integer is entered through the keyboard, write a function
//       to find the binary equivalent of this number (Without using recursion):




















#include <stdio.h>
#include <math.h>

void binary(int num){
    long long int bin = 0;
    printf("The binary equivalent of %d is ", num);
    for(int i=0; ;i++){
        if(num==0){
            break;
        }
        else{
            bin += (num%2)*pow(10, i);
            num /=2;
        } 
    }
    printf("%lld.", bin);
}
int main(){
    int num, i=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    binary(num);
    
    return 0;
}