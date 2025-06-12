// Q.10: A Credit Card number is usually a 16-digit number. A valid Credit
//        Card number would satisfy a rule explained below with the help of a
//        dummy Credit Card number—4567 1234 5678 9129. Start with the
//        rightmost - 1 digit and multiply every other digit by 2.
//        4 5 6 7  1 2 3 4  5 6 7 8  9 1 2 9
//        8   12   2   6    10  14   18  4
//        Then subtract 9 from any number larger than 10. Thus we get:
//        8 3 2 6 1 5 9 4
//        Add them all up to get 38.
//        Add all the other digits to get 42.
//        Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card
//        number is valid.
//        Write a program that receives a Credit Card number and checks
//        using the above rule whether the Credit Card number is valid.















#include <stdio.h>
#include <string.h>

int main(){
    char st[21]; gets(st);  
    // Input Credit Card number in this format: 9123 4567 8456 7123

    int gap = 0;

    int arr[16];

    for(int i=0; i<20; i++){
        if((i+1) % 5 == 0){
            i++;
            gap++;
        }
        arr[i-gap] = st[i] - 48;
    }

    int ans1 = 0, ans2 = 0;

    for(int i=0; i<16; i+=2){
        arr[i] *= 2;

        if(arr[i] >= 10){
            arr[i] -= 9;
        }

        ans1 += arr[i];
    }

    for(int i=1; i<16; i+=2){
        ans2 += arr[i];
    }

    if((ans1 == 38) && (ans2 == 42)){
        printf("The Credit Card number is valid\n");
    }
    else{
        printf("The Credit Card number is not valid\n");
    }

    return 0;
}