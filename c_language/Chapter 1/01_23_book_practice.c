#include <stdio.h>

    int main(){
        int maths, physics,chemistry;

        printf("What is the marks in physics \n",physics);
        scanf("%d",&physics);

        printf("What is the marks in chemistry \n",chemistry);
        scanf("%d",&chemistry);

        printf("What is the marks in maths \n",maths);
        scanf("%d",&maths);

        int total;
        total=maths+physics+chemistry;
        printf("The total marks is %d\n",total);
        
        float percentage;
        percentage= (maths+physics+chemistry)/3;
        printf("The percentage marks is %f\n",percentage);

    return 0;
}