t

// Q.9: To uniquely identify a book a 10-digit ISBN (International Standard
//       Book Number) is used. The rightmost digit is a checksum digit. This
//       digit is determined from the other 9 digits using the condition that
//       d1 + 2d2 + 3d3 + ... + 10d10 must be a multiple of 11 (where di
//       denotes the ith digit from the right). The checksum digit d1 can be
//       any value from 0 to 10: the ISBN convention is to use the value X to
//       denote 10. Write a program that receives a 10-digit integer,
//       computes the checksum, and reports whether the ISBN number is
//       correct or not.
















#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    bool Ans = true;

    char bookNum[11];  // Need space for the null terminator
    gets(bookNum);

    int num[10];

    for(int i=0; i<10; i++){
        if((bookNum[i] >= 48) && (bookNum[i] <= 57)){
            num[i] = bookNum[i] - 48;
        }
        else if((bookNum[i] == 88) && (i == 9)){
            num[i] = 10;
        }
        else{
            printf("It is an invalid number\n");

            Ans = false;

            break;
        }
    }

    int checker = 0;

    for(int i=0; i<10; i++){
        checker += (num[i] * (i+1));
    }

    if((checker % 11 == 0) && (Ans == true)){ printf("ISBN number is correct\n");}
    else if((Ans == true) && (checker % 11 != 0)){ printf("ISBN number is not correct\n");}

    return 0;
}