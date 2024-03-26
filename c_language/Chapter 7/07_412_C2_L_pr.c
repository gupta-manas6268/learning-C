#include <stdio.h>

int determinant(int *arr, int a, int b){
    if(a == 2 && b == 2){
        int ans = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);

        return ans;
    }
}

int main(){
    int a[6][6];

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            scanf("%d", &a[6][6]);
        }
    }

    determinant(a, 2, 2);

    return 0;
}