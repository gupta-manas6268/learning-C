#include <stdio.h>

    int main(){
        int hard,ten;
        float car;
        printf("Hardness of steel is :\n");
        scanf("%d", &hard);

        printf("Carbon content in steel is :\n");
        scanf("%f", &car);

        printf("Tensile strength of steel is :\n");
        scanf("%d", &ten);

        if(hard > 50 && car < 0.7 && ten > 5600){
            printf("The steel is of Grade-10\n");
        }
        else if(hard > 50 && car < 0.7 ){
            printf("The steel is of Grade-9\n");
        }
        else if(car < 0.7 && ten > 5600){
            printf("The steel is of Grade-8\n");
        }
        else if(hard > 50 && ten > 5600){
            printf("The steel is of Grade-7\n");
        }
        else if(hard > 50 || car < 0.7 || ten > 5600){
            printf("The steel is of Grade-6\n");
        }
        else{
            printf("The steel is of Grade-5\n");
        }
    return 0;
}