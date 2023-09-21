#include <stdio.h>

    int main(){
        float a,b,c;
        printf("Enter the three sides of the triangle \n");
        scanf("%f %f %f",&a ,&b ,&c);

        if( a+b>c && b+c>a && a+c>b){
            printf("It is a valid triangle \n");
        }
        else{
            printf("It is not a valid triangle \n");
        }
    
    return 0;
}