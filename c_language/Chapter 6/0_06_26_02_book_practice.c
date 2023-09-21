// Q.8: Write a function to compute the distance between two points and
//       use it to develop another function that will compute the area of the
//       triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
//       these functions to develop a function which returns a value 1 if the
//       point (x, y) lines inside the triangle ABC, otherwise returns a value
//       0.























#include <stdio.h>
#include <math.h>

void point( float x1, float y1,float x2, float y2, float x3, float y3, float *dis_12, float *dis_23, float *dis_13,float *s, float *ar, float *point){
    *dis_12 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    *dis_23 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    *dis_13 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));

    *s = (dis_12 + dis_13 + dis_23)/2;
    *ar = sqrt(s * (s - dis_12) * (s - dis_13) * (s - dis_23));


}

int main(){
    float x1, y1, x2, y2, x3, y3;
    float dis, ar, point;
    printf("Enter the coordinates of point 1:\n");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of point 2:\n");
    scanf("%f %f", &x2, &y2);

    printf("Enter the coordinates of point 3:\n");
    scanf("%f %f", &x3, &y3);

    return 0;
}