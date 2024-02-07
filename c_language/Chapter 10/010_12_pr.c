// Very Easy Question

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("table.txt", "w");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    fprintf(ptr ,"Multiplication table is: \n");
    for(int i=1; i<=10; i++){
        fprintf(ptr ,"%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}