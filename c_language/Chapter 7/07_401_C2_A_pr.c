#include <stdio.h>

int main(){
    int x = 3, y = 2, z = 3;
    int threed[x][y][z];

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            for(int k=0; k<z; k++){
                if(((i == 0) && (j == 0) && (k == 0)) || ((i == x-1) && (j == y-1) && (k == z-1))){
                    scanf("%d", &threed[i][j][k]);
                }
            }
        }
    }

    printf("First element = %d\n", threed[0][0][0]);
    printf("Last element = %d\n", threed[x-1][y-1][z-1]);

    return 0;
}