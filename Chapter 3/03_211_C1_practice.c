#include <stdio.h>
#include<math.h>

    int main(){
        float x1, x2, y1, y2, radius;
        float dis;
        printf("Enter the x-coordinate and y-coordinate of center of circle \n");
        scanf("%f %f",&x1 ,&y1);

        printf("Enter the value of radius of the circle \n");
        scanf("%f", &radius);

        printf("Enter the x-coordinate and y-coordinate of a point \n");
        scanf("%f %f",&x2 ,&y2);

        dis = sqrt( pow(x2-x1,2) + pow(y2-y1,2));

        if(dis>radius){
            printf("Point lies outside of the circle \n");
        }
        else if(dis<radius){
            printf("Point lies inside of the circle \n");
        }
        else if(dis==radius){
            printf("Point lies on the boundary of the circle \n");
        }



    
    return 0;
}