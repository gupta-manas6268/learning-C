#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter the three sides of the triangle \n");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b){
        // printf("It is a valid triangle \n");
        {
            if (a == b && b == c && c == a){
                printf("It is a equitateral triangle \n");
            }
            else if (a == b || b == c || c == a){
                printf("It is a isosceles triangle \n");
            }
            else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b){
                printf("It is a right angled triangle \n");
            }
            else{
                printf("It is a scalene triangle \n");
            }
        }
    }

    else{
        printf("It is a invalid triangle \n");
    }

    return 0;
}