// Q.8: Write a recursive function to obtain the first 25 numbers of a
//       Fibonacci sequence. In a Fibonacci sequence the sum of two
//       successive terms gives the third term. Following are the first few
//       terms of the Fibonacci sequence:
//       1 1 2 3 5 8 13 21 34 55 89...






















#include <stdio.h>
int fibonacci(int n);

    int main(){
        int n, count;
        printf("Enter no. of terms in fibonacci sequence. \n");
        scanf("%d",&n);

        for(count = 1; count <=n; count++){
            printf("\n%d. %d\n", count, fibonacci(count));
        }
        

    return 0;
}
int fibonacci(int x){
    if(x==1){
        return 1;
    }
    else if(x==2){
        return 1;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);    
    }
}