#include <stdio.h>

    int main(){
        float w;
        printf("Enter the weight of the boxer in pounds \n");
        scanf("%f", &w);

        if(w<115){
            printf("The boxer lies in Flyweight \n");
        }
        else if(w>=115 && w<122){
            printf("The boxer lies in Bantamweight \n");
        }
        else if(w>=122 && w<154){
            printf("The boxer lies in Featherweight \n");
        }
        else if(w>=154 && w<189){
            printf("The boxer lies in Middleweight \n");
        }
        else{
            printf("The boxer lies in Heavyweight \n");
        }
    
    return 0;
}