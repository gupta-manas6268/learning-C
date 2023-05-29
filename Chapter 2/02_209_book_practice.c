#include <stdio.h>

    int main(){
        int N;
        printf("The total money is \n");
        scanf("%d",N);

        int a,b,c;
        a = N%10;
        b = (N/10)%10;
        c = N/100;

        int d;
        d = a + b + c;
        printf("The smaller number of notes is %d\n", d);

    
    return 0;
}