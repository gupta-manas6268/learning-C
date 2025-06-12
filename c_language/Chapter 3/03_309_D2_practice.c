#include <stdio.h>
#include<math.h>

    int main(){
        float h,w;
        printf("The height and weight of a person in meters and Kg are \n");
        scanf("%f %f",&h,&w);

        float bmi;
        bmi = w/pow(h,2);

        if(bmi<15){
            printf("The person is in Starvation");
        }
        else if(bmi>=15 && bmi<17.5){
            printf("The person is in Anorexic");
        }
        else if(bmi>=17.5 && bmi<18.5){
            printf("The person is Underweight");
        }
        else if(bmi>=18.5 && bmi<25){
            printf("The person has Ideal weight");
        }
        else if(bmi>=25 && bmi<30){
            printf("The person has Overweight");
        }
        else if(bmi>=30 && bmi<40){
            printf("The person is Obese");
        }
        else {
            printf("The person is Morbidly Obese");
        }
    
    return 0;
}