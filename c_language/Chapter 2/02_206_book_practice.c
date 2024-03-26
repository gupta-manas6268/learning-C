#include <stdio.h>
#include<math.h>

    int main(){
        float t, v;
        printf("The value of temperature and wind velocity is\n");
        scanf("%f%f",&t,&v);

        float wcf;
        wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v,0.16);
        printf("The wind chill factor is %f",wcf);
    
    return 0;
}