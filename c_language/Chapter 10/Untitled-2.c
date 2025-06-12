t
// On  010_14_pr.c
#include <stdio.h>

int main(){
    char name1, name2;
    int marks1, marks2;

    printf("Enter name of 2 Employees: \n");
    scanf("%s %s", &name1, &name2);

    printf("Enter marks of 2 Employees: \n");
    scanf("%d %d", &marks1, &marks2);

    FILE *ptr;
    ptr = fopen("Untitled-2.txt", "w");

    fprintf(ptr, "Name: %s. Marks: %d\n", name1, marks1);
    fprintf(ptr, "Name: %s. Marks: %d\n", name2, marks2);
    fclose(ptr);

    return 0;
}