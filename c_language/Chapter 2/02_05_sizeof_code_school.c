#include <stdio.h>

    int main(){
        int a = sizeof(int);   // Ex: "sizeof(x)".This function gives the size of "x" in bytes.
        printf("%d bytes \n",a);

        int b = sizeof(long long);
        printf("%d bytes",b);

    return 0;
}