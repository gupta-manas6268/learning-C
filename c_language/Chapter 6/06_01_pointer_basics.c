// A pointer is a variable which stores the address of another variable.
#include <stdio.h>

// ."&" is used in scanf and its called "& → address of"

    int main(){
        int i = 34;
        int *j = &i; // "j" will now store the address of "i".

        printf("The value of i is %d\n", i);
        printf("The value of i is %d\n", *j);  // "*" is "value at address operator".
        printf("The address of i is %u\n", &i); // "%u" is "format specifier of 'address of' operator".
        printf("The address of i is %u\n", j);
        printf("The address of j is %u\n", &j);

        printf("The value of j is %d\n", *(&j));

    return 0;
}