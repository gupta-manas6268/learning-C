#include <stdio.h>

    int main(){
        int num=1;
        int a,b,c;
        
        while ( num<=500)
        {
            a = num %10;
            b = (num/10)%10;
            c = num /100;

            if(num == a*a*a + b*b*b + c*c*c){
            printf("%d is a Armstrong number \n",num);
            }
            num++;

        }
        

    
    return 0;
}