#include <stdio.h>
int sum(int n);

    int main(){
        int n;
        printf("Enter a natural number\n");
        scanf("%d",&n);

        printf("The sum of %d natural number is %d", n, sum(n));
    
    return 0;
}
int sum(int x){
if(x==1){
    return 1;
}
else{
    return x + sum(x-1);
    x++;
}
}