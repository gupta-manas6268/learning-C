// Execution of a loop an unknown number of times.
#include <stdio.h>
// Odd loop using a for loop.
    int main(){
        // In odd loop statements within it are executed at least once even if 'n' is supplied first time itself.
        // Odd loops are simpler to use in a do-while loop.
        char another = 'y';
        int num;

        for (; another == 'y';){
            printf("Enter a number\n");
            scanf("%d",&num);
            printf("square of %d is %d\n",num, num*num);
            printf("Want to enter another number y/n \n");
            fflush(stdin);
            scanf("%c",&another);
        }
    
    return 0;
}