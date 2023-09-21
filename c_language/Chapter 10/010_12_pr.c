#include <stdio.h>

int main(){
    int j;
    printf("The value of 'j' is \n");
    scanf("%d", &j);

    FILE *ptr;
    ptr = fopen("table.txt", "w"); 
        fprintf(ptr, "The multiplication table of %d is given below: \n", j);
    for(int i = 1; i <= 10; i++){
        fprintf(ptr, "%d x %d = %d\n", j, i, j*i);
    }
    fclose(ptr);
    printf("Successfully generated table of %d to table.txt\n", j);
    
    return 0;
}