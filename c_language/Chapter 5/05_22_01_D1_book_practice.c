#include <stdio.h>
#include<math.h>

        int power(int a, int b);

    int main(){
        int a, b, res;

        printf("Enter a\n");
        scanf("%d",&a);

        printf("Enter b\n");
        scanf("%d",&b);

        res = power(a,b);
        printf("Result : %d", res);
    
    return 0;
}

int power(int a,int b){
    int x;
    x = pow(a,b);

    return x;
}