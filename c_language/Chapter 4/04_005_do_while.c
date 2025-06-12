#include <stdio.h>
// The do-while would execute its statements at least once, even if the condition fails for the first time.
    int main(){
        // int i = 0;
        int i = 0;
        do{
            printf("The value of i is %d\n", i);
            i++;
        }while(i < 10);
    
    return 0;
}