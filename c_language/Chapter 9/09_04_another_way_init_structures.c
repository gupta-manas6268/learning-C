#include <stdio.h>
#include <string.h>

struct employee{
   int code;
   float salary;
   char name[20];
}; 
int main(){
    struct employee manas   = {100, 34.23, "Manas"};

    printf("Code is: %d \n", manas.code);
    printf("Salary is: %f \n", manas.salary);
    printf("Name is: %s \n", manas.name);
    return 0;
}