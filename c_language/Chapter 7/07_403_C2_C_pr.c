#include <stdio.h>

int main(){
    int a[4][4];
    int b[4][4];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            b[i][j] = a[j][i];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            a[i][j] = b[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}