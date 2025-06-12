// Q.2: Write a program to change the value of a variable
//       to ten times of its current value. Write a function
//       and pass the value by reference.


















#include <stdio.h>
void swap(int *a);

int main(){
        int x, y; scanf("%d", &x);
        y = 10 * x;
        printf("The value of 'x' before swap is %d\n", x);

        swap(&x);
        printf("The value of x after swap is %d\n", x);

    return 0;
}
void swap(int *a){
    *a = 10 * (*a); // By, *a = 10 * (*a).[New a = 10*a] & this code will not 
                    //     give me error.

}