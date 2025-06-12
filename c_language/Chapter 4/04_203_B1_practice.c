#include <stdio.h>

    int main(){
        int a,b;
        printf("Enter the value of a and b \n");
        scanf("%d %d",&a,&b);

        int answer=1;

        while(b--){
            answer *= b;
        }
        printf("a to the power b is %d",answer);

    return 0;
}