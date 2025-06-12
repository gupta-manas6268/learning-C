// Q.9.2: A positive integer is entered through the keyboard, write a function
//         to find the binary equivalent of this number (By Using recursion):
























#include <stdio.h>

long long int binary(int num){
    if (num == 0){
        return 0;
    }
    else{
        int bin = (num % 2) ;
        return bin + binary(num / 2)*10;
    }
}
int main()
{
    int num, i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    long long int bin = binary(num);
    printf("The binary equivalent of %d is %lld.\n", num, bin);

    return 0;
}