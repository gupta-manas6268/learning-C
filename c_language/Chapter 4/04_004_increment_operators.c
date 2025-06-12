#include <stdio.h>

    int main(){
        int i = 5;
        printf("The value after i++ is %d\n", ++i);
        i++; // ---→ Firstly we print then we do increment in number.
        ++i; // ---→ Firstly we increment then we print the number.
        printf("The value of i is %d\n", i);
        
        i+=10; //--→ Increments i by 10
        printf("The value of i is %d\n", i);
    return 0;
}