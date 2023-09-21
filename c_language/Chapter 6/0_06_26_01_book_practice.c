// Q.8: Write a function to compute the distance between two points and
//       use it to develop another function that will compute the area of the
//       triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
//       these functions to develop a function which returns a value 1 if the
//       point (x, y) lines inside the triangle ABC, otherwise returns a value
//       0.























#include <stdio.h>
#include <math.h>

void point( float x1, float y1,float x2, float y2, float x3, float y3, float x, float y, float *dis_12, float *dis_23, float *dis_13, float *ar, float *ar_1, float *ar_2, float *ar_3){
    *dis_12 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    *dis_23 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    *dis_13 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));


    int mul = (x1*(y2-y3) - x2*(y3-y1) + x3*(y1-y2));
    int multi;
    if(mul>=0){
        multi = mul;
    }
    else{
        multi = -mul;
    }
    *ar = (1/2) * multi;
  
    int mul_1 = (x*(y2-y3) - x2*(y3-y) + x3*(y-y2));
    int multi;
    if(mul>=0){
        multi = mul_1;
    }
    else{
        multi = -mul_1;
    }
    *ar_1 = (1/2) * multi;

    int mul_2 = (x1*(y-y3) - x*(y3-y1) + x3*(y1-y));
    int multi;
    if(mul>=0){
        multi = mul_2;
    }
    else{
        multi = -mul_2;
    }
    *ar_2 = (1/2) * multi;

    int mul_3 = (x1*(y2-y) - x2*(y-y1) + x*(y1-y2));
    int multi;
    if(mul>=0){
        multi = mul_3;
    }
    else{
        multi = -mul_3;
    }
    *ar_3 = (1/2) * multi;


}

int main(){
    float x1, y1, x2, y2, x3, y3, x, y;
    float dis, ar, point;
    printf("Enter the coordinates of point 1:\n");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of point 2:\n");
    scanf("%f %f", &x2, &y2);

    printf("Enter the coordinates of point 3:\n");
    scanf("%f %f", &x3, &y3);

    printf("Enter coordinates of any point: \n");
    scanf("%f %f", &x, &y);

    point(x1, y1, x2, y2, x3, y3, x, y, &dis_12, &dis_23, &dis_13, &ar, &ar_1, &ar_2, &ar_3);

    printf("The distance between (%f,%f) and (%f,%f) is %f.", x1, y1, x2, y2, dis_12);

    if(ar == ar_1 + ar_2 + ar_3){
        printf("(%d,%d) lies inside the triangle the formed by coordinates (%d,%d),(%d,%d) and (%d,%d).", x, y, x1, y1, x2, y2, x3, y3);
    }
    else{
        if(ar == ar_1 + ar_2 + ar_3){
        printf("(%d,%d) lies outside the triangle the formed by coordinates (%d,%d),(%d,%d) and (%d,%d).", x, y, x1, y1, x2, y2, x3, y3);
    }
    }

    return 0;
}