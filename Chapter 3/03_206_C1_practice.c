#include <stdio.h>

    int main(){
        int ram, shyam, ajay;
        printf("Enter the age of Ram, Shyam and Ajay\n");
        scanf("%d %d %d", &ram, &shyam, &ajay);

        if(ram<=shyam && ram<=ajay){
            printf("Ram is the youngest of all \n");
        }
        if(shyam<=ram && shyam<=ajay){
            printf("Shyam is the youngest of all \n");
        }
        if(ajay<=shyam && ajay<=ram){
            printf("Ajay is the youngest of all \n");
        }
    
    return 0;
}