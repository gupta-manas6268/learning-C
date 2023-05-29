// It is Q.6 in the lecture
#include <stdio.h>

    int main(){
        float a, b, c, d;
        printf("Enter the value of a, b, c and d \n");
        scanf("%f %f %f %f", &a, &b, &c, &d);

        if(a>=b && a>=c && a>=d){
            printf("a is the greatest of all \n");
        }
        if(b>=c && b>=d && b>=a){
            printf("b is the greatest of all \n");
        }
        if(c>=a && c>=b && c>=d){
            printf("c is the greatest of all \n");
        }
        if(d>=a && d>=b && d>=c){
            printf("d is the greatest of all \n");
        }

    return 0;
}