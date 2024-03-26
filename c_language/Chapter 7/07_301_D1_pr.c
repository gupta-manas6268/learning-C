#include <stdio.h>

int main(){
    int arr[25];

    for(int i=0; i<25; i++){
        scanf("%d", &arr[i]);

        int a=0;
        for(int j=0; j<i; j++){
            if(arr[j] == arr[i]){
                a++;
            }
            if(j == i-1){
                if(a != 0){
                    printf("Searched %d times.\n", a);
                }
            }
        }
    }
    return 0;
}