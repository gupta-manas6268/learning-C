#include <stdio.h>
#include<math.h>

    int main(){
        float a;
        printf("The value of angle is \n");
        scanf("%f",&a);

        printf("sin(angle) is %f\n ", sin(a));
        printf("cos(angle) is %f\n ", cos(a));
        printf("tan(angle) is %f\n ", tan(a));
        printf("cosec(angle) is %f\n ", pow(sin(a),-1));
        printf("sec(angle) is %f\n ", pow(cos(a),-1));
        printf("cot(angle) is %f\n ", pow(tan(a),-1));
    return 0;
}