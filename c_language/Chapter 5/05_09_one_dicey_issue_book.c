#include <stdio.h>

int main(){
    int i = 10, j = 20;
    printf("%d %d %d\n", i, j); // For last specifier %d, a garbage integer gets printed.
    printf("%d\n", i, j);       // Here compiler didn't print value of "j" .

    return 0;
}