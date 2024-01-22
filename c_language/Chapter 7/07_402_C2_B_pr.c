#include <stdio.h>

int main(){
    int arr[5][5];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int maxima[5];

    for(int i=0; i<5; i++){
        maxima[i] = arr[i][0];

        for(int j=0; j<5; j++){
            if(maxima[i] >= arr[i][j]){}

            else{
                maxima[i] = arr[i][j];
            }
        }
    }

    int ans = maxima[0];

    for(int i=0; i<5; i++){
        if(ans >= maxima[i]){}

        else{
            ans = maxima[i];
        }
    }

    printf("Greates Value = %d", ans);
    
    return 0;
}