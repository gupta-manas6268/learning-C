// Q.8: Write a function to compute the distance between two points and
//       use it to develop another function that will compute the area of the
//       triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
//       these functions to develop a function which returns a value 1 if the
//       point (x, y) lines inside the triangle ABC, otherwise returns a value
//       0.























#include <stdio.h>
#include <math.h>

double power(double a, double b){
    double ans = 1;

    for(int i=b; i>=1; i--){ ans *= a;}

    return ans;
}

double distance(double x1, double x2, double y1, double y2){
    double ans;

    ans = sqrt(power((x1 - x2), 2) + power((y1 - y2), 2));

    return ans;
}

double area(double x1, double x2, double x3, double y1, double y2, double y3){
    double del = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))/ 2;

    return (del >= 0)? del: -del;
}

double inside_outside(double x1, double x2, double x3, double y1, double y2, double y3, double x, double y){
    double inside_area = area(x, x2, x3, y, y2, y3) + area(x1, x, x3, y1, y, y3) + area(x1, x2, x, y1, y2, y); 

    if(area(x1, x2, x3, y1, y2, y3) == inside_area){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    double x1, x2, x3, y1, y2, y3, x, y; scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x, &y);

    double dis_12 = distance(x1, x2, y1, y2), dis_23 = distance(x3, x2, y3, y2), dis_31 =  distance(x1, x3, y1, y3);;

    printf("The distance of three points: %lf %lf %lf\n",  dis_12, dis_23, dis_31);
    printf("The Area of the Triangle: %lf\n", area(x1, x2, x3, y1, y2, y3));

    printf("(%lf, %lf): %d\n", x, y, inside_outside(x1, x2, x3, y1, y2, y3, x, y));

    return 0;
}