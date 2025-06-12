// Execution of a loop an unknown number of times.
#include <stdio.h>
// Odd loop using a do-while loop.
    int main(){
        // In odd loop statements within it are executed at least once even if 'n' is supplied first time itself.
        // Odd loops are simpler to use in a do-while loop.
        char another = 'y';
        // char another = 'n'
        int num;

        do{
            printf("Enter a number\n");
            scanf("%d",&num);
            printf("square of %d is %d\n",num, num*num);
            printf("Want to enter another number y/n \n");
            fflush(stdin);
            scanf("%c",&another);
        }while (another == 'y');
        // }while (another == 'n');
    
    return 0;
}