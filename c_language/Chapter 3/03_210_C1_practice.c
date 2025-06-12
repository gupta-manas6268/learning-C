#include <stdio.h>

    int main(){
        float x1,y1;
        printf("Enter the values of x1 and y1 \n");
        scanf("%f %f",&x1, &y1);

        float x2,y2;
        printf("Enter the values of x2 and y2 \n");
        scanf("%f %f",&x2, &y2);

        float x3,y3;
        printf("Enter the values of x3 and y3 \n");
        scanf("%f %f",&x3, &y3);

        int ar;
        ar= (x1*(y2-y3) +x2*(y3-y1)+x3*(y1-y2));
        if(ar==0){
            printf("These points are collinear \n");
        }
        else{
            printf("These points are non-collinear \n");
        }

    
    return 0;
}