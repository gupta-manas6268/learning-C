// Q.1(i):Explain step by step evaluation of 3*x/y - z + k
//         where x = 2, y = 3, z = 3, k = 1. ?
//   (ii):Find 2*3/4 + 4/4 + 8 - 2 + 5/8. ?

























#include <stdio.h>

    int main(){
        int x=2, y=3, z=3, k=1;
        printf("%f\n", 3*x/y-z+k);

        // 3*2/y-z+k
        // 6/3-z+k
        // 2-3+1
        // 0.000000

        printf("%d\n",2*3/4+4/4+8-2+5/8);








        

        // 6/4+4/4+8-2+5/8
        // 1+4/4+8-2+5/8   Here 6/4=1 not 1.5 because 6 & 4 both are integers.
        // 8

        printf("%f\n",3/2*4 + 3/8);

        // 3/8 + 3/8
        // 0 + 0 = 0

        printf("%d",3/2*4 + 3/8);

        return 0;
}