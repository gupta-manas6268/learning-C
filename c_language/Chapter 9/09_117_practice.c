#include <stdio.h>
typedef struct complex{
    int real;
    int complex;
}comp;

void display(comp c){
    printf("The real part of num is %d\n", c.real);
    printf("The complex part of num is %d\n", c.complex);
}
int main(){
    comp cnums[20];
        printf("Enter the real part of num\n");
        scanf("%d", &cnums[0].real);

        printf("Enter the complex part of num\n");
        scanf("%d", &cnums[0].complex);

        display(cnums[0]);

    return 0;
}