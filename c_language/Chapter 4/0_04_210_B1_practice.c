// Q.8: Write a program to find the range of a set of numbers entered
//       through the keyboard. Range is the difference between the smallest
//       and biggest number in the list.





















#include <stdio.h>

int main(){
    int num_1, num_2, num_3;
    char another;
    printf("Enter two numbers\n");
    scanf("%d %d", &num_1, &num_2);

    do{
        if(num_1 >= num_2){
            printf("Want to enter another number.\n");
            scanf("%c", &another);
            if(another == 'y'){
                printf("Enter a number\n");
                scanf("%d", &num_3);
                if(num_3 >= num_1){
                    fflush(num_2);
                    
                }
            }
        }
    }
    return 0;
}