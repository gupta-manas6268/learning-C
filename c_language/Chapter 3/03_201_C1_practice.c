#include <stdio.h>

    int main(){
        int a,b;
        printf("The cost price is \n");
        scanf("%d",&a);

        printf("The selling price is \n");
        scanf("%d",&b);

        int c;
        c = b-a;

        if(c<0){
            printf("You have made loss of ");
        }
        else{
            printf("You have made profit of ");
        }
        printf("%d",c);

    return 0;
}