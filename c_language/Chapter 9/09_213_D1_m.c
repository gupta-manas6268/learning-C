#include <stdio.h>

typedef struct players{
    int judge[3];
    int sum;
}play;


int main(){
    play Player[5];

    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("%d: Judge %d: ", i+1, j+1);
            scanf("%d", &Player[i].judge[j]);
        }
    }

    for(int i=0; i<5; i++){
        Player[i].sum = 0;

        for(int j=0; j<3; j++){
            Player[i].sum += Player[i].judge[j];
        }
    }

    int maximum = Player[0].sum;

    for(int i=0; i<5; i++){
        if(maximum < Player[i].sum){
            maximum = Player[i].sum;
        }
    }

    for(int i=0; i<5; i++){
        if(maximum == Player[i].sum){
            printf("Player: %d is MVP\n", i+1);
        }
    }

    return 0;
}