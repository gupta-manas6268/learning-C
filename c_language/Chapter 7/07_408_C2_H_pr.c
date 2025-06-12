#include <stdio.h>
#include <stdbool.h>

int main(){
    int n; scanf("%d", &n);
    int arr[n][n];
    bool matrix = true;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] != arr[j][i]){
                printf("Unsymmetric\n");
                matrix = false;
                break;
            }
            else if((i == n-1) && (j == n-1)){
                printf("Symmetric\n");
            }
        }
        if(matrix == false){
            break;
        }
    }
    return 0;
}