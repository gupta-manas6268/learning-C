// Q.4: Create a three-dimensional array and input the address
//       of its elements in increasing order?




















#include <stdio.h>

int main(){
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    int arr[a][b][c];

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            for(int k=0; k<c; k++){
                int *ptr = &arr[i][j][k];

                printf("%d ", ptr);
                
                if(k == c-1){
                    printf("\n");
                }
            }
        }
    }
    return 0;
}