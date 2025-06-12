#include <stdio.h>

    int main(){
        int a,b;
        printf("Enter the x cordinate of the point\n");
        scanf("%d",&a);

        printf("Enter the y cordinate of the point\n");
        scanf("%d",&b);

        if(b==0){
            printf("The point lies on x axis \n");
        }
        else if(a==0){
            printf("The point lies on y axis \n");
        }
        else if(a==0 && b==0){
            printf("The point lies on the origin \n");
        }
        else{
            printf("The point does not lies on x axis not on y axis  and also not on the origin\n");
        }

    
    return 0;
}