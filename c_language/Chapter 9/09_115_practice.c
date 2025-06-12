#include <stdio.h>
struct complex{
    int real;
    int complex;
};

void  display(struct complex c){
    printf("The real part of num is %d\n", c.real);
    printf("The complex part of num is %d\n", c.complex);
};

int main(){
    struct complex cnums;
        printf("Enter the real part of num\n");
        scanf("%d", &cnums.real);

        printf("Enter the complex part of num\n");
        scanf("%d", &cnums.complex);

        display(cnums);

    return 0;
}