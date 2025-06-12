#include <stdio.h>
void avgAndPer(int a,int b,int c,float *avg,float *per){
    *avg = (float)(a + b + c) / 3;
    *per = *avg; 
}
int main(){
    int i, j, k;
    float avg, per;
    printf("Enter the marks between '1 to 100' of 3 subjects \n");
    scanf("%d %d %d", &i, &j, &k);

    avgAndPer( i, j, k, &avg, &per);
    printf("The average of marks is %f \n", avg);
    printf("The percentage of marks is %f \n", per);

    return 0;
}