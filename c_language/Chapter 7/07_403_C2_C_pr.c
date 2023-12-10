l
#include <stdio.h>

int main(){
    int arr[4][4];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            arr[i][j] += arr[j][i] - arr[i][j];
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", arr[i][j]);t

            if(j == 3){
                printf("\n");
            }
        }
    }

    return 0;
}