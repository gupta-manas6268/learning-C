#include <stdio.h>
#include<math.h>

    int main(){
        float L1 ,L2;
        float G1 ,G2;

        printf("The value of latitude1 and latitude2 is \n");
        scanf("%f %f", &L1, &L2);

        printf("The value of longitude1 and longitude2 is \n");
        scanf("%f %f", &G1, &G2);

        float D;
        D = 3963*(acos(sin(L1*3.14/180)*sin(L2*3.14/180) + cos(L1*3.14/180)*cos(L2*3.14/180) * cos((G2-G1)*3.14/180)));

        printf("The distance between two points in miles is %f", D);    
    return 0;
}