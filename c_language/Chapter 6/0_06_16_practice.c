// Q.4: Try Q.2 using call by value and verify that it doesn't
//       change the value of the said variable.




















#include <stdio.h>
// So call by value does not change the value of the given variable.

void swap(int a);

int main(){
    int x; scanf("%d", &x);
    printf("The value of 'x' before swap is %d\n", x);

    swap(x);
    printf("The value of x after swap is %d\n", x);
    return 0;
}
void swap(int a){
    int b = 10 * a;
    int temp;
    temp = a;
    a = b;
    b = temp;
}