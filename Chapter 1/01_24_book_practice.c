#include <stdio.h>

    int main(){
        int far;
        printf(" Temperature in farenheit is \n");
        scanf("%d",&far);

        int cel;
        cel = (far-32)*5/9;
        printf("Temperature in celsius is %d\n",cel);
    
    return 0;
}