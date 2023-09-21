#include <stdio.h>

int main(){
    char s1[50], s2[50];
    int num1, num2;
    printf("Enter name of both employees: \n");
    scanf("%s %s", s1, s2);
    printf("Enter salaries of both employees: \n");
    scanf("%d %d", &num1, &num2);

    FILE *ptr;
    ptr = fopen("salaries.txt", "w");
    fprintf(ptr, "The salary of %s is %d.\n", s1, num1);
    fprintf(ptr, "The salary of %s is %d.\n", s2, num2);
    fclose(ptr);

    return 0;
}