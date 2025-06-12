// Q.7: Write a program to receive an integer and find its octal equivalent.
//       (Hint: To obtain octal equivalent of an integer, divide it continuously
//       by 8 till dividend doesn’t become zero, then write the remainders
//       obtained in reverse direction.)

















#include <stdio.h>

int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);

    if(num == 0){
        printf("The octal equivalent of 0 is 0.");
    }

    int octal = 0;
    int place = 1;

    while (num != 0){
        octal += (num % 8) * place;
        num /= 8;
        place *= 10;
    }
    printf("The octal equivalent of %d is %d.", num, octal);

    return 0;
}