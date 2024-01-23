#include <stdio.h>

int main(){
    int a[3][3], b[3][3], ans[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ans[i][j] = (a[i][0] * b[0][j]) + (a[i][1] * b[1][j]) + (a[i][2] * b[2][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d  ", ans[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    return 0;
}