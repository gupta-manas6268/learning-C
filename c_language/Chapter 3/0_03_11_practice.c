// Q.1: What will be the output of this program
// 
//       int a = 10;
//       if (a = 11){
//       printf("I am 11");}
//       else{
//       printf("I am not 11");}















#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11){      // Here as instead of == we use =. So answer will be "I am 11."
    printf("I am 11\n");
    }
    else{ 
    printf("I am not 11\n");
    }


    return 0;
}