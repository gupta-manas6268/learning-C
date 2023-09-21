#include <stdio.h>

int main(){
    int arr[3][10];
    int array[3] = {2, 7, 9};

    for(int i=0; i<3; i++){
        printf("The multiplication table of %d is given below:\n", array[i]);

        for(int j=0; j<10; j++){
            int k = array[i];
            int ans = k * (j + 1); 
            printf("%d ", ans);
            
            if(j == 9){
                printf("\n\n");
            }
        }
    }
    return 0;
}