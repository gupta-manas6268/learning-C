t
// Q.9: Write a function to compute the greatest common divisor given by
//       Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
// 
//       1980 / 1617 = 1                1980 – 1 * 1617 = 363
//       1617 / 363 = 4                 1617 – 4 * 363 = 165
//       363 / 165 = 2                  363 – 2 * 165 = 33
//       165 / 33 = 5                   165 – 5 * 33 = 0
// 
//       Thus, the greatest common divisor is 33.





// Complete this code by using Pointers. As, it is not Output answer.












#include <stdio.h>

int gcd(int *a, int *b){
    
    int *c = *a - ((*a)/(*b)) * (*b);

    if((*c) == 0){ return *b;}
    else{ gcd(&b, &c);}

}

int main(){
    int a, b; scanf("%d %d", &a, &b);


    int ans = gcd(&a, &b);

    printf("%d", ans);

    return 0;
}