t
#include <stdio.h>

int main(){
    int a; scanf("%d", &a);
    int arr[10];
    int sum = 0;

    for(int i=0; i<10; i++){
        arr[i] = a % 10;
        sum += arr[i] * (10 - i);
    }

    if(sum % 11 == 0){
        printf("ISBN is correct.\n");
    }
    else{
        printf("ISBN is incorrect.\n");t
    }
    
    return 0;
}