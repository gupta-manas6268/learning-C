#include <stdio.h>
void swap(int *a, int *b, int *c){
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;

}

int main(){
    int x, y, z;
    printf("Enter the values of x, y and z \n");
    scanf("%d %d %d", &x, &y, &z);

    swap(&x, &y, &z);
    printf("The value of x, y and z after swap are %d, %d and %d\n", x, y, z);

    return 0;
}