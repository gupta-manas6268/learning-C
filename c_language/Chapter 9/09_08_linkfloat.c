// Write notes of this code topic in Register.

// From this Code, notes are from 'Let Us C' book.





#include <stdio.h>

void linkfloat();
/*  When parsing our source file, if the compiler encounters a reference to
     the address of a float, it sets a flag to have the linker link in the
     floating-point emulator. A floating-point emulator is used to
     manipulate floating-point numbers in functions like scanf( ) and
     atof( ). There are some cases in which the reference to the float is a
     bit obscure and the compiler does not detect the need for the
     emulator. The most common is using scanf( ) to read a float in an
     array of structures as shown in our program.*/

//   It forces linking of the floating-point emulator into an application. 
//   There is no need to call this function, just define it anywhere 
//   in your program.

int main(){
    struct book{
        char name;
        float price;
        int pages;
    };

    struct book b[100];

    int i;
    for (i = 0; i <= 99; i++){
        printf("Enter name, price and pages ");
        fflush(stdin);
        scanf("%c %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }
    for (i = 0; i <= 99; i++)
        printf("%c %f %d\n", b[i].name, b[i].price, b[i].pages);

    return 0;
}
void linkfloat(){
    float a = 0, *b;
    b = &a; /* cause emulator to be linked */
    a = *b; /* suppress the warning - variable not used */
}