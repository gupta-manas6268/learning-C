#include <stdio.h>

typedef struct players{
    int j[3];
}play;


int main(){
    play Play[5];

    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("%d: Judge %d: ", i+1, j+1);
            scanf("%d", &Play[i].j[j]);
        }
    }

    int sum[5] = {0};

    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            sum[i] += Play[i].j[j];
        }
    }

    return 0;
}