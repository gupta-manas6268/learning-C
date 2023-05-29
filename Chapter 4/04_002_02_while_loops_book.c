#include <stdio.h>

int main()
{
    int i = 10;
    while (i++ < 10)  // First the comparison of value of i with 10 is performed, and then the incrementation of i takes place.
    while (++i <= 10) // First incrementation of i takes place, then the comparison of value of i with 10 is performed. 
        printf("%d\n", i);

    return 0;
}