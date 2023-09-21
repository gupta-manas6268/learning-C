// Q.9: Write a function to compute the greatest common divisor given by
//       Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
// 
//       1980 / 1617 = 1                1980 – 1 * 1617 = 363
//       1617 / 363 = 4                 1617 – 4 * 363 = 165
//       363 / 165 = 2                  363 – 2 * 165 = 33
//       165 / 33 = 5                   165 – 5 * 33 = 0
// 
//       Thus, the greatest common divisor is 33.



















#include <stdio.h>
// It is a good Question.Understand it properly.

void swap(int *a, int *b, int *c){
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;

}
int main(){
    int x, y;
    printf("Enter two integer numbers\n");
    scanf("%d %d", &x, &y);

    printf("The greates common divisor of %d and %d is ", x, y);
    do{
        int z=0;
    
        if(x>=y){
            int z;
            z = x - (x/y)*y;
            if(z==0){
                printf("%d", y);
                break;
            }
            else{
                swap(&x, &y, &z);
            }
        }
        else{
            int z;
            z = y - (y/x)*x;
            if(z==0){
                printf("%d", x);
                break;
            }
            else{
                swap(&y, &x, &z);
            }
        }
    }while(x>0 && y>0); 

    return 0;
}