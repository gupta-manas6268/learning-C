#include <stdio.h>

    int main(){
        int l,w;

        printf("Enter the length of the rectangle\n");
        scanf("%d",&l);

         printf("Enter the breadth of the rectangle\n");
        scanf("%d",&w);

        int a,b;
        a=2*(l+w);
        b=l*w;

        if(a>b){
            printf("perimeter of the rectangle is greater than its area\n");
        }
        else if(a<b){
            printf("area of the rectangle is greater than its perimeter\n");
        }
        else{
            printf("perimeter of the rectangle is equal to its area\n");
        }
    
    return 0;
}