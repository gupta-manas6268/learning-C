#include <stdio.h>

int gcd(int *a, int *b){
    
    int *c = a - ((*a)/(*b)) * (*b);

    int temp = *a;
    *a = *b; 
    *b = *c;

    if((*b) == 0){ return (*b);}
    else{ gcd(&a, &b);}

}

int main(){
    int a, b; scanf("%d %d", &a, &b);


    int ans = gcd(&a, &b);

    printf("%d", ans);

    return 0;
}