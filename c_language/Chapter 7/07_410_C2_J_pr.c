t
#include <stdio.h>

int main(){
    int a[3][3], b[3][3], c[3][3];

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
            c[i][j] = (a[i][0] * b[])
        }
    }
    return 0;
}