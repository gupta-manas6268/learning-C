#include <stdio.h>
#include<math.h>

    int main(){
        int a,b,c;
        printf("The value of a is \n");
        scanf("%d", &a);

        printf("The value of b is \n");
        scanf("%d", &b);

        printf("The value of c is \n");
        scanf("%d", &c);

        float s;
        s = (a + b + c)/2;
        float area;
        area = sqrt(s*(s-a)*(s-b)*(s-c));

        printf("The area of the triangle is %f\n", area);

    
    return 0;
}