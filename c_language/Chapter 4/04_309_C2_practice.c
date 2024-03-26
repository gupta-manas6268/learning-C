#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    for(int a=1; a<=30; a++){
        for(int b=1; b<=a; b++){
            for(int c=1; c<=b; c++){
                if(a>=b && a>=c && pow(a, 2) == pow(b, 2) + pow(c, 2)){
                        printf("%d,%d and %d are Pythagorean triplets.\n",a ,b ,c);
                    }
                else if(b>=a && b>=c && pow(a, 2) == pow(b, 2) + pow(c, 2)){
                        printf("%d,%d and %d are Pythagorean triplets.\n",a ,b ,c);
                    }
                else if(c>=b && c>=a && pow(a, 2) == pow(b, 2) + pow(c, 2)){
                        printf("%d,%d and %d are Pythagorean triplets.\n",a ,b ,c);
                    }
            }
        }
    }    
    return 0;
}