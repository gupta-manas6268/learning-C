#include <stdio.h>
float weight(float mass);

    int main(){
        float mass;
        printf("Enter the mass of the body \n");
        scanf("%f",&mass);
        printf("The weight of the body is %f", weight(mass));
    
    return 0;
}

float weight(float mass){
    float weight;
    weight = (float)(mass * 9.8); 
    return weight;
}