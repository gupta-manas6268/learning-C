#include <stdio.h>

int main(){
    int arr[25];
    int a=0, b=0, c=0, d=0;

    for(int i=0; i<25; i++){
        scanf("%d", &arr[i]);

        if(arr[i] > 0){
            a++;
        }
        else if(arr[i] < 0){
            b++;
        }

        if(arr[i] % 2 == 0){
            c++;
        }
        else{
            d++;
        }
    }

    printf("positive = %d, negative = %d, odd = %d, even = %d", a, b, c, d);
    
    return 0;
}