#include <stdio.h>

int main(){
    // We use 'continue' to decrease T.C. of code.
    
    int skip = 5, i = 0;
    while (i < 10){
        i++;
        if (i != skip){
            continue;
        }
        else{
            printf("%d \n", i);
        }
    }


    return 0;
}