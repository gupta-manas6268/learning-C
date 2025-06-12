#include <stdio.h>

    int main(){
        int length, breadth, radius;

        printf("What is the length of rectangle \n");
        scanf("%d", &length);

        printf("What is the breadth of rectangle \n");
        scanf("%d", &breadth);

        printf("What is the radius of circle \n");
        scanf("%d", &radius);

        float area;
        area = 3.14*radius*radius;
        printf("Area of circle is %f\n", area);

        

        int perimeter;
        perimeter = 2*(length+breadth);
        printf("Perimeter of rectangle  is %d\n", perimeter);
    
    return 0;
}