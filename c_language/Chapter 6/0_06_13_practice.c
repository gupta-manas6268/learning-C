// Q.2: Write a program to change the value of a variable
//       to ten times of its current value. Write a function
//       and pass the value by reference.


















#include <stdio.h>
void swap(int *a);

    int main(){
        int x, y;
        y = 10 * x;
        printf("The value of 'x' before swap is %d\n", x);

        swap(&x);
        printf("The value of x after swap is %d\n", x);
    return 0;
}
void swap(int *a){
    int * b ;
    *b = 10 ** a;t
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 
}