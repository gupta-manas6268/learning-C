#include <stdio.h>

    int main(){
        float a,b,c;
        printf("Enter the three numbers a,b and c \n");
        scanf("%f %f %f",&a,&b,&c);

        if (a>=b && a>=c)
        printf("'a' is the greatest of all \n");

        if (b>=a && b>=c)
        printf("'b' is the greatest of all \n");

        if(c>=a && c>=b)
        printf("'c' is the greatest of all \n"); 
           
    return 0;
}