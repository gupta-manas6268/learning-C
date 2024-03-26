#include <stdio.h>
int sum(int x);

int main(){
        int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);

        printf("The sum of first %d natural numbers is %d", n, sum(n));

    return 0;
}
int sum(int x){
    if (x==1){
        return 1;
    }
    else{
        return x + sum(x-1);
        x++; // This line doesn't affect the code as it appears after return statement.
    }
}